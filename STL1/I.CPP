//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/I


#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        deque<int>R;
        deque<int>A;
        for(int i=1;i<=n;i++)
        {
            R.push_back(i);
        }
        while(!R.empty())
        {
            A.push_front(R.back()); R.pop_back();
            A.push_front(A.back()); A.pop_back();
        }
        A.push_back(A.front()); A.pop_front();
        auto it=A.begin();
        for(;it!=A.end();it++)
        {
            if(it==A.end()-1)
            {
                cout<<*it<<el;
            }
            else
            {
                cout<<*it<<" ";
            }

        }
        R.clear();
        A.clear();
    }

    return 0;
}