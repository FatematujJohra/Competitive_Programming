#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int k = n * 5 / 100;

    long long sum = 0;
    int count = 0;

    for (int i = k; i < n - k; i++) {
        sum += arr[i];
        count++;
    }

    double mean = (double)sum / count;

    cout << "Mean: " << fixed << setprecision(5) << mean << endl;
}