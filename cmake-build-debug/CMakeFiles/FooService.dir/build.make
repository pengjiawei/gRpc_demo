# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/clion-2017.3.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.3.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CLionProjects/gRpc_demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/gRpc_demo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FooService.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FooService.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FooService.dir/flags.make

CMakeFiles/FooService.dir/FooServiceImpl.cpp.o: CMakeFiles/FooService.dir/flags.make
CMakeFiles/FooService.dir/FooServiceImpl.cpp.o: ../FooServiceImpl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FooService.dir/FooServiceImpl.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FooService.dir/FooServiceImpl.cpp.o -c /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp

CMakeFiles/FooService.dir/FooServiceImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FooService.dir/FooServiceImpl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp > CMakeFiles/FooService.dir/FooServiceImpl.cpp.i

CMakeFiles/FooService.dir/FooServiceImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FooService.dir/FooServiceImpl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp -o CMakeFiles/FooService.dir/FooServiceImpl.cpp.s

CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.requires:

.PHONY : CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.requires

CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.provides: CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.requires
	$(MAKE) -f CMakeFiles/FooService.dir/build.make CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.provides.build
.PHONY : CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.provides

CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.provides.build: CMakeFiles/FooService.dir/FooServiceImpl.cpp.o


# Object files for target FooService
FooService_OBJECTS = \
"CMakeFiles/FooService.dir/FooServiceImpl.cpp.o"

# External object files for target FooService
FooService_EXTERNAL_OBJECTS =

libFooService.a: CMakeFiles/FooService.dir/FooServiceImpl.cpp.o
libFooService.a: CMakeFiles/FooService.dir/build.make
libFooService.a: CMakeFiles/FooService.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libFooService.a"
	$(CMAKE_COMMAND) -P CMakeFiles/FooService.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FooService.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FooService.dir/build: libFooService.a

.PHONY : CMakeFiles/FooService.dir/build

CMakeFiles/FooService.dir/requires: CMakeFiles/FooService.dir/FooServiceImpl.cpp.o.requires

.PHONY : CMakeFiles/FooService.dir/requires

CMakeFiles/FooService.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FooService.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FooService.dir/clean

CMakeFiles/FooService.dir/depend:
	cd /root/CLionProjects/gRpc_demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gRpc_demo /root/CLionProjects/gRpc_demo /root/CLionProjects/gRpc_demo/cmake-build-debug /root/CLionProjects/gRpc_demo/cmake-build-debug /root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles/FooService.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FooService.dir/depend
