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
CMAKE_COMMAND = "/Users/ramsothman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/ramsothman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/micro_HX711.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/micro_HX711.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/micro_HX711.dir/flags.make

CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj: CMakeFiles/micro_HX711.dir/flags.make
CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj: ../libraries/HX711/HX711.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj -c "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/libraries/HX711/HX711.cpp"

CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.i"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/libraries/HX711/HX711.cpp" > CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.i

CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.s"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/libraries/HX711/HX711.cpp" -o CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.s

# Object files for target micro_HX711
micro_HX711_OBJECTS = \
"CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj"

# External object files for target micro_HX711
micro_HX711_EXTERNAL_OBJECTS =

libmicro_HX711.a: CMakeFiles/micro_HX711.dir/libraries/HX711/HX711.cpp.obj
libmicro_HX711.a: CMakeFiles/micro_HX711.dir/build.make
libmicro_HX711.a: CMakeFiles/micro_HX711.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmicro_HX711.a"
	$(CMAKE_COMMAND) -P CMakeFiles/micro_HX711.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/micro_HX711.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/micro_HX711.dir/build: libmicro_HX711.a

.PHONY : CMakeFiles/micro_HX711.dir/build

CMakeFiles/micro_HX711.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/micro_HX711.dir/cmake_clean.cmake
.PHONY : CMakeFiles/micro_HX711.dir/clean

CMakeFiles/micro_HX711.dir/depend:
	cd "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles/micro_HX711.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/micro_HX711.dir/depend

