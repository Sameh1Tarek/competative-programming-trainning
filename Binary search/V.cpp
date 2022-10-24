// https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/V

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define cons1 1e9
#define cons2 1e6
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    ll a,b; cin>>a>>b;
    vector<pair<ll,ll>>v(a);
    vector<ll>v2(a);
    for(auto &x : v){cin>>x.first>>x.second;}
    sort(v.begin(),v.end());
    v2[0]=v[0].second;
    for(int i=1;i<a;i++)
    {
        v2[i]=v2[i-1]+v[i].second;
    }
    ll ans=-1;
    pair<ll,ll>p;
    for(int i=0;i<a;i++)
    {
         ll sum=0;
         p.first=v[i].first+b;
         p.second=-1;
         ll indx= lower_bound(v.begin(),v.end(),p)-v.begin()-1;
         sum=v2[indx]-v2[i]+v[i].second;
         ans= max(ans,sum);
    }
    cout<<ans;

    return 0;
}