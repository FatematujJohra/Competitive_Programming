#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<< "Enter number of heights:\t";
    cin >> n;

    vector<int> heights(n);
    vector<int> expected(n);

    cout << "Input heights: ";

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        // cout << heights[i] << " ";   // print input
    }

    cout << endl;

    // copy manually
    for (int i = 0; i < n; i++) {
        expected[i] = heights[i];
    }
    
    sort(expected.begin(), expected.end());

    cout << "Sorted expected: ";
    for (int i = 0; i < n; i++) {
        cout << expected[i] << " ";
    }

    cout << endl;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    cout << "Mismatch count: " << count << endl;
}