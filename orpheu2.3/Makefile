#(C)2004-2005 AMX Mod X Development Team
# Makefile written by David "BAILOPAN" Anderson
	
HLSDK = /usr/include/hlsdk/multiplayer
MM_ROOT = /usr/include/metamod/metamod

### EDIT BELOW FOR OTHER PROJECTS ###

OPT_FLAGS = -O2 -funroll-loops -s -pipe -fomit-frame-pointer -fno-strict-aliasing
DEBUG_FLAGS = -g -ggdb3
CPP = g++-4.2
NAME = orpheu

BIN_SUFFIX_32 = amxx_i386.so
BIN_SUFFIX_64 = amxx_amd64.so

OBJECTS = sdk/amxxmodule.cpp CDetourDis.cpp orpheu.cpp memory.cpp memoryStructureManager.cpp functionStructuresManager.cpp functionVirtualManager.cpp functionManager.cpp function.cpp filesManager.cpp hooker.cpp json/json_value.cpp json/json_reader.cpp global.cpp librariesManager.cpp typeHandlerManager.cpp configManager.cpp structHandler.cpp typeHandlerImplementations/boolHandler.cpp typeHandlerImplementations/byteHandler.cpp typeHandlerImplementations/longHandler.cpp typeHandlerImplementations/CBaseEntityHandler.cpp typeHandlerImplementations/charPtrHandler.cpp typeHandlerImplementations/edict_sPtrHandler.cpp typeHandlerImplementations/floatHandler.cpp typeHandlerImplementations/VectorHandler.cpp typeHandlerImplementations/CMBaseMonsterHandler.cpp typeHandlerImplementations/entvarHandler.cpp typeHandlerImplementations/short.cpp typeHandlerImplementations/charArrHandler.cpp typeHandlerImplementations/VectorPointerHandler.cpp typeHandlerImplementations/charHandler.cpp


LINK = 

INCLUDE = -I. -I$(HLSDK) -I$(HLSDK)/dlls -I$(HLSDK)/engine -I$(HLSDK)/game_shared -I$(HLSDK)/game_shared \
	-I$(MM_ROOT) -I$(HLSDK)/common -I$(HLSDK)/pm_shared -Isdk -Iinclude

GCC_VERSION := $(shell $(CPP) -dumpversion >&1 | cut -b1)

ifeq "$(GCC_VERSION)" "4"
        OPT_FLAGS += -fvisibility=hidden -fvisibility-inlines-hidden
endif

ifeq "$(DEBUG)" "true"
	BIN_DIR = Debug
	CFLAGS = $(DEBUG_FLAGS)
else
	BIN_DIR = Release
	CFLAGS = $(OPT_FLAGS)
endif

CFLAGS += -DNDEBUG -Wno-non-virtual-dtor -DHAVE_STDINT_H -static-libgcc -m32

ifeq "$(AMD64)" "true"
	BINARY = $(NAME)_$(BIN_SUFFIX_64)
	CFLAGS += -DPAWN_CELL_SIZE=64 -DHAVE_I64 -m64 
else
	BINARY = $(NAME)_$(BIN_SUFFIX_32)
	CFLAGS += -DPAWN_CELL_SIZE=32 -DJIT -DASM32
	OPT_FLAGS += -march=i586
endif

OBJ_LINUX := $(OBJECTS:%.cpp=$(BIN_DIR)/%.o)

$(BIN_DIR)/%.o: %.cpp
	$(CPP) $(INCLUDE) $(CFLAGS) -o $@ -c $<

all:
	mkdir -p $(BIN_DIR)
	mkdir -p $(BIN_DIR)/sdk
	mkdir -p $(BIN_DIR)/typeHandlerImplementations
	mkdir -p $(BIN_DIR)/json

	$(MAKE) orpheu

amd64:
	$(MAKE) all AMD64=true

orpheu: $(OBJ_LINUX)
	$(CPP) $(INCLUDE) $(CFLAGS) $(OBJ_LINUX) $(LINK) -shared -ldl -lm -o$(BIN_DIR)/$(BINARY) libboost_system-gcc42.a libboost_filesystem-gcc42.a

debug:	
	$(MAKE) all DEBUG=true

default: all

clean:
	rm -rf Release/sdk/*.o
	rm -rf Release/*.o
	rm -rf Release/typeHandlerImplementations/*.o
	rm -rf Release/json
	rm -rf Release/$(NAME)_$(BIN_SUFFIX_32)
	rm -rf Release/$(NAME)_$(BIN_SUFFIX_64)
	rm -rf Debug/sdk/*.o
	rm -rf Debug/*.o
	rm -rf Debug/typeHandlerImplementations/*.o
	rm -rf Debug/json
	rm -rf Debug/$(NAME)_$(BIN_SUFFIX_32)
	rm -rf Debug/$(NAME)_$(BIN_SUFFIX_64)
