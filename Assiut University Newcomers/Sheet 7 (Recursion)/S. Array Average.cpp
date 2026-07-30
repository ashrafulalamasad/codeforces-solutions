#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

double arr[10001];

double avg(ll n, ll i){
    if(i == n - 1) return arr[i];
    return arr[i] + avg(n, i + 1);
}

int main()
{
    fast;
    ll n; cin >> n;
    for(ll i = 0; i < n; i++) cin >> arr[i];
    cout << fixed << setprecision(6) << avg(n, 0) / n << endl;
    return 0;
}
