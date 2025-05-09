
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v({1,2,3});

    v.erase(v.begin());

    v.erase(v.begin() + 1);
    for(auto it : v){
        cout << it << "\n";
    }
    
}