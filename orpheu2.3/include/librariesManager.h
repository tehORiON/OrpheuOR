
#ifndef _INCLUDE_LIBRARIES_MANAGER_
#define _INCLUDE_LIBRARIES_MANAGER_

#include <signatureEntry.h>

struct LibraryInfo
{
	void* handle;
	void* baseAddress;
	long length;
};

namespace LibrariesManager
{
	bool addLibrary(char *libraryName,void *addressContained);
	bool hasLibrary(char *libraryName);
	void* findFunction(char* libraryName,char* functionName);
	void* findFunction(char* libraryName,unsigned char* signature,SignatureEntryType* signatureData,unsigned int);
	bool libraryContainsAddress(char* libraryName,long address);
	long getAddressOffset(long address,char* libraryName);
	long getAddressWithOffset(long offset,char* libraryName);
	long getLibraryAddress(char* libraryName);
	LibraryInfo* getLibrary(char* libraryName);
	void* findMemory(char* libraryName,unsigned char* signature,SignatureEntryType* signatureData,unsigned int length,long start);
}

#endif
