#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % n != 0){
            cout << -1 << endl;
            continue;
        }
        ll average = sum / n, answer = 0;
        for(ll x : a){
            if(x > average){
                answer++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
