#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string f1, f2, f3;

    ofstream myfile("fruit.txt");

    myfile <<" Apple \n Orange \n Banana \n";

    myfile.close();

    ifstream in("fruit.txt");

    in >>f1>>f2>>f3;

    in.close();
   fstream out ("fruit.txt",ios::app);
   out<<"Fresh Fruits";
   out.close();
    return 0;
}