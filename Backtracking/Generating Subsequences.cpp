#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
const int N=1e6+10;

int n;
vector<string>res;
string s;

void solve(int indx,string cur=""){
    //base case
    if(indx==n){
        if(!cur.empty()){
            res.push_back(cur);
        }
        return;
    }
    //transition
    //take element
    cur.push_back(s[indx]); //do
    solve(indx+1,cur);
    cur.pop_back(); //undo
    //leave element
    solve(indx+1,cur);

}
int main() {
    sameh;
    cin>>s;
    n=s.size();
    string ss;
    solve(0,ss);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<el;
    }
}