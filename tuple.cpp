

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    tuple<int,int,int,int>x;
    tuple<int,int,string>y;
    x = make_tuple(1,2,3,4);
    
    cout << (get<0>(x)) << " " <<(get<1>(x)) << "\n";
}