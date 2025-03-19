# EstapeTools - Unreal Engine Plugin

EstapeTools is a plugin designed to extend Unreal Engine's functionality by providing a set of tools and utilities to enhance the development workflow. This plugin includes features for file I/O, platform detection, process management, and Windows-specific utilities.

---

## Features Overview

### 1. File I/O Utilities
The `FileIO` class provides functions for reading and writing text and binary files, as well as handling custom color lookup tables (CLUT).

- **LoadTextFile**: Reads the content of a text file into a string.
- **SaveTextFile**: Writes a string to a text file.
- **LoadTextArray**: Reads a text file into an array of strings, where each line is a separate element.
- **SaveTextArray**: Writes an array of strings to a text file, with each element as a new line.
- **WriteBytesFile**: Writes binary data to a file.
- **ReadBytesFile**: Reads binary data from a file.
- **WriteCLUTData**: Compresses an array of linear colors into a 16-bit format for use in custom CLUTs.
- **ReadCLUTData**: Decompresses CLUT data back into an array of linear colors.

---

### 2. Platform Detection
The `PlatformDevice` class provides functions to detect the current platform and manage processes.

- **IsWindowsPlatform**: Checks if the current platform is Windows.
- **IsMacPlatform**: Checks if the current platform is macOS.
- **IsLinuxPlatform**: Checks if the current platform is Linux.
- **IsAndroidPlatform**: Checks if the current platform is Android.
- **IsIOS_Platform**: Checks if the current platform is iOS.
- **IsNintendoSwitch**: Checks if the current platform is Nintendo Switch.

---

### 3. Process Management
The `PlatformDevice` class also includes utilities for managing external processes.

- **CreateProcess**: Launches an external program as a detached process.
- **CreateProcessSync**: Launches an external program and waits for it to finish.
- **TerminateProcess**: Terminates a running process by its handle.
- **CheckProcessRunning**: Checks if a process is still running.

---

### 4. Windows-Specific Utilities
The `WindowsClass` provides Windows-specific utilities.  
**Note**: These functions are deprecated and will be removed in version 1.0.8.

- **GetBatteryLevel**: Retrieves the laptop's battery percentage.
- **IsBatteryCharging**: Checks if the laptop battery is charging.
- **GetWindowsInfo**: Retrieves information about the Windows version, build number, and service pack.
- **MessageBox_Windows**: Displays a message box in Windows.

---

### 5. String and Color Utilities
The `EstapeToolsBPLibrary` class provides additional utilities for string and color manipulation.

- **GetNewLine**: Returns a newline character (`\n`).
- **DecimalToHexadecimal**: Converts a decimal integer to a hexadecimal string.
- **HexadecimalToDecimal**: Converts a hexadecimal string to a decimal integer.
- **ColorsToBytes**: Converts an array of `FColor` to a byte array.
- **BytesToColors**: Converts a byte array to an array of `FColor`.
- **ConvertStringToBytes**: Converts a string to a byte array.
- **ConvertBytesToString**: Converts a byte array to a string.
- **ArrayColorToArrayLinearColor**: Converts an array of `FColor` to an array of `FLinearColor`.
- **ArrayLinearColorToArrayColor**: Converts an array of `FLinearColor` to an array of `FColor`.

---

## Installation

1. Clone or download this repository.
2. Place the `EstapeTools` folder in your Unreal Engine project's `Plugins` directory.
3. Enable the plugin in the Unreal Engine editor under **Edit > Plugins**.

---

## Usage

- Access the plugin's functionality through Blueprints or C++ code.
- Refer to the function categories in the Unreal Engine editor for easy navigation.

---

## Requirements

- **Unreal Engine**: 4.27 or later.
- **Supported Platforms**: Windows, macOS, Linux, Android.

---

## Author

- **Author**: Rodrigo Estape de Oliveira  
- **Version**: 1.0.7  
- **LinkedIn**: [Rodrigo Estape de Oliveira](https://www.linkedin.com/in/rodrigo-estape/)