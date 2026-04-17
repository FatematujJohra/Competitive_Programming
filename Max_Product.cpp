#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int n1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int n2 = nums[0] * nums[1] * nums[n - 1];

    cout << "Maximum product: " << max(n1, n2) << endl;
}