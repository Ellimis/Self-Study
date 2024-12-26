#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s))
    {
        cout << s << "\n";
    }

    return 0;
}

// https://www.acmicpc.net/problem/11718


// when i use "cin >> s" instead "getline(cin, s)" in while condition, 
// then fail because "cin" reads blank as a NULL or "\n", so result is wrong.
