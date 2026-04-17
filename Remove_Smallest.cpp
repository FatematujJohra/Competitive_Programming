#include <bits/stdc++.h>
using namespace std;

void solve(){

        int n;
         cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++) 
        cin >> a[i];

        sort(a.begin(), a.end());

        bool possible =true;

        for(int i=1;i<n;i++){
            //check the diff of adjacent
            if(a[i] - a[i-1] > 1){
                possible= false;
            }
        }

        if(possible) 
        cout << "YES\n";
        else 
        cout << "NO\n";
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