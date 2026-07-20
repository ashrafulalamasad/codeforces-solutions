#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, total = 0; cin >> n;
    vector<ll> coins(n);
    for(ll i = 0; i < n; i++){
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins.rbegin(), coins.rend());
    ll sumTaken = 0;
    ll count = 0;
    for(ll i = 0; i < n; i++){
        sumTaken += coins[i];
        count++;
        if(sumTaken > total - sumTaken){
            break;
        }
    }
    cout << count << endl;
    return 0;
}
