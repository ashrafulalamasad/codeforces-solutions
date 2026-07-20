#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string s(n, 'a');
        for(ll i = n-2; i >= 0; i--){
            ll cnt = n - i - 1;
            if(k <= cnt){
                s[i] = 'b';
                s[n - k] = 'b';
                break;
            }
            k -= cnt;
        }
        cout << s << endl;
    }
    return 0;
}
