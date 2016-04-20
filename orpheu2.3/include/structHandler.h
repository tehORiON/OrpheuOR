
#ifndef _INCLUDE_STRUCT_HANDLER_
#define _INCLUDE_STRUCT_HANDLER_

#include <typeHandlerImplementations/longHandler.h>
#include <string>
using namespace std;

#include <structInfo.h>
#include <sm_trie_tpl.h>

class StructHandler : public LongHandler
{
	protected:
		string name;
		KTrie<int> memberNameToMember;
		StructInfo structInfo;

	public:
 
		StructHandler(StructInfo structInfo);
		const char* getName() { return name.c_str(); }
		bool isStructure(){ return true; }
		int getMemberID(char* memberName);
		TypeHandler* getMemberTypeHandler(unsigned int memberID);
		long convertMemberToAmx(AMX* amx,cell* params,int memberID,long structureAddress);
		void convertMemberFromAmx(AMX* amx,cell* params,int memberID,long structureAddress);
		long allocate();
		int getSize();
		void convertToAmx(cell& value,long standardReturn,ConvertMode convertMode = Pass);
};

#endif
