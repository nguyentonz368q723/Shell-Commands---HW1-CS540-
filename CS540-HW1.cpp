/*
Name: Nguyen Huu Tam Ton
Student ID: Z368Q723
Class: CS-540
HW1 - Feb 2nd, 2024
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int option;
    int mkdirResult;
    int delResult;
    int concatResult;

    do {
        cout << "---------------------------------------" << endl;
        cout << "Menu:\n";
        cout << "1. List the contents of a directory\n";
        cout << "2. Print the current working directory.\n";
        cout << "3. Establish a new directory.\n";
        cout << "4. Display a message\n";
        cout << "5. Concatenate and display content of a file\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        
        cin >> option;

        switch (option) {
            case 1:
                // List directory contents, Windows equivalent of ls
                system("dir");
                break;

            case 2:
                // Print working directory
                system("cd");
                break;

            case 3:
                // Create a new directory
                mkdirResult = system("mkdir cs540-hw1");
                if (mkdirResult != 0) {
                    cout << "Error creating directory." << endl;
                    return 1;
                }
                else {
                    cout << "Created susseccfully!" << endl;
                }

                // Remove an existing directory named "cs540-hw1" and its contents recursively
                delResult = system("rmdir /s /q cs540-hw1");
                if (delResult != 0) {
                    // Handle error if directory deletion fails
                    // For example, print an error message or exit the program
                    return 1;
                }
                else {
                    cout << "Deleted susseccfully!" << endl;
                }
                break;
            
            case 4:
                // Display a message
                system("echo Hello, my friends in class CS-540! My name is Nguyen Huu Tam Ton");
                break;

            case 5:
                
                // Concatenate and display content of a file
                concatResult = system("type *.txt > merged_file");
                if (concatResult != 0) {
                    return 1;
                }
                else {
                    cout << "'merged_file' is created susseccfully!" << endl;
                }
                break;

            case 6:
                // Exit the program
                cout << "Leaving the application." << endl;
                break;

            default:
                cout << "Not a valid choice. Kindly input a digit ranging from 1 to 6." << endl;
        }

    } while (option != 6);

    return 0;
}
