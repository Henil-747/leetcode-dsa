#include <bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    int left = 0, right = n - k, mid;
    while (left < right) {
        mid = (left + right)/2;
        if (x-arr[mid] <= arr[mid+k]-x) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return vector<int>(arr.begin() + left, arr.begin() + left + k);
}

int main(void) {
    int n, k, x;
    cout << "Total elements of array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter x: ";
    cin >> x;
    vector<int> res = findClosestElements(a, k, x);
    cout << "Result: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}