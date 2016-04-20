
#include <hooker.h>
#include <cbase.h>

namespace Hooker
{
	HookerCvarRegister* hookerCvarRegister = NULL;

	void HookerCvarRegister::hooker(cvar_t *cvar)
	{		
		char **libraryNamePtr = Global::LibrariesCvarToName->retrieve(cvar->name);

		if(libraryNamePtr)
		{
			char* libraryName = *libraryNamePtr;
			LibrariesManager::addLibrary(libraryName,(void*)cvar);
		}

		Hooker::hookerCvarRegister->undoPatch();
		g_engfuncs.pfnCVarRegister(cvar);
		Hooker::hookerCvarRegister->doPatch();
	}

	HookerCvarRegister::HookerCvarRegister()
	{
		createPatch();

		doPatch();
	}

	void HookerCvarRegister::createPatch()
	{	
		memcpy((void*)originalBytes,(void*)g_engfuncs.pfnCVarRegister,this->patchSize);

		patchedBytes[0] = 0xE9;
		*((long*)(&patchedBytes[1])) = (char*)HookerCvarRegister::hooker - (char*)g_engfuncs.pfnCVarRegister - 5;
	}
	void HookerCvarRegister::doPatch()
	{
		if(Memory::ChangeMemoryProtection((void*) g_engfuncs.pfnCVarRegister,this->patchSize,PAGE_EXECUTE_READWRITE))
		{
			memcpy((void*)g_engfuncs.pfnCVarRegister,(void*)patchedBytes,this->patchSize);
		}
		else
		{
			SERVER_PRINT("PATCHING FAILED\n");
		}
	}
	void HookerCvarRegister::undoPatch()
	{
		memcpy((void*)g_engfuncs.pfnCVarRegister,(void*)originalBytes,this->patchSize);
	}
}