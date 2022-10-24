//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/U

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

    int t; cin>>t;
    vector<int>v(t);
    for(auto &x : v){cin>>x;}
    sort(v.begin(),v.end());

    int maxx=-1;
    for(int i=0;i<t;i++)
    {
        int a= upper_bound(v.begin(),v.end(),v[i]+5)-v.begin();
        maxx= max(maxx,a-i);
    }
    cout<<maxx<<el;
    return 0;
}