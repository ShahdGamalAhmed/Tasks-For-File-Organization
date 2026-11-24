#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    int n;
    cin >> n;

    Person p;

    ofstream myfile("persons.txt");

    for (int i = 0; i < n; i++)
    {
        cin >> p.name >> p.age;

        myfile << p.name << " " << p.age << endl;
    }

    myfile.close();

    ifstream myfile0("persons.txt");

    vector<Person> v(n);

    for (int i = 0; i < n; i++)
    {
        myfile0 >> v[i].name >> v[i].age;
    }

    myfile0.close();

    Person youngest = v[0];
    Person oldest = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].age < youngest.age)
        {
            youngest = v[i];
        }

        if (v[i].age > oldest.age)
        {
            oldest = v[i];
        }
    }

    ofstream myfile1("results.txt");

    myfile1 << "Youngest: " << youngest.name
            << " " << youngest.age << endl;

    myfile1 << "Oldest: " << oldest.name
            << " " << oldest.age << endl;

    myfile1.close();

    return 0;
}