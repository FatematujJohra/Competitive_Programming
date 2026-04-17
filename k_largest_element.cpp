#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : nums) {
        pq.push(x);

        if (pq.size() > k) {
            pq.pop();
        }
    }

    cout << "Kth largest element: " << pq.top() << endl;
}