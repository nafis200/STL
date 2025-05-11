#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // sort by second value
}

int main() {
    pair<int, int> arr[] = {{2, 5}, {1, 3}, {4, 2}, {3, 4}};

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, cmp);

    for(int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}
