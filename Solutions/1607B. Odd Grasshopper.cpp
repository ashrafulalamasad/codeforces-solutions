#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll x, n; cin >> x >> n;
        ll rem = n % 4;
        ll base = (n / 4) * 4;
        for(ll i = 1; i <= rem; i++){
            if(x % 2 != 0){
                x += base + i;
            }else{
                x -= base + i;
            }
        }
        cout << x << endl;
    }
    return 0;
}
