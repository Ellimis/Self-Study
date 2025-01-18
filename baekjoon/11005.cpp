#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    long N;
    int B;
    string ans = "";

    cin >> N >> B;

    while(N >= B)
    {
        //cout << "N: " << N << ", N/B: " << N/B << ", N%B: " << N%B << "\n";
        if(0 <= N%B && N%B <= 9)
        {
            ans.append(1, (N%B+'0'));
        }
        else if(10 <= N%B && N%B <= 35)
        {
            ans.append(1, (N%B-10+'A'));
        }
        
        N /= B;
    }

    if(N < B)
    {
        if(0 <= N%B && N%B <= 9)
        {
            ans.append(1, (N%B+'0'));
        }
        else if(10 <= N%B && N%B <= 35)
        {
            ans.append(1, (N%B-10+'A'));
        }
    }
    else if(N == B) ans.append(1, '1');
    
    for(int i = ans.length()-1; i >= 0; i--)
    {
        cout << ans[i];
    }

    return 0;
}

// https://www.acmicpc.net/problem/11005
// 처음부터 N이 B보다 작은 수랑 같은 수일 때를 생각못하다보니 조금 오래 걸린듯..
