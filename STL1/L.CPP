//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/L


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
      ll a,b; cin>>a>>b;;
      if(a==1){v.push_back(b);}
      if(a==2)
      {
          if(v.front()== b){cout<<"Yes\n";}else{cout<<"No\n";}
         v.erase(v.begin());
         //v.shrink_to_fit();
      }
  }

}