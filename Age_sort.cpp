#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while (cin >> n && n != 0) {

        vector<int> cnt(100, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        bool first = true;

        for (int i = 1; i < 100; i++) {
            while (cnt[i]--) {
                if (!first) cout << " ";
                cout << i;
                first = false;
            }
        }

        cout << "\n";
    }
}