# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/N_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/N_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/N_queue.dir/flags.make

CMakeFiles/N_queue.dir/main.cpp.o: CMakeFiles/N_queue.dir/flags.make
CMakeFiles/N_queue.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/N_queue.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/N_queue.dir/main.cpp.o -c /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/main.cpp

CMakeFiles/N_queue.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/N_queue.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/main.cpp > CMakeFiles/N_queue.dir/main.cpp.i

CMakeFiles/N_queue.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/N_queue.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/main.cpp -o CMakeFiles/N_queue.dir/main.cpp.s

# Object files for target N_queue
N_queue_OBJECTS = \
"CMakeFiles/N_queue.dir/main.cpp.o"

# External object files for target N_queue
N_queue_EXTERNAL_OBJECTS =

N_queue: CMakeFiles/N_queue.dir/main.cpp.o
N_queue: CMakeFiles/N_queue.dir/build.make
N_queue: CMakeFiles/N_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable N_queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/N_queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/N_queue.dir/build: N_queue

.PHONY : CMakeFiles/N_queue.dir/build

CMakeFiles/N_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/N_queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/N_queue.dir/clean

CMakeFiles/N_queue.dir/depend:
	cd /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug /Users/white/Documents/Programming/邓俊辉算法课/week3/N_queue/cmake-build-debug/CMakeFiles/N_queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/N_queue.dir/depend

