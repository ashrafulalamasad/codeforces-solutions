#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void pyramid(ll num, ll spaces){
    if(num == 0) return;
    pyramid(num - 1, spaces + 1);
    for(ll i = 1; i <= spaces; i++){
        cout << " ";
    }
    for(ll i = 1; i <= num + (num - 1); i++){
        cout << "*";
    }
    cout << endl;
}

int main()
{
    fast;
    ll n; cin >> n;
    pyramid(n, 0);
    return 0;
}
