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
include CMakeFiles/gRpc_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gRpc_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gRpc_server.dir/flags.make

CMakeFiles/gRpc_server.dir/server.cpp.o: CMakeFiles/gRpc_server.dir/flags.make
CMakeFiles/gRpc_server.dir/server.cpp.o: ../server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gRpc_server.dir/server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gRpc_server.dir/server.cpp.o -c /root/CLionProjects/gRpc_demo/server.cpp

CMakeFiles/gRpc_server.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gRpc_server.dir/server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gRpc_demo/server.cpp > CMakeFiles/gRpc_server.dir/server.cpp.i

CMakeFiles/gRpc_server.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gRpc_server.dir/server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gRpc_demo/server.cpp -o CMakeFiles/gRpc_server.dir/server.cpp.s

CMakeFiles/gRpc_server.dir/server.cpp.o.requires:

.PHONY : CMakeFiles/gRpc_server.dir/server.cpp.o.requires

CMakeFiles/gRpc_server.dir/server.cpp.o.provides: CMakeFiles/gRpc_server.dir/server.cpp.o.requires
	$(MAKE) -f CMakeFiles/gRpc_server.dir/build.make CMakeFiles/gRpc_server.dir/server.cpp.o.provides.build
.PHONY : CMakeFiles/gRpc_server.dir/server.cpp.o.provides

CMakeFiles/gRpc_server.dir/server.cpp.o.provides.build: CMakeFiles/gRpc_server.dir/server.cpp.o


CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o: CMakeFiles/gRpc_server.dir/flags.make
CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o: ../FooService.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o -c /root/CLionProjects/gRpc_demo/FooService.grpc.pb.cc

CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gRpc_demo/FooService.grpc.pb.cc > CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.i

CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gRpc_demo/FooService.grpc.pb.cc -o CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.s

CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.requires:

.PHONY : CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.requires

CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.provides: CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/gRpc_server.dir/build.make CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.provides.build
.PHONY : CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.provides

CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.provides.build: CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o


CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o: CMakeFiles/gRpc_server.dir/flags.make
CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o: ../FooServiceImpl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o -c /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp

CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp > CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.i

CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gRpc_demo/FooServiceImpl.cpp -o CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.s

CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.requires:

.PHONY : CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.requires

CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.provides: CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.requires
	$(MAKE) -f CMakeFiles/gRpc_server.dir/build.make CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.provides.build
.PHONY : CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.provides

CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.provides.build: CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o


CMakeFiles/gRpc_server.dir/FooService.pb.cc.o: CMakeFiles/gRpc_server.dir/flags.make
CMakeFiles/gRpc_server.dir/FooService.pb.cc.o: ../FooService.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/gRpc_server.dir/FooService.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gRpc_server.dir/FooService.pb.cc.o -c /root/CLionProjects/gRpc_demo/FooService.pb.cc

CMakeFiles/gRpc_server.dir/FooService.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gRpc_server.dir/FooService.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gRpc_demo/FooService.pb.cc > CMakeFiles/gRpc_server.dir/FooService.pb.cc.i

CMakeFiles/gRpc_server.dir/FooService.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gRpc_server.dir/FooService.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gRpc_demo/FooService.pb.cc -o CMakeFiles/gRpc_server.dir/FooService.pb.cc.s

CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.requires:

.PHONY : CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.requires

CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.provides: CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.requires
	$(MAKE) -f CMakeFiles/gRpc_server.dir/build.make CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.provides.build
.PHONY : CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.provides

CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.provides.build: CMakeFiles/gRpc_server.dir/FooService.pb.cc.o


# Object files for target gRpc_server
gRpc_server_OBJECTS = \
"CMakeFiles/gRpc_server.dir/server.cpp.o" \
"CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o" \
"CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o" \
"CMakeFiles/gRpc_server.dir/FooService.pb.cc.o"

# External object files for target gRpc_server
gRpc_server_EXTERNAL_OBJECTS =

gRpc_server: CMakeFiles/gRpc_server.dir/server.cpp.o
gRpc_server: CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o
gRpc_server: CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o
gRpc_server: CMakeFiles/gRpc_server.dir/FooService.pb.cc.o
gRpc_server: CMakeFiles/gRpc_server.dir/build.make
gRpc_server: /usr/local/lib/libprotobuf.so
gRpc_server: CMakeFiles/gRpc_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable gRpc_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gRpc_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gRpc_server.dir/build: gRpc_server

.PHONY : CMakeFiles/gRpc_server.dir/build

CMakeFiles/gRpc_server.dir/requires: CMakeFiles/gRpc_server.dir/server.cpp.o.requires
CMakeFiles/gRpc_server.dir/requires: CMakeFiles/gRpc_server.dir/FooService.grpc.pb.cc.o.requires
CMakeFiles/gRpc_server.dir/requires: CMakeFiles/gRpc_server.dir/FooServiceImpl.cpp.o.requires
CMakeFiles/gRpc_server.dir/requires: CMakeFiles/gRpc_server.dir/FooService.pb.cc.o.requires

.PHONY : CMakeFiles/gRpc_server.dir/requires

CMakeFiles/gRpc_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gRpc_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gRpc_server.dir/clean

CMakeFiles/gRpc_server.dir/depend:
	cd /root/CLionProjects/gRpc_demo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gRpc_demo /root/CLionProjects/gRpc_demo /root/CLionProjects/gRpc_demo/cmake-build-debug /root/CLionProjects/gRpc_demo/cmake-build-debug /root/CLionProjects/gRpc_demo/cmake-build-debug/CMakeFiles/gRpc_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gRpc_server.dir/depend

