#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll count = 0;
    while(n>0){
        ll last = n%10;
        if(last == 4 || last == 7){
            count++;
        }
        n /= 10;
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
