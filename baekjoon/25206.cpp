#include <iostream>
#include <string>

using namespace std;

#define MAX 20

struct subj
{
    string name;
    float score;
    string grade;
};

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    subj s[20];
    int total = 0;
    double sum = 0.0;

    for(int i = 0; i < MAX; i++)
    {
        cin >> s[i].name >> s[i].score >> s[i].grade;
        
        if(s[i].grade != "P") total += s[i].score;
    }

    for(int i = 0; i < MAX; i++)
    {
        float mult = .0f;

        if(s[i].grade == "A+")
            mult = 4.5f;
        else if(s[i].grade == "A0")
            mult = 4.0f;
        else if(s[i].grade == "B+")
            mult = 3.5f;
        else if(s[i].grade == "B0")
            mult = 3.0f;
        else if(s[i].grade == "C+")
            mult = 2.5f;
        else if(s[i].grade == "C0")
            mult = 2.0f;
        else if(s[i].grade == "D+")
            mult = 1.5f;
        else if(s[i].grade == "D0")
            mult = 1.0f;

        sum += mult * s[i].score;
    }

    cout << fixed;
    cout.precision(6);
    cout << sum/total;

    return 0;
}

// https://www.acmicpc.net/problem/25206
