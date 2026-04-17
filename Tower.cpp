#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }

    int max_height = 0;
    for (auto p : freq) {
        max_height = max(max_height, p.second);
    }

    int towers = freq.size();

    cout << max_height << " " << towers << endl;
    return 0;
}