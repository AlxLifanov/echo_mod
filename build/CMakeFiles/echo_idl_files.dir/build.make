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
include CMakeFiles/echo_idl_files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/echo_idl_files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/echo_idl_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/echo_idl_files.dir/flags.make

_headers_/echo/IPing.idl.h: IPing.idl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating _headers_/echo/IPing.idl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake -E copy /home/user/echo_mod/build/IPing.idl.h /home/user/echo_mod/build/_headers_/echo/../echo/IPing.idl.h

IPing.idl.h: _headers_/echo/IPing.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating IPing.idl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/nk-gen-c -I /home/user/echo_mod/build/_headers_ -I /home/user/echo_mod/build/_headers_/echo/.. -I /home/user/echo_mod/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.1.1.13/sysroot-aarch64-kos/include/system.platform -I /home/user/echo_mod/build/_headers_/echo/../echo /home/user/echo_mod/build/_headers_/echo/../echo/IPing.idl

_headers_/echo/IPing.idl: ../resources/IPing.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/user/echo_mod/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating _headers_/echo/IPing.idl"
	/opt/KasperskyOS-Community-Edition-1.1.1.13/toolchain/bin/cmake -E copy /home/user/echo_mod/resources/IPing.idl /home/user/echo_mod/build/_headers_/echo/../echo/IPing.idl

echo_idl_files: CMakeFiles/echo_idl_files.dir/build.make
.PHONY : echo_idl_files

# Rule to build all files generated by this target.
CMakeFiles/echo_idl_files.dir/build: echo_idl_files
.PHONY : CMakeFiles/echo_idl_files.dir/build

CMakeFiles/echo_idl_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/echo_idl_files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/echo_idl_files.dir/clean

CMakeFiles/echo_idl_files.dir/depend: IPing.idl.h
CMakeFiles/echo_idl_files.dir/depend: _headers_/echo/IPing.idl
CMakeFiles/echo_idl_files.dir/depend: _headers_/echo/IPing.idl.h
	cd /home/user/echo_mod/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/echo_mod /home/user/echo_mod /home/user/echo_mod/build /home/user/echo_mod/build /home/user/echo_mod/build/CMakeFiles/echo_idl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/echo_idl_files.dir/depend

