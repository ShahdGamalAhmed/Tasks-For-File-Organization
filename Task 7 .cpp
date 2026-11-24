#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
vector<string> data;

data.push_back("Hadeer Mahmoud");
data.push_back("Youssef Ali");
data.push_back("Ahmed Mostafa");
data.push_back("Esraa Ebrahim");

sort(data.begin(), data.end());

cout << "Names sorted Successfully" << endl;

for(int i = 0; i < data.size(); i++)
{
    cout << data[i] << endl;
}

return 0;

}