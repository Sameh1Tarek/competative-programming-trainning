// https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/A


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int b,a;
bool check(int x)
{
    int sum=0;
    while(x>0)
    {
      sum+=x;
      x/=b;
    }
    return sum>=a;
}
int main()
{
    sameh;

    cin>>a>>b;
    int l=0,r=1e9,mid,ans=-1;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans;
    return 0;
}