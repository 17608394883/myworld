# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xuan/myworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xuan/myworld

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/xuan/myworld/CMakeFiles /home/xuan/myworld/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/xuan/myworld/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named myworld

# Build rule for target.
myworld: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 myworld
.PHONY : myworld

# fast build rule for target.
myworld/fast:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/build
.PHONY : myworld/fast

A1.o: A1.cpp.o

.PHONY : A1.o

# target to build an object file
A1.cpp.o:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/A1.cpp.o
.PHONY : A1.cpp.o

A1.i: A1.cpp.i

.PHONY : A1.i

# target to preprocess a source file
A1.cpp.i:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/A1.cpp.i
.PHONY : A1.cpp.i

A1.s: A1.cpp.s

.PHONY : A1.s

# target to generate assembly for a file
A1.cpp.s:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/A1.cpp.s
.PHONY : A1.cpp.s

Shader.o: Shader.cpp.o

.PHONY : Shader.o

# target to build an object file
Shader.cpp.o:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/Shader.cpp.o
.PHONY : Shader.cpp.o

Shader.i: Shader.cpp.i

.PHONY : Shader.i

# target to preprocess a source file
Shader.cpp.i:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/Shader.cpp.i
.PHONY : Shader.cpp.i

Shader.s: Shader.cpp.s

.PHONY : Shader.s

# target to generate assembly for a file
Shader.cpp.s:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/Shader.cpp.s
.PHONY : Shader.cpp.s

glad.o: glad.c.o

.PHONY : glad.o

# target to build an object file
glad.c.o:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/glad.c.o
.PHONY : glad.c.o

glad.i: glad.c.i

.PHONY : glad.i

# target to preprocess a source file
glad.c.i:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/glad.c.i
.PHONY : glad.c.i

glad.s: glad.c.s

.PHONY : glad.s

# target to generate assembly for a file
glad.c.s:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/glad.c.s
.PHONY : glad.c.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/main.cpp.s
.PHONY : main.cpp.s

stb_image.o: stb_image.cpp.o

.PHONY : stb_image.o

# target to build an object file
stb_image.cpp.o:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/stb_image.cpp.o
.PHONY : stb_image.cpp.o

stb_image.i: stb_image.cpp.i

.PHONY : stb_image.i

# target to preprocess a source file
stb_image.cpp.i:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/stb_image.cpp.i
.PHONY : stb_image.cpp.i

stb_image.s: stb_image.cpp.s

.PHONY : stb_image.s

# target to generate assembly for a file
stb_image.cpp.s:
	$(MAKE) -f CMakeFiles/myworld.dir/build.make CMakeFiles/myworld.dir/stb_image.cpp.s
.PHONY : stb_image.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... myworld"
	@echo "... edit_cache"
	@echo "... A1.o"
	@echo "... A1.i"
	@echo "... A1.s"
	@echo "... Shader.o"
	@echo "... Shader.i"
	@echo "... Shader.s"
	@echo "... glad.o"
	@echo "... glad.i"
	@echo "... glad.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... stb_image.o"
	@echo "... stb_image.i"
	@echo "... stb_image.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
