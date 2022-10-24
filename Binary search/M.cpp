//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/M

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define cons1 1e9
#define cons2 1e6
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
//const double EPS=(1e-6);
int main()
{
    sameh;

    int a;cin>>a;
    vector<int>v(a);
    vector<int>v2(a);
    for(auto &x : v){cin>>x;}
    v2[0]=v[0];
    for (int i = 1; i < a; ++i) {
       v2[i]=v[i]+v2[i-1];
    }

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x= lower_bound(v2.begin(),v2.end(),n)-v2.begin()+1;
        cout<<x<<el;
    }
    return 0;
}