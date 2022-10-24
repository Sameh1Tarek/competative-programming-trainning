// https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/B

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int a,b; cin>>a>>b;
    vector<int>v(a);
    vector<ll>v1(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    ll l=0,r=a,mid,ans=-1,ans2=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        ll sum=0;
        for(int i=0;i<a;i++)
        {
            v1[i]=v[i]+((i+1)*mid);
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<mid;i++)
        {
            sum+=v1[i];
        }
        if(sum<=b)
        {
            ans=mid;
            ans2=sum;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<" "<<ans2;

    return 0;
}