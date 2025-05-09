
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "abcd";

    s.push_back('e');
    cout << s << "\n";
    s += 'e';
    cout << s << "\n";

    s = s + 'f';

    cout << s << "\n";
}