#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    int id;
    float grade;
    char choice = 'y';

    ofstream file("students.txt", ios::app);

    while (choice == 'y')
    {
        cout << "Enter Your Name: ";
        getline(cin, name);

        cout << "Enter Your ID: ";
        cin >> id;

        cout << "Enter Your Grade: ";
        cin >> grade;

        file << name << "," << id << "," << grade << "$" << endl;

        cout << "Do you want to add another students (y or another letter)?";
        cin >> choice;

        cin.ignore();
    }

    file.close();

    return 0;
}