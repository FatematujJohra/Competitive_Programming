#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0,1,2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }

    cout << "Sorted: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}