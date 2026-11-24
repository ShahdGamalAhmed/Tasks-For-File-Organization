#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file("welcom.txt");

    file << "Hello Everybody";
    file.close();

    fstream file2("welcom.txt", ios::in | ios::out);

    file2.seekp(11, ios::beg);

    file2 << "one ";

    file2.close();

    ifstream file3("welcom.txt");

    file3.seekg(0, ios::beg);

    string text;

    getline(file3, text);

    cout << text;

    file3.close();

    return 0;
}