
#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    // Create file and write five grades
    ofstream out("grades.txt");

    if (out.fail())
    {
        cout << "Unable to create the file";
        return 0;
    }

    out << 90 << endl;
    out << 85 << endl;
    out << 70 << endl;
    out << 100 << endl;
    out << 60 << endl;

    out.close();

    // Read and print grades
    ifstream in("grades.txt");

    if (in.fail())
    {
        cout << "Unable to open the file";
        return 0;
    }

    int num;

    cout << "Grades before deletion:\n";

    while (in >> num)
    {
        cout << num << endl;
    }

    in.close();

    // Delete a grade
    int x;

    cout << "Enter grade you want to delete: ";
    cin >> x;

    ifstream org("grades.txt");
    ofstream temp("temp.txt");

    if (org.fail() || temp.fail())
    {
        cout << "Unable to open the file";
        return 0;
    }

    bool found = false;

    while (org >> num)
    {
        if (num != x)
        {
            temp << num << endl;
        }
        else
        {
            found = true;
        }
    }

    org.close();
    temp.close();

    if (!found)
    {
        remove("temp.txt");
        cout << "Grade not found";
        return 0;
    }

    // Replace original file
    remove("grades.txt");
    rename("temp.txt", "grades.txt");

    cout << "Grade deleted successfully.\n";

    // Print grades after deletion
    ifstream result("grades.txt");

    cout << "Grades after deletion:\n";

    while (result >> num)
    {
        cout << num << endl;
    }

    result.close();

    return 0;
}
