//https://codeforces.com/group/nMgBPsURd2/contest/339715/problem/H



#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    sameh;

   int T; cin>>T;

    while(T--) {

        int t; cin>>t;
        vector<string>v(T);
        map<int,char>mp;
        map<char,int>mm;
        while (t--)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        for (char i = 'a'; i <= 'z'; i++) {
            int n;
            cin >> n;
            mp[n] = i;
        }

        for (int i = 0; i < v.size(); i++) {
            string temp = v[i];
            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] < 'a') {
                    mm[temp[j]]++;
                }

            }
            for (int k = 0; k < temp.size(); k++) {
                if (temp[k] < 'a') {
                    cout << mp[mm[temp[k]]];
                } else {
                    cout << temp[k];
                }
            }
            cout<<el;
            mm.clear();
        }

       // mp.clear();
    }
    return 0;
}