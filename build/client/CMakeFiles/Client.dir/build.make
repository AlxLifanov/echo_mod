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
CMAKE_COMMAND = /opt/KasperskyOS-Community-Edition-1.1.0.204/toolchain/bin/cmake

# The command to remove a file.
RM = /opt/KasperskyOS-Community-Edition-1.1.0.204/toolchain/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/echo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/echo/build

# Include any dependencies generated for this target.
include client/CMakeFiles/Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include client/CMakeFiles/Client.dir/compiler_depend.make

# Include the progress variables for this target.
include client/CMakeFiles/Client.dir/progress.make

# Include the compile flags for this target's objects.
include client/CMakeFiles/Client.dir/flags.make

client/CMakeFiles/Client.dir/src/client.c.o: client/CMakeFiles/Client.dir/flags.make
client/CMakeFiles/Client.dir/src/client.c.o: ../client/src/client.c
client/CMakeFiles/Client.dir/src/client.c.o: client/CMakeFiles/Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/echo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object client/CMakeFiles/Client.dir/src/client.c.o"
	cd /home/user/echo/build/client && /opt/KasperskyOS-Community-Edition-1.1.0.204/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT client/CMakeFiles/Client.dir/src/client.c.o -MF CMakeFiles/Client.dir/src/client.c.o.d -o CMakeFiles/Client.dir/src/client.c.o -c /home/user/echo/client/src/client.c

client/CMakeFiles/Client.dir/src/client.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Client.dir/src/client.c.i"
	cd /home/user/echo/build/client && /opt/KasperskyOS-Community-Edition-1.1.0.204/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/echo/client/src/client.c > CMakeFiles/Client.dir/src/client.c.i

client/CMakeFiles/Client.dir/src/client.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Client.dir/src/client.c.s"
	cd /home/user/echo/build/client && /opt/KasperskyOS-Community-Edition-1.1.0.204/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/echo/client/src/client.c -o CMakeFiles/Client.dir/src/client.c.s

# Object files for target Client
Client_OBJECTS = \
"CMakeFiles/Client.dir/src/client.c.o"

# External object files for target Client
Client_EXTERNAL_OBJECTS =

client/Client: client/CMakeFiles/Client.dir/src/client.c.o
client/Client: client/CMakeFiles/Client.dir/build.make
client/Client: client/CMakeFiles/Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/echo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Client"
	cd /home/user/echo/build/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
client/CMakeFiles/Client.dir/build: client/Client
.PHONY : client/CMakeFiles/Client.dir/build

client/CMakeFiles/Client.dir/clean:
	cd /home/user/echo/build/client && $(CMAKE_COMMAND) -P CMakeFiles/Client.dir/cmake_clean.cmake
.PHONY : client/CMakeFiles/Client.dir/clean

client/CMakeFiles/Client.dir/depend:
	cd /home/user/echo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/echo /home/user/echo/client /home/user/echo/build /home/user/echo/build/client /home/user/echo/build/client/CMakeFiles/Client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : client/CMakeFiles/Client.dir/depend

