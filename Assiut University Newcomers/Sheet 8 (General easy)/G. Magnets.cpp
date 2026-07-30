#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string prev;
    ll groups = 0;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        if(i == 0 || s != prev) groups++;
        prev = s;
    }
    cout << groups << endl;
    return 0;
}
