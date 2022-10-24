//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/E


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    sameh;

    int t; cin>>t;
    int maxx=0;
    stack<int>s;
    while(t--)
    {
        int n; cin>>n;
        maxx=max(n,maxx);
        if(s.empty())
        {
            s.push(n);
        }
        else if(s.top()<n){cout<<"NO"<<el; return 0;}
        else if(s.top()==n)
        {
            s.pop();
        }
        else
        {
            s.push(n);
        }

    }
    if(s.size()==0){cout<<"YES"<<el;}
    else if(s.size()==1&&maxx==s.top()){cout<<"YES"<<el;}
    else{cout<<"NO"<<el;}
    

    return 0;
}