# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/hmx/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hmx/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5233.103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hmx/CLionProjects/myworld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hmx/CLionProjects/myworld/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myworld.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myworld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myworld.dir/flags.make

CMakeFiles/myworld.dir/main.cpp.o: CMakeFiles/myworld.dir/flags.make
CMakeFiles/myworld.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myworld.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myworld.dir/main.cpp.o -c /home/hmx/CLionProjects/myworld/main.cpp

CMakeFiles/myworld.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myworld.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hmx/CLionProjects/myworld/main.cpp > CMakeFiles/myworld.dir/main.cpp.i

CMakeFiles/myworld.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myworld.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hmx/CLionProjects/myworld/main.cpp -o CMakeFiles/myworld.dir/main.cpp.s

CMakeFiles/myworld.dir/Shader.cpp.o: CMakeFiles/myworld.dir/flags.make
CMakeFiles/myworld.dir/Shader.cpp.o: ../Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myworld.dir/Shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myworld.dir/Shader.cpp.o -c /home/hmx/CLionProjects/myworld/Shader.cpp

CMakeFiles/myworld.dir/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myworld.dir/Shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hmx/CLionProjects/myworld/Shader.cpp > CMakeFiles/myworld.dir/Shader.cpp.i

CMakeFiles/myworld.dir/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myworld.dir/Shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hmx/CLionProjects/myworld/Shader.cpp -o CMakeFiles/myworld.dir/Shader.cpp.s

CMakeFiles/myworld.dir/A1.cpp.o: CMakeFiles/myworld.dir/flags.make
CMakeFiles/myworld.dir/A1.cpp.o: ../A1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myworld.dir/A1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myworld.dir/A1.cpp.o -c /home/hmx/CLionProjects/myworld/A1.cpp

CMakeFiles/myworld.dir/A1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myworld.dir/A1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hmx/CLionProjects/myworld/A1.cpp > CMakeFiles/myworld.dir/A1.cpp.i

CMakeFiles/myworld.dir/A1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myworld.dir/A1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hmx/CLionProjects/myworld/A1.cpp -o CMakeFiles/myworld.dir/A1.cpp.s

CMakeFiles/myworld.dir/stb_image.cpp.o: CMakeFiles/myworld.dir/flags.make
CMakeFiles/myworld.dir/stb_image.cpp.o: ../stb_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myworld.dir/stb_image.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myworld.dir/stb_image.cpp.o -c /home/hmx/CLionProjects/myworld/stb_image.cpp

CMakeFiles/myworld.dir/stb_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myworld.dir/stb_image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hmx/CLionProjects/myworld/stb_image.cpp > CMakeFiles/myworld.dir/stb_image.cpp.i

CMakeFiles/myworld.dir/stb_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myworld.dir/stb_image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hmx/CLionProjects/myworld/stb_image.cpp -o CMakeFiles/myworld.dir/stb_image.cpp.s

CMakeFiles/myworld.dir/glad.c.o: CMakeFiles/myworld.dir/flags.make
CMakeFiles/myworld.dir/glad.c.o: ../glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/myworld.dir/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/myworld.dir/glad.c.o   -c /home/hmx/CLionProjects/myworld/glad.c

CMakeFiles/myworld.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/myworld.dir/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hmx/CLionProjects/myworld/glad.c > CMakeFiles/myworld.dir/glad.c.i

CMakeFiles/myworld.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/myworld.dir/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hmx/CLionProjects/myworld/glad.c -o CMakeFiles/myworld.dir/glad.c.s

# Object files for target myworld
myworld_OBJECTS = \
"CMakeFiles/myworld.dir/main.cpp.o" \
"CMakeFiles/myworld.dir/Shader.cpp.o" \
"CMakeFiles/myworld.dir/A1.cpp.o" \
"CMakeFiles/myworld.dir/stb_image.cpp.o" \
"CMakeFiles/myworld.dir/glad.c.o"

# External object files for target myworld
myworld_EXTERNAL_OBJECTS =

myworld: CMakeFiles/myworld.dir/main.cpp.o
myworld: CMakeFiles/myworld.dir/Shader.cpp.o
myworld: CMakeFiles/myworld.dir/A1.cpp.o
myworld: CMakeFiles/myworld.dir/stb_image.cpp.o
myworld: CMakeFiles/myworld.dir/glad.c.o
myworld: CMakeFiles/myworld.dir/build.make
myworld: CMakeFiles/myworld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable myworld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myworld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myworld.dir/build: myworld

.PHONY : CMakeFiles/myworld.dir/build

CMakeFiles/myworld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myworld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myworld.dir/clean

CMakeFiles/myworld.dir/depend:
	cd /home/hmx/CLionProjects/myworld/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hmx/CLionProjects/myworld /home/hmx/CLionProjects/myworld /home/hmx/CLionProjects/myworld/cmake-build-debug /home/hmx/CLionProjects/myworld/cmake-build-debug /home/hmx/CLionProjects/myworld/cmake-build-debug/CMakeFiles/myworld.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myworld.dir/depend

