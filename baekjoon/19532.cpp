#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;
    
    double x, y;

    if(a == 0 && b != 0 && d != 0)
    {
        y = c/b;
        x = (f-e*y)/d;
    }
    else if(d == 0 && a != 0 && e != 0)
    {
        y = f/e;
        x = (c-b*y)/a;
    }
    else if(b == 0 && a != 0 && e != 0)
    {
        x = c/a;
        y = (f-d*x)/e;
    }
    else if(e == 0 && b != 0 && d != 0)
    {
        x = f/d;
        y = (c-a*x)/b;
    }
    else
    {
        x = (e*c - b*f)/(e*a - b*d);
        y = (f-(d*x))/e;
    }
    
    cout << static_cast<int>(x) << " " << static_cast<int>(y);

    return 0;
}

/*
ax + by = c
dx + ey = f

    ey = f - dx
    y = (f-dx)/e
    ax = c - by
    x = (c-by)/a
    x = (c-b((f-dx)/e))/a
    x = (c-b(f/e - d/ex))/a
    x = (c - bf/e + bd/ex)/a
    x = c/a - bf/ea + bd/eax
    (1 - bd/ea)x = c/a - bf/ea 
    x = (c/a - bf/ea) / (1 - bd/ea) 
    x = ((c-bf/e)/a) / (1-bd/ea)
    x = (ec - bf)/ea / (ea - bd)/ea
    x = (ec - bf) / (ea - bd)
*/

// https://www.acmicpc.net/problem/19532
// 진짜 조건 찾고 답 맞게 도출하고 같은 조건끼리 묶고 정리하니까 1시간 40분 걸리고 나 혼자 답만 20번 제출했네 ㅠㅠㅠ
