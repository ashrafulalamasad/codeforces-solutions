#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    string s; cin >> s;
    if(s.length() != a+b+1){
        cout << "No" << endl;
        return 0;
    }
    if(s[a] != '-'){
        cout << "No" << endl;
        return 0;
    }
    for(ll i = 0; i < s.length(); i++){
        if(i == a) continue;
        if(s[i] < '0' || s[i] > '9'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
