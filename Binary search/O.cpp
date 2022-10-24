//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/O

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int t,q; cin>>t>>q;
    vector<int>v(t);
    for(auto &x : v)
    {
        cin>>x;
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        int a; cin>>a;
        auto x= upper_bound(v.begin(),v.end(),a);
        if(*x>a) cout<<*x<<el;
        else cout<<-1<<el;
    }

    return 0;
}

 