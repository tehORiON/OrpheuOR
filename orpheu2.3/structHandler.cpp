
#include <structHandler.h>
#include <global.h>

void StructHandler::convertToAmx(cell& value,long standardReturn,ConvertMode convertMode)
{
	value = (cell) standardReturn;
	Global::StructManagerObj->add(value,this);
}

StructHandler::StructHandler(StructInfo structInfo):LongHandler()
{
	this->structInfo = structInfo;
	this->name = structInfo.type;

	for(int i=0;i<structInfo.membersCount;i++)
	{
		memberNameToMember.insert(structInfo.members[i].name.c_str(),i);
	}
}

int StructHandler::getMemberID(char* memberName)
{
	int* IDPointer = memberNameToMember.retrieve(memberName);

	if(IDPointer)
	{
		return *IDPointer;
	}
	
	return -1;
}

TypeHandler* StructHandler::getMemberTypeHandler(unsigned int memberID)
{
	return structInfo.members[memberID].type;
}

long StructHandler::convertMemberToAmx(AMX* amx,cell* params,int memberID,long structureAddress)
{
	Member member = this->structInfo.members[memberID];
	long memberAddress = structureAddress + member.offset;

	return member.type->convertToAmxFromStructure(amx,params,(void*)memberAddress);
}

void StructHandler::convertMemberFromAmx(AMX* amx,cell* params,int memberID,long structureAddress)
{
	Member member = this->structInfo.members[memberID];
	long memberAddress = structureAddress + member.offset;

	return member.type->convertFromAmxToStructure(amx,*params,(void*)memberAddress);
}

long StructHandler::allocate()
{
	long structureAddress = (long) allocateMemoryBySize(structInfo.size);
	memset((void*)structureAddress,0,structInfo.size);
	return structureAddress;
}

int StructHandler::getSize()
{
	return structInfo.size;
}


