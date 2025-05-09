#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {1, 2, 3};
    priority_queue<int> p(v.begin(), v.end());


    priority_queue<int, vector<int>, greater<int>> p1(v.begin(), v.end());

    while (!p.empty()) {
        cout << p.top() << " ";
        p.pop();
    }
    cout << "\n";

    while (!p1.empty()) {
        cout << p1.top() << " ";
        p1.pop();
    }

    return 0;
}
