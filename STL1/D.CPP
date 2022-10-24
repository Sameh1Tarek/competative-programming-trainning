// https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/D

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    sameh;

    int t; cin>>t;
    stack<int>s;
    while(t--)
    {
        int n; cin>>n;
        if(s.empty())
        {
            s.push(n);
        }
        else if(s.top()%2==n%2)
        {
            s.pop();
        }
        else
        {
            s.push(n);
        }

    } 
    if(s.size()<=1){cout<<"YES"<<el;}
    else{cout<<"NO"<<el;}
    return 0;
}