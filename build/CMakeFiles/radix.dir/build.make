# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/emerson/github/RadixSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/emerson/github/RadixSort/build

# Include any dependencies generated for this target.
include CMakeFiles/radix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/radix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/radix.dir/flags.make

CMakeFiles/radix.dir/main.cpp.o: CMakeFiles/radix.dir/flags.make
CMakeFiles/radix.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/emerson/github/RadixSort/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/radix.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/radix.dir/main.cpp.o -c /home/emerson/github/RadixSort/main.cpp

CMakeFiles/radix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/radix.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/emerson/github/RadixSort/main.cpp > CMakeFiles/radix.dir/main.cpp.i

CMakeFiles/radix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/radix.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/emerson/github/RadixSort/main.cpp -o CMakeFiles/radix.dir/main.cpp.s

CMakeFiles/radix.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/radix.dir/main.cpp.o.requires

CMakeFiles/radix.dir/main.cpp.o.provides: CMakeFiles/radix.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/radix.dir/build.make CMakeFiles/radix.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/radix.dir/main.cpp.o.provides

CMakeFiles/radix.dir/main.cpp.o.provides.build: CMakeFiles/radix.dir/main.cpp.o


# Object files for target radix
radix_OBJECTS = \
"CMakeFiles/radix.dir/main.cpp.o"

# External object files for target radix
radix_EXTERNAL_OBJECTS =

radix: CMakeFiles/radix.dir/main.cpp.o
radix: CMakeFiles/radix.dir/build.make
radix: CMakeFiles/radix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/emerson/github/RadixSort/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable radix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/radix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/radix.dir/build: radix

.PHONY : CMakeFiles/radix.dir/build

CMakeFiles/radix.dir/requires: CMakeFiles/radix.dir/main.cpp.o.requires

.PHONY : CMakeFiles/radix.dir/requires

CMakeFiles/radix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/radix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/radix.dir/clean

CMakeFiles/radix.dir/depend:
	cd /home/emerson/github/RadixSort/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/emerson/github/RadixSort /home/emerson/github/RadixSort /home/emerson/github/RadixSort/build /home/emerson/github/RadixSort/build /home/emerson/github/RadixSort/build/CMakeFiles/radix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/radix.dir/depend
