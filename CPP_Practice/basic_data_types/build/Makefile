PROG = basic_data_types
ROOT_DIR := ../../..

# GLOBAL VARIABLES
SOURCE_DIR := ../source

# COMPILER FLAGS
CXXFLAGS += -Wall					# Enables most important warnings
CXXFLAGS += -Wextra				# Enables additional useful warnings
CXXFLAGS += -Wpedantic			# Enforces strict ISO C compliance
CXXFLAGS += -g					# Includes debug symbols
CXXFLAGS += -O0					# Disables optimization

# LINKER FLAGS
LDFLAGS += -Wl,-z,relro 		# Marks certain ELF sections as r/o after relocation
LDFLGAS += -Wl,-z,now			# Forces all dynamic symbols to resolve at startup
LDFLAGS += -Wl,-z,noexecstack	# Marks stack as non-executable
LDFLAGS += -pie					# Generates a position-independent executable

# LIBRARY LINKAGE

# OBJECT FILE INCLUSION
SRC_FILES := $(wildcard $(SOURCE_DIR)/*.cpp)
OBJS := $(SRC_FILES:.cpp=.o)

# INCLUDE Rules.mk
include $(ROOT_DIR)/Rules.mk