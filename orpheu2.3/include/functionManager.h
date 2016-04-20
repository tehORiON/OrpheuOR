
#ifndef _INCLUDE_FUNCTION_MANAGER_
#define _INCLUDE_FUNCTION_MANAGER_

#include <sm_trie_tpl.h>
#include <CVector.h>

#include <ctime> 
#include <function.h>

#include <map>
 
using namespace std;

typedef struct 
{  
	Function* function;
	OrpheuHookPhase phase;
	long hookFunctionPhaseID;
} HookReferenceData;

class FunctionManager
{
	private:
			
		map<long,HookReferenceData*> hookReferences;
		KTrie<time_t>* functionNameToTimestamp;
		KTrie<unsigned short int>* functionNameToFunctionID;
		long currentHookID;
		CVector<Function*>* functions;
		
	public:

		FunctionManager();
		time_t getTimestamp(char* functionName);
		unsigned short int  addFunction(char* functionName,Function* function,time_t timestamp);
		Function* getFunction(unsigned short int functionID);
		unsigned short int getFunctionID(char* functionName);
		long addHook(AMX* amx,char* functionName,Function* function,OrpheuHookPhase phase);
		bool removeHook(long hookID);
		void removeAllHooks();
		void tryToRemove(char* functionName);
};

#endif
