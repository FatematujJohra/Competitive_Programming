#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
     cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> a(n);
        for (int &x : a) 
        cin >> x;

        vector<int> freq(n + 1, 0);

        int ans = -1;

        for (int x : a) {
            freq[x]++;
            if (freq[x] == 3) {
                ans = x;
            }
        }

        cout << ans << "\n";
        return 0;
    }
}