#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll r, s; cin >> r >> s;
    if(s >= r * 2){
        cout << "Square" << endl;
    }else if(r * 2 > sqrt(pow(s, 2) + pow(s, 2))){
        cout << "Circle" << endl;
    }else{
        cout << "Complex" << endl;
    }
    return 0;
}
