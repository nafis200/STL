#include <bits/stdc++.h>
using namespace std;

bool customSort(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) return a.second > b.second; // Descending value
    return a.first < b.first; // Ascending name
}

int main() {
    vector<pair<string, int>> vec;
    
    int n;
    cin >> n; // number of entries
    
    for (int i = 0; i < n; ++i) {
        string name;
        int value;
        cin >> name >> value;

        // Method 1
        // vec.push_back(make_pair(name, value));

        // Method 2 (recommended)
        vec.emplace_back(name, value);
    }

    sort(vec.begin(), vec.end(), customSort);

    for (auto& p : vec) {
        cout << p.first << " => " << p.second << "\n";
    }

    return 0;
}
