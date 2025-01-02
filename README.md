# Simple-OS - MEOS
This emulates OS on command line interface. Unix programs for different functionalities including file operations, opening of applications.

The list of programs:
1. File operations: CREATE, OPEN, REMOVE, COPY, LINK, MOVE, CHANGE PERMISSION, FILE ATTRIBUTES, SEARCH
2. Productivity: DATE AND TIME, CALENDAR, CALCULATOR
3. Applications: GAMES, BROWSER

Additionally, programs for:
1. Welcome page as soon as system is booted up
2. Desktop screen
3. A main OS program calling all of the above listed programs
4. BASH script for automatically starting this emulation of OS as soon as Ubuntu is switched on
5. Image textfile containing the logo of the OS - MEOS (Meow OS since the logo is a cat)

Additional Info:
If using Ubuntu, add the BASH script in the startup application with the entire path.

To keep the terminal from killing the process, follow the steps:
1. Go to terminal and click on preferences
2. Create a profile
3. Click on profile
4. Command in profile
5. Click : hold the terminal open

Create .exe files for all the .c files using the command:
gcc -o file.exe file.c
