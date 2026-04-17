#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;
    int x;

    while (cin >> x) {

        v.push_back(x);

        sort(v.begin(), v.end());

        int n = v.size();

        if (n % 2 == 1) {
            cout << v[n / 2] << endl;
        }
        else {
            int mid1 = v[n / 2 - 1];
            int mid2 = v[n / 2];
            cout << (mid1 + mid2) / 2 << endl;
        }
    }
}