#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<long double> p(n);
    bool hasOne = false;
    for(ll i = 0; i < n; i++){
        cin >> p[i];
        if(p[i] == 1.0L){
            hasOne = true;
        }
    }
    cout << fixed << setprecision(12);
    if(hasOne){
        cout << 1.0L << endl;
        return 0;
    }
    sort(p.begin(), p.end(), greater<long double>());
    long double prod = 1.0L;
    long double sum = 0.0L;
    long double ans = 0.0L;
    for(ll i = 0; i < n; i++){
        if(p[i] == 0.0L){
            break;
        }
        prod *= (1.0L - p[i]);
        sum += p[i] / (1.0L - p[i]);
        long double cur = prod * sum;
        if(cur > ans){
            ans = cur;
        }
        if(sum >= 1.0L){
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
