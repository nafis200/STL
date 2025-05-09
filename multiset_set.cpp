
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    multiset<int>st;

    st.insert(1);
    st.insert(2);
    st.insert(1);

    // for(auto it : st){
    //     cout << it << "\n";
    // }
   
    // all set operation do.
    // if erase 1 all multiset in 1 erase

    
    // for(auto it : st){
    //     cout << it << "\n";
    // }

    auto it = st.find(1);

    // st.erase(1);
    st.erase(it);

    // 1 dile set er moddhe sob 1 remove kore dibe but pointer diye korle just oitare erase kore dibe

    for(auto it : st){
        cout << it << "\n";
    }

    // cout << *it << "\n";
}