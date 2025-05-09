
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    // st.insert(5);

    cout << (*st.begin()) << "\n";

    cout << *(--st.end()) << "\n";

    st.erase(st.begin());

    st.erase(2);

    cout << st.size() << "\n";

    auto it = st.find(5);

    cout << *it << "\n";
    if(it != st.end()){
        cout << "yes\n";
    }
    else{
        cout << "No\n";
    }
}