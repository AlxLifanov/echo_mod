# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake

# The command to remove a file.
RM = /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/echo_mod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/echo_mod/build

# Include any dependencies generated for this target.
include CMakeFiles/echo_server_edl_files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/echo_server_edl_files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/echo_server_edl_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/echo_server_edl_files.dir/flags.make

_headers_/echo/Server.edl.h: Server.edl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating _headers_/echo/Server.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake -E copy /home/user/echo_mod/build/Server.edl.h /home/user/echo_mod/build/_headers_/echo/../echo/Server.edl.h

Server.edl.h: _headers_/echo/Server.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating Server.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/nk-gen-c -I /home/user/echo_mod/build/_headers_ -I /home/user/echo_mod/build/_headers_/echo/.. -I /home/user/echo_mod/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.1.1.13/sysroot-aarch64-kos/include/system.platform -I /home/user/echo_mod/build/_headers_/echo/../echo /home/user/echo_mod/build/_headers_/echo/../echo/Server.edl

_headers_/echo/Server.edl: ../resources/Server.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating _headers_/echo/Server.edl"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake -E copy /home/user/echo_mod/resources/Server.edl /home/user/echo_mod/build/_headers_/echo/../echo/Server.edl

echo_server_edl_files: CMakeFiles/echo_server_edl_files.dir/build.make
.PHONY : echo_server_edl_files

# Rule to build all files generated by this target.
CMakeFiles/echo_server_edl_files.dir/build: echo_server_edl_files
.PHONY : CMakeFiles/echo_server_edl_files.dir/build

CMakeFiles/echo_server_edl_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/echo_server_edl_files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/echo_server_edl_files.dir/clean

CMakeFiles/echo_server_edl_files.dir/depend: Server.edl.h
CMakeFiles/echo_server_edl_files.dir/depend: _headers_/echo/Server.edl
CMakeFiles/echo_server_edl_files.dir/depend: _headers_/echo/Server.edl.h
	cd /home/user/echo_mod/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/echo_mod /home/user/echo_mod /home/user/echo_mod/build /home/user/echo_mod/build /home/user/echo_mod/build/CMakeFiles/echo_server_edl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/echo_server_edl_files.dir/depend

