#include <iostream>
#include <string>

using namespace std;

int main()
{
    string case1;

    cin >> case1;

    if(case1.length() <= 50)
    {
        cout << case1 << "??!\n" << endl;
    }

    return 0;
}

// https://www.acmicpc.net/problem/10926
