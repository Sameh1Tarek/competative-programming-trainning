//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/T


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

ll maxx=pow(2,32)-1;
int main()
{
    sameh;

    stack<ll>s;
    int t; cin>>t; ll sum=0;
    while (t--)
    {
        string a; cin>>a;
        if(a=="for"){
            int x; cin>>x;
            if(s.empty())
            {
                s.push(x);
            }
            else
            {
                s.push(min(x*s.top(),maxx+1));
            }
        }
        else if(a=="add")
        {
            if(s.empty()) sum++;
            else
            {
                sum+=s.top();
            }
        }
        else if(a=="end")
        {
            s.pop();
        }
    }
    if(sum<=maxx)
    {
        cout<<sum;
    }
    else cout<<"OVERFLOW!!!";
    return 0;
}
 