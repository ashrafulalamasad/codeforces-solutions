#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, zeros = 0, big = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x == 0) zeros++;
            else if(x > 1) big++;
        }
        if(zeros <= (n + 1) / 2){
            cout << 0 << endl;
        }else if(zeros == n || big > 0){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }
    return 0;
}
