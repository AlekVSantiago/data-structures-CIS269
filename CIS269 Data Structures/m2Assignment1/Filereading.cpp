#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
/*Alek Santiago
CIS269 Data Structures
09/08/24*/

/*The purpose of this program is to take the information from a txt file, read it, process some of the information
and transfer it into a .dat file in a different format*/

int main()
{
    // initializing both of the files that will be trasfering data in between
    fstream employeeFile; // existing txt file
    fstream updatedFile;  // updated dat file

    // open the updated file to output the data to
    updatedFile.open("Ch3_Ex5Output.dat", ios::out);
    // if statement to check if the file is opened properly
    if (updatedFile.is_open())
    {
        cout << "updated file open successfully\n"
             << endl;
    }
    else
    {
        cout << "There is an error with opening the updated file";
    }
    // Open the input file to get data from
    employeeFile.open("Ch3_Ex5Data.txt", ios::in);
    // if statement to check if the file is opened properly
    if (employeeFile.is_open())
    {
        cout << "Employee file opened successfully\n"
             << endl;

        string lastname;
        string firstName;
        double salary;
        float payIncrease;
        double updatedSalary;

        // head display for the data
        updatedFile << "First Name      Last Name     Updated Salary" << endl
                    << "---------------------------------------------" << endl;
        // for loop through each of the employees
        for (int i = 0; i < 3; i += 1)
        {
            // take input from the file and assign them to variables
            employeeFile >> lastname;
            employeeFile >> firstName;
            employeeFile >> salary;
            employeeFile >> payIncrease;

            // divide the percentage variable by 100 for calculations
            payIncrease = payIncrease / 100;

            // calculating the updated salary
            updatedSalary = salary + salary * payIncrease;

            // Outputting information into the .dat file with the fixed and setprecision manipulators
            updatedFile << fixed << setprecision(2) << left << setw(15) << firstName << setw(20) << lastname << setw(20) << updatedSalary << endl;
        }
    }

    else
    {
        cout << "There's been a problem opening the employee file...";
    }
    employeeFile.close();
    if (employeeFile.is_open() == false)
    {
        cout << "employee file closed successfully\n"
             << endl;
    }
    else
    {
        cout << "ERROR... Failed to close the employee file\n"
             << endl;
    }
    updatedFile.close();
    if (updatedFile.is_open() == false)
    {
        cout << "updated file closed successfully\n"
             << endl;
    }
    else
    {
        cout << "ERROR... Failed to close the updated file\n"
             << endl;
    }
    return 0;
}
