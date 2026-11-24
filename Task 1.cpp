#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string Name;
    int ID;
    float Grade;

    cout << "Enter Your Full Name" << endl;
    getline(cin, Name);

    cout << "Enter Your ID" << endl;
    cin >> ID;

    cout << "Enter Your Grade" << endl;
    cin >> Grade;

    ofstream myfile("student.txt");

    myfile << "Full Name : " << Name << endl;
    myfile << "ID : " << ID << endl;
    myfile << "Grade : " << Grade << endl;

    myfile.close();

    return 0;
}
