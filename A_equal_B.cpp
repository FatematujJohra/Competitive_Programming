#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int a_ones=0,b_ones=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        a_ones++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]==1)
        b_ones++;
    }
    //way 1:find diff position
    int diff_pos =0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        diff_pos++;
    }
    //way 2: Rearange
    int diff_ones = abs(a_ones-b_ones)+1;
    //ans will be the smallest one
    cout<<min(diff_pos,diff_ones)<<endl;
}
  int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
    
    return 0;
    }