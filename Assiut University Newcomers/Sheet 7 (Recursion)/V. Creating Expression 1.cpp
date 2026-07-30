#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll a[21], n, s;
bool flag;

void expr(ll i, ll sum){
    if(i == n){
        if(sum == s) flag = true;
        return;
    }
    expr(i + 1, sum + a[i]);
    expr(i + 1, sum - a[i]);
}

int main()
{
    fast;
    cin >> n >> s;
    for(ll i = 0; i < n; i++) cin >> a[i];
    expr(1, a[0]);
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
