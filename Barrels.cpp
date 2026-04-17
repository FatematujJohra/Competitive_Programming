#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;// n = number of barrels, k = number of barrels to choose
    cin>>n>>k;

    vector<long long> a(n);// capacities of the barrels
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.rbegin(), a.rend()); // descending

    long long sum = 0;// sum of the largest k+1 elements

    for(int i=0;i<=k;i++){
        sum += a[i]; // largest k+1 elements
    }

    cout<<sum<<endl;
}
    int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}