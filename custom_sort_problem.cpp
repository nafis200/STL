#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>x, pair<int,int>y){
   return (x.first < y.first) || (x.first == y.first && x.second > y.second);
}

int main() {
   int t; cin >> t;
   while(t--){
     vector<pair<int,int>>v;
     int q;
     cin >> q;
     for(int i = 0; i < q; i++){
        int x,y; cin >> x >> y;
        v.emplace_back(x,y);
     }
     sort(v.begin(),v.end(),cmp);
     for(auto it : v){
    cout << it.first << " " << it.second << "\n";
   }
   }
}
