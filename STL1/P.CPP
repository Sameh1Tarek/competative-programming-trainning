//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/P

#include <bits/stdc++.h>
#define ll long long
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
  sameh;

  ll t; cin>>t;
  vector<ll>v;
  while(t--)
  {
      ll a,b; cin>>a;
      if(a==1){cin>>b;}
      if(a==1){v.push_back(b);}
      if(a==2)
      {
           if(!v.empty()){v.pop_back();}
      }
      if(a==3)
        {
           if(!v.empty()){cout<<v.back()<<'\n';}
        }
  }

}