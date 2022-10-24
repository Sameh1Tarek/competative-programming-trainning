//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/O


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int t; cin>>t;
    vector<int>v(t);
    stack<int>s;
    for(auto &x : v){cin>>x;}
    vector<int>ans(t);
    fill(ans.begin(),ans.end(),-1);
    for(int i=0;i<t;i++)
    {
        if(s.empty()) s.push(i);
        else
        {
            while(!s.empty()&&v[s.top()]<v[i])
            {
                ans[s.top()]=i+1;
                s.pop();
            }
            s.push(i);
        }
    }

    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        cout<<ans[x-1]<<el;
    }

    return 0;
}

/*int binary_search(int arr[] , int l , int r , int x )
{
    while(l<=r)
    {
        int mid=(l+(r-l))/2;

        if(arr[mid]==x) return mid;

        if(arr[mid]<x) l=mid+1;

        else r=mid-1;
    }
    return -1;
}*/