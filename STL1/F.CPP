//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/F



#include <bits/stdc++.h>
#define ll long long
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
 
int main()
{
 
    sameh;
    int lb=0,cnt=0;
    string v; cin>>v;
    for(int i=0;i<v.size();i++)
    {
      if(v[i]=='(')
      {
          lb++;
      }
      if(v[i]==')'&&lb>0)
      {
          cnt++; lb--;
      }
    }
cout<<cnt*2;
 
}