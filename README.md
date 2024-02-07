# Shell-Commands---HW1-CS540-
This application uses the shell or system function to run different shell commands in a simple C++ program that implements a menu-driven command line interface for doing basic file system operations on Windows.

Description
The program presents a text menu with 6 options to the user:

    1. List directory contents
    2. Print current working directory
    3. Create and delete a directory
    4. Display a hello message
    5. Concatenate text files
    6. Exit the program
    It relies on calling Windows command line utilities like dir, cd, mkdir etc to execute the actual file operations.

  The menu presents 6 options to explore basic file system operations:
  - Input number '1' for option 1 to list folder contents (dir).
  - Input number '2' for option 2 to print the current working directory path (cd). 
  - For option 3, input number '3' for creating and deleting a test directory.
  - Input number '4' for option 4 to display a hello message (echo).
  - In addition, input number '5' from your keyboard to use option 5 for concatenating text files into a merged file (type).
  - And for the option 6, please input number '6' from your keyboard to exits the program.
  Each numbered option corresponds to a case statement that calls the appropriate Windows command line utility to execute the described file system task, with error handling and output messages printed back to the user. Overall, the simple menu allows easily testing and understanding common file manipulation functions on a Windows machine.

The code demonstrates file I/O, system calls, error handling, and looping/switch statements in C++.

Here are the steps they would follow to build and run your program from GitHub:

    1. Click the GitHub link you shared to open your repository
    2. Click the green "Code" button and copy the HTTPS or SSH clone URL
    3. Open Visual Studio and clone the repository:
      a. From the main menu, choose Clone a repository
      b. Paste the clone URL into the text box
      c. Choose the local path to store files
    4. In Solution Explorer, right click on your code file (filesystem.cpp) and select Set As Startup Item
    5. To build, click Build > Build Solution from the main menu
    6. To run, simply press Ctrl+F5
    7. The console program will now launch and show the file operations menu!
So the key steps are to clone your GitHub repo inside Visual Studio, set the C++ file as the startup item, build the solution, and run it. This allows them to seamlessly get your code and test it out locally.
