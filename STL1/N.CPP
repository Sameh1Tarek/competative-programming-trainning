//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/N


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
int main() {
    sameh;
    stack<char>st;
    string s; cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if(st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    if(st.empty())
    {
        cout<<"Yes"<<el;
    }
    else
    {
        cout<<"No"<<el;
    }
    return 0;
}