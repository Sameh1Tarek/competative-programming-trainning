#include<bits/stdc++.h>
#define sameh ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define ll long long
#define el endl
using namespace std;

  void print(int indx,vector<int> &ds,int s,int sum,int arr[],int n){
    if (indx==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it <<" ";
            }
            cout<<el;
        }
        return;
    }
    ds.push_back(arr[indx]);
    s+=arr[indx];
      print(indx+1,ds,s,sum,arr,n);

    s-=arr[indx];
    ds.pop_back();
      print(indx+1,ds,s,sum,arr,n);
}

int main() {
    //sameh;
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    print(0,ds,0,sum,arr,n);
}

