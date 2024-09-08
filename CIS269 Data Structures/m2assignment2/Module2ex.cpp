/* Alek Santigo
CIS 269
Eric Newberry
09/08/24

The goal of the program is to calculate the total number of trees that can be planted
based on user input on the length of the yard, size of the tree's radius, and the space
between each of the trees*/

#include <iostream>
using namespace std;

int main()
{
    // initializing all of the necessary variables for the program
    int yardLength; // Length of the yard
    int treeRadius; // radius of the tree
    int spacing;    // spacing of each tree needed
    int diameter;   // diameter of each of the tree

    // User Prompts for the yard length, tree radius, and spacing between each tree
    cout << "Enter the length of the yard: ";
    cin >> yardLength;

    cout << "Enter the radius (inches) of a fully grown tree: ";
    cin >> treeRadius;
    diameter = treeRadius * 2;

    cout << "Enter the required space between fully grown trees";
    cin >> spacing;

    // formula to get the total amount of trees that can be planted
    int treeTotal = yardLength / (diameter + spacing);

    // output the information to the console
    cout << "Total Trees able to be planted: " << treeTotal;
    return 0;
}