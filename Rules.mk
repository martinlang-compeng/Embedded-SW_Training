# Compiler and linker
CXX ?= g++
CXXFLAGS ?= -Wall -Wextra -Wpedantic
LDFLAGS ?=

PROG ?= a.out
OBJS ?=
LIB ?=
STATIC_LIB ?=
NON_CLEAN_OBJS ?=

# ============================================================
# Build rules
# ============================================================

all: $(PROG)

# Link final binary
$(PROG): $(OBJS)
	@echo "Linking $(PROG)..."
	$(CXX) $(CXXFLAGS) $(OBJS) $(LDFLAGS) -o $@

# Generic C build rule that handles directories
# Example: ../source/main.o ← ../source/main.c
%.o: %.cpp
	@echo "Compiling $<..."
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ============================================================
# Clean targets
# ============================================================

.PHONY: clean fclean re

clean:
	@echo "Cleaning object files..."
	rm -f $(filter-out $(NON_CLEAN_OBJS), $(OBJS))

fclean: clean
	@echo "Removing binaries..."
	rm -f $(PROG) $(LIB) $(STATIC_LIB)

re: fclean all