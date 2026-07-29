#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void printNumbers(ll n){
    for(ll i = 1; i <= n; i++){
        if(i > 1) cout << " ";
        cout << i;
    }
}

int main()
{
    fast;
    ll n; cin >> n;
    printNumbers(n);
    return 0;
}
