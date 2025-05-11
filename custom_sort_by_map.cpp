#include <bits/stdc++.h>
using namespace std;

// Comparator for key descending
struct cmp {
    bool operator()(string a, string b) {
        return a > b; // descending
    }
};

int main() {
    map<string, int, cmp> mp;

    mp["Rahim"] = 20;
    mp["Karim"] = 30;
    mp["Amina"] = 30;
    mp["Babu"] = 10;

    for (auto& p : mp) {
        cout << p.first << " => " << p.second << endl;
    }

    return 0;
}

// Limitation:
// map only sorts by key, not by value.

// যদি value অনুযায়ী sort করতে চাও, vector of pair ছাড়া সম্ভব না।