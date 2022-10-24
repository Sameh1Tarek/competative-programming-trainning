//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/K


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    sameh;

    int x,y; cin>>x>>y;
    deque<int>s;
    for(int i=0;i<x;i++)
    {
        int n; cin>>n;
        s.push_back(n);
    }
    sort(s.begin(),s.end());
    //unique(s.begin(), s.end());
    for(int i=0;i<y;i++)
    {
        int n; cin>>n;
        int x= lower_bound(s.begin(),s.end(),n+1)-s.begin();
        if(s[x]==n){cout<<x<<" ";}
        else
        {
            if(i==y-1){cout<<x;}
            else
            {
                cout<<x<<" ";
            }
        }
    }
    return 0;
}