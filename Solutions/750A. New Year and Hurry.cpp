#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    ll time = 240 - k, total = 0, cnt = 0;
    for(ll i=1; i<=n; i++){
        total += i*5;
        if(total <= time){
            cnt++;
        }else{
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
