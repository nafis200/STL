#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        return a.second < b.second; // sort by second value
    }
};

int main() {
    set<pair<int, int>, cmp> s;

    s.insert({2, 5});
    s.insert({1, 3});
    s.insert({4, 2});
    s.insert({3, 4});

    for (auto p : s) {
        cout << p.first << " " << p.second << endl;
    }
}
