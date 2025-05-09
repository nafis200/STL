#include <bits/stdc++.h>
using namespace std;

struct cmp
{
     bool operator()(int a, int b){
        return a * a < b * b;
     }
};


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v = {1, 2, 3};
    priority_queue<int> p(v.begin(), v.end());


    priority_queue<int, vector<int>, greater<int>> p1(v.begin(), v.end());

    // while (!p.empty()) {
    //     cout << p.top() << " ";
    //     p.pop();
    // }
    // cout << "\n";

    // while (!p1.empty()) {
    //     cout << p1.top() << " ";
    //     p1.pop();
    // }

  
    priority_queue<int,vector<int>,cmp> customq;

    customq.push(4);
    customq.push(2);
    customq.push(3);

    cout << customq.top() << "\n";
  
    return 0;
}
