#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n <= 2){
        cout << n << endl;
    }else if(n % 2 == 1){
        cout << n * (n - 1) * (n - 2) << endl;
    }else if(n % 3 != 0){
        cout << n * (n - 1) * (n - 3) << endl;
    }else{
        cout << (n - 1) * (n - 2) * (n - 3) << endl;
    }
    return 0;
}
