# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build

# Include any dependencies generated for this target.
include TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/depend.make

# Include the progress variables for this target.
include TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/progress.make

# Include the compile flags for this target's objects.
include TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/flags.make

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/flags.make
TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o: /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2/TPgarbage/VectorD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o"
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o -c /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2/TPgarbage/VectorD.cpp

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.i"
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2/TPgarbage/VectorD.cpp > CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.i

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.s"
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2/TPgarbage/VectorD.cpp -o CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.s

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.requires:

.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.requires

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.provides: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.requires
	$(MAKE) -f TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/build.make TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.provides.build
.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.provides

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.provides.build: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o


# Object files for target TPgarbage_VectorD
TPgarbage_VectorD_OBJECTS = \
"CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o"

# External object files for target TPgarbage_VectorD
TPgarbage_VectorD_EXTERNAL_OBJECTS =

TPgarbage/TPgarbage_VectorD: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o
TPgarbage/TPgarbage_VectorD: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/build.make
TPgarbage/TPgarbage_VectorD: glimac/libglimac.a
TPgarbage/TPgarbage_VectorD: /usr/lib/x86_64-linux-gnu/libSDLmain.a
TPgarbage/TPgarbage_VectorD: /usr/lib/x86_64-linux-gnu/libSDL.so
TPgarbage/TPgarbage_VectorD: /usr/lib/x86_64-linux-gnu/libGL.so.1
TPgarbage/TPgarbage_VectorD: /usr/lib/x86_64-linux-gnu/libGLEW.so
TPgarbage/TPgarbage_VectorD: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TPgarbage_VectorD"
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TPgarbage_VectorD.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/build: TPgarbage/TPgarbage_VectorD

.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/build

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/requires: TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/VectorD.cpp.o.requires

.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/requires

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/clean:
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage && $(CMAKE_COMMAND) -P CMakeFiles/TPgarbage_VectorD.dir/cmake_clean.cmake
.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/clean

TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/depend:
	cd /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2 /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2/TPgarbage /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage /home/6im2/mkouyate/Documents/Marco/TP-Cpp/TP2-build/TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TPgarbage/CMakeFiles/TPgarbage_VectorD.dir/depend
