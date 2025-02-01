#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b == c) cout << a+b+c;
    else if(a >= b && a >= c)
    {
        if(a < b+c) cout << a+b+c;
        else cout << 2*(b+c)-1;
    }
    else if(b >= a && b >= c) 
    {
        if(b < a+c) cout << a+b+c;
        else cout << 2*(a+c)-1;
    }
    else if(c >= a && c >= b) 
    {
        if(c < a+b) cout << a+b+c;
        else cout << 2*(a+b)-1;
    }

    return 0;
}

// https://www.acmicpc.net/problem/14215
