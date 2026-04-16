#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;//test case
    while (t--) {
        int n;// no of participant
         cin >> n;
        vector<int> s(n);

        for (int &x : s) 
        cin >> x;

        int mx = *max_element(s.begin(), s.end());
        int mx2 = -1;

        for (int x : s)
            if (x != mx)
                mx2 = max(mx2, x);

        for (int x : s) {
            if (x == mx)
            { 
             cout << x - mx2 << " ";
            }
            else
            {
              cout << x - mx << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}