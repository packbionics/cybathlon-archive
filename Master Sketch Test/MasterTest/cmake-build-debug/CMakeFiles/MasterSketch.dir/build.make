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
include CMakeFiles/MasterSketch.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MasterSketch.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MasterSketch.dir/flags.make

MasterSketch_MasterSketch.ino.cpp: ../MasterSketch.ino
MasterSketch_MasterSketch.ino.cpp: ../Accelerometer_functions.ino
MasterSketch_MasterSketch.ino.cpp: ../Button.ino
MasterSketch_MasterSketch.ino.cpp: ../Encoder_functions.ino
MasterSketch_MasterSketch.ino.cpp: ../FSM.ino
MasterSketch_MasterSketch.ino.cpp: ../HX711.ino
MasterSketch_MasterSketch.ino.cpp: ../Inner_FSMs.ino
MasterSketch_MasterSketch.ino.cpp: ../LoadCell_functions.ino
MasterSketch_MasterSketch.ino.cpp: ../Motor_functions.ino
MasterSketch_MasterSketch.ino.cpp: ../Sensor_Interrupt.ino
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Regnerating MasterSketch.ino Sketch"
	"/Users/ramsothman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/CLion.app/Contents/bin/cmake/mac/bin/cmake" /Users/ramsothman/Documents/Backup/cybathlonTest/Master\ Sketch\ Test/MasterTest

CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj: CMakeFiles/MasterSketch.dir/flags.make
CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj: MasterSketch_MasterSketch.ino.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj -c "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch_MasterSketch.ino.cpp"

CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.i"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch_MasterSketch.ino.cpp" > CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.i

CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.s"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch_MasterSketch.ino.cpp" -o CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.s

# Object files for target MasterSketch
MasterSketch_OBJECTS = \
"CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj"

# External object files for target MasterSketch
MasterSketch_EXTERNAL_OBJECTS =

MasterSketch.elf: CMakeFiles/MasterSketch.dir/MasterSketch_MasterSketch.ino.cpp.obj
MasterSketch.elf: CMakeFiles/MasterSketch.dir/build.make
MasterSketch.elf: libmicro_SPI.a
MasterSketch.elf: libmicro_CORE.a
MasterSketch.elf: libTimerOne.a
MasterSketch.elf: libmicro_CORE.a
MasterSketch.elf: CMakeFiles/MasterSketch.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MasterSketch.elf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MasterSketch.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating EEP image"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.elf" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.eep"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating HEX image"
	/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.elf" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.hex"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Calculating image size"
	"/Users/ramsothman/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/CLion.app/Contents/bin/cmake/mac/bin/cmake" "-DFIRMWARE_IMAGE=/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.elf" -DMCU=atmega32u4 "-DEEPROM_IMAGE=/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch.eep" -P "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles/FirmwareSize.cmake"

# Rule to build all files generated by this target.
CMakeFiles/MasterSketch.dir/build: MasterSketch.elf

.PHONY : CMakeFiles/MasterSketch.dir/build

CMakeFiles/MasterSketch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MasterSketch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MasterSketch.dir/clean

CMakeFiles/MasterSketch.dir/depend: MasterSketch_MasterSketch.ino.cpp
	cd "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug" "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/CMakeFiles/MasterSketch.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MasterSketch.dir/depend

