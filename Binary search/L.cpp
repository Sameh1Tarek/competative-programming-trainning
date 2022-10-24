//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/L


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
const double EPS=1e-6;
ll n;
   bool check(ll x)
    {
        if(((x*(x+1))/2)>=n) return true;
        else return false;
    }
int main()
{
    sameh;
    int t; cin>>t;
    while(t--)
    {
         cin>>n;
         ll l=0,r=1e10,mid,ans=-1;
        while (l<r)
        {
            mid=(l+r)/2;
            if(check(mid))
            {
                ans=mid;
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
     cout<<ans<<el;
    }

    return 0;
}