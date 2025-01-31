#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int X, Y, W, H;

    cin >> X >> Y >> W >> H;

    int min = 1000;

    if(min > W-X) min = W-X;
    if(min > X-0) min = X-0;
    if(min > H-Y) min = H-Y;
    if(min > Y-0) min = Y-0;

    cout << min;

    return 0;
}

// https://www.acmicpc.net/problem/1085
