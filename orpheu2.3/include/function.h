
#ifndef _INCLUDE_FUNCTION_
#define _INCLUDE_FUNCTION_

#include <amxxmodule.h>
#include <typeHandler.h>
#include <memory.h>
#include <CVector.h>

#undef min
#undef max

#include <map>
#include <string>

using namespace std;

typedef enum OrpheuHookPhase
{
	OrpheuHookPre,
	OrpheuHookPost
};

typedef enum OrpheuHookReturn
{
	OrpheuIgnored,
	OrpheuOverride,
	OrpheuSupercede
};

class Function
{
	private:

		static unsigned char patch[];
		static int patchSize;
		static unsigned short int* patchFunctionIDAddress;
		static long* patchFunctionJumpAddress;
		unsigned char* originalBytes;
		unsigned char* patchedBytes;

		int argumentsPassLoopStart;
		int argumentsPassLoopEnd;

		unsigned int ifReturnByRefParamsCount;
		cell* argumentsToAmx;
		long* normalArguments;

		cell hookReturnValueConverted;

		long hookReturnValue;

		ForwardParam* parameters;
		TypeHandler** argumentsHandlers;

		TypeHandler** argumentsByRef;
		unsigned int* argumentsByRefPosition;
		unsigned int argumentsByRefCount;
	
		unsigned int argumentsCount;
		TypeHandler *returnHandler;
		void* address;
		bool isMethod;

		unsigned int id;

		bool isPatched;

		bool shouldCallHooks;

		map<long,long>* hooks[OrpheuHookPost+1];
		long currentHookID[OrpheuHookPost+1];

		OrpheuHookPhase hookPhase;
		OrpheuHookReturn hookReturnStatus;

#if defined WIN32
		void (__thiscall Function::* passObject)();
		
		void inline passObjectMethod()
		{ 
			long object = normalArguments[0];
			_asm mov ecx, object; 
		}

		void inline passObjectNonMethod(){}
#endif
		long espDislocation;
		long espDislocationAddHook;
		long espDislocationCallForward;

#if defined WIN32
		long espDislocationCall;
#endif
		long callOriginal();

		string library;

	public:
		Function(void* address,TypeHandler** argumentsHandlers,unsigned int argumentsCount,TypeHandler* returnHandler,string library,bool isMethod = false);
		~Function();
		unsigned int& getIfReturnByRefParamsCount();
		unsigned int& getArgumentsCount();
		cell call(AMX* amx,cell* params);

		void setID(unsigned short int id);

		void preparePatch();
		void doPatch();
		void undoPatch();

		long* getHookArgumentsHolder()
		{
			return normalArguments;
		}

		long hook();

		long addHook(AMX* amx,char* functionName,OrpheuHookPhase phase);
		void removeHook(OrpheuHookPhase phase,long functionHookPhaseID);
		void removeAllHooks();

		void convertArgumentsToAmx();
		OrpheuHookReturn callHooks(OrpheuHookPhase phase);
		OrpheuHookReturn callForward(long forward);

		cell getReturnToAmx(AMX* amx,cell* params);
		void setReturnFromAmx(AMX* amx,cell* params);
		bool setParamFromAmx(AMX* amx,cell* params);
		TypeHandler* getArgumentHandler(unsigned int argumentID);
		long getArgumentValue(unsigned int argumentID);

		bool hasReturn()
		{
			return returnHandler != NULL;
		}
		void blockHooks()
		{
			shouldCallHooks = false;
		}
		OrpheuHookPhase getHookPhase()
		{
			return hookPhase;
		}
		OrpheuHookReturn getHookReturnStatus()
		{
			return hookReturnStatus;
		}
		string getLibrary()
		{
			return this->library;
		}

		long getAddress()
		{
			return (long) address;
		}

		unsigned int getID()
		{
			return id;
		}
};

#endif
