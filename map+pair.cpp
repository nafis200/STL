// spoj ACMCEG2B - FIGUREFUL
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   map<pair<int,int>,string>mp;
   while(t--){
    int x, y; string name;
    cin >> x >> y >> name;
    if(mp.find({x,y})!=mp.end()){
         mp.erase({x,y});
    }
    mp.insert({{make_pair(x,y)},name});
   }

   int q; cin >> q;
   
   while(q--){
     int x, y;
     cin >> x >> y;
     cout << mp[{x,y}] << "\n";
   }

   
}
