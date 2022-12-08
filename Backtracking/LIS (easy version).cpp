#include <bits/stdc++.h>
#define ll long long
#define el '\n'
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
const int N=1e6+10;

int n,max_value=0;
vector<int>in;

void solve( int index ,vector<int> ans ){
    //base case
    if( index == n ){

        if( max_value < ans.size() ){
            max_value = ans.size();
        }
        return;
    }

    //transition
    solve(index+1 , ans );
    if( ans.empty() || in[index] > ans.back()){
        ans.push_back( in[index] );
        solve(index+1 , ans );
    }
}
int main() {
    sameh;
    cin>>n;
    in.resize(n);
    for(auto &x: in) cin>>x;
    vector<int>v;
    solve(0,v);
    cout<<max_value<<el;

    return 0;
}