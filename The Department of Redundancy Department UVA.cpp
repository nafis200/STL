#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s;
    // getline(cin,s);
    // stringstream ss;

    int word; 
    // ss << s;
    unordered_map<int,int>mp;
    vector<int>v;
    // while(ss >> word){
    //     if(mp[word] == 0){
    //         v.push_back(word);
    //     }
    //     mp[word]++;
    // }
    while(cin >> word){
        if(mp[word] == 0){
            v.push_back(word);
        }
        mp[word]++;
    }



    for(auto it : v){
        cout << it << " " << mp[it] << "\n";
    }

}
