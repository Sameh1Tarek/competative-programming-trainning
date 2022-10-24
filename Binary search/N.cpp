//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/N

#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int n, minn=1e9,maxx=-1;
    cin>>n;
    vector<int>v(n);
    vector<int>v2;
    vector<int>v3;

    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        minn=min(minn,v[i]);
        maxx=max(maxx,v[i]);
    }

    for(int j=0; j<n; j++)
    {
        if(v[j]==minn){v2.push_back(j);}
        if(v[j]==maxx){v3.push_back(j);}
    }

    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());

    int a=0,b=0;
    int ans=INT_MAX;

    while(a<v2.size()&&b<v3.size())
    {
      if(abs(v2[a]-v3[b])<ans)
      {
          ans=abs(v2[a]-v3[b]);
      }
      if(v2[a]<v3[b])
      {
          a++;
      }
      else
      {
          b++;
      }
    }
    cout<<ans;
    return 0;
}