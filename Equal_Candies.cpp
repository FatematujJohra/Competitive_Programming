#include <bits/stdc++.h>
using namespace std;

void solve(){
       int n;
        cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++) 
        cin >> a[i];
        //find smallest element
        int min_val = *min_element(a.begin(), a.end());

        long long total_eaten = 0;

        for(int i=0;i<n;i++){
            total_eaten += (a[i] - min_val);
        }

        cout << total_eaten << endl;
    }

    int main(){
    int t; 
    cin >> t;

   while(t--)
   {
    solve();
   }
}