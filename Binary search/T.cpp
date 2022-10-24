//https://codeforces.com/group/nMgBPsURd2/contest/346685/problem/T


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;


int main()
{
    sameh;

//    4 5
//    3 1 2 1

     int a,b; cin>>a>>b;
     vector<int>v(a);
     for(auto &x : v){cin>>x;}
     ll sum=0,cnt=0;
     for(int i=0;i<a;i++)
     {
         if(sum+v[i]<=b)
         {
             sum+=v[i]; //sum=3  sum=4 sum=3+1=4
             cnt++;     //cnt=1  cnt=2 cnt=3
         }
         else
         {
             sum+=v[i]-v[i-cnt];  //sum=6-3=3
         }
     }
    cout<<cnt;

    return 0;
}

 