#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for(int i = 0; i < 2*N-1; i++)
    {
        if(i > N-1)
        {
            for(int j = 1; j <= i-N+1; j++)
            {
                cout << " ";
            }

            for(int j = 2*(N-1)-1-2*(i-N); j > 0; j--)
            {
                cout << "*";
            }
        }
        else
        {
            for(int j = 1; j < N-i; j++)
            {  
                cout << " ";
            }

            for(int j = N-i; j <= N+i; j++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}

/*
// 뒤에 공백도 추가한 코드
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    cin >> N;

    for(int i = 0; i < 2*N-1; i++)
    {
        if(i > N-1)
        {
            for(int j = 1; j <= i-N+1; j++)
            {
                cout << " ";
            }

            for(int j = 2*(N-1)-1-2*(i-N); j > 0; j--)
            {
                cout << "*";
            }
            
            for(int j = 0; j < i-N+1; j++)
            {  
                cout << " ";
            }
        }
        else
        {
            for(int j = 1; j < N-i; j++)
            {  
                cout << " ";
            }

            for(int j = N-i; j <= N+i; j++)
            {
                cout << "*";
            }

            for(int j = 0; j < N-i-1; j++)
            {  
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}
*/

// https://www.acmicpc.net/problem/2444

// 거꾸로 된 삼각형 만드려고 40분.. 저 놈의 공백 찾겠다고 10분.. ㅠㅠㅠ
