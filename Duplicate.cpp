#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // size of array

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    set<int> s;

    for (int x : nums) {
        if (s.count(x)) {
            cout << "true\n";
            return 0;
        }
        s.insert(x);
    }

    cout << "false\n";
    return 0;
}