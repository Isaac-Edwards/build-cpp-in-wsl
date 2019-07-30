#include <iostream>
#include <vector>
#include <string>
#include "helloworld.h"

using namespace std;

int main()
{
    printTest();
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!", "and the C++ extension!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
