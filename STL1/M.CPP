//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/M


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int t; cin>>t;
    deque<int>d(t);
    stack<int>s;
    for(auto &x : d) cin>>x;
    for (int i = 1; i <=t ; ++i) {
        s.push(i);
            while (!s.empty()&&!d.empty()&&d.front()==s.top())
            {
                s.pop();
                d.pop_front();
            }
    }
    if(s.empty()){cout<<"YES"<<el;}
    else{cout<<"NO"<<el;}
    return 0;
}