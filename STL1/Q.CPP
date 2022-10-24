//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/Q


#include <bits/stdc++.h>
#include <math.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    stack<string>s;
    int t; cin>>t;
    bool f=0;
    int cnt=0;
   for(int i=0;i<t;i++)
    {
        string a; cin>>a;
        if(a=="Header"||a=="EndHeader")cnt++;
        if(a!="Header"&&i==0) f=1;
        if(s.empty()) s.push(a);
        else if("End" + s.top() == a) s.pop();
        else s.push(a);


    }
    if(!f)
    {
        if(cnt==2&&s.empty())
        {
            cout<<"ACC";
        }
        else cout<<"WA";
    }
    else
    {
        cout<<"WA";
    }
    return 0;
}