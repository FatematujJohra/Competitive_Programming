#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements:\t";
    cin >> n;
    cout<<"Enter the elements:\t";
    vector<int> nums(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }

    vector<int> ans(n, 0);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] < nums[i]) {
                count++;
            }
        }
        ans[i] = count;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}