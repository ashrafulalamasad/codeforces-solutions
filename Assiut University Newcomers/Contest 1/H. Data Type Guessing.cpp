#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k, a; cin >> n >> k >> a;
    if((n * k) % a != 0){
        cout << "double" << endl;
    }else{
        ll res = n * k / a;
        if(res <= 2147483647) cout << "int" << endl;
        else cout << "long long" << endl;
    }
    return 0;
}
