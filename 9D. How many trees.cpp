#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mem1[36][36], mem2[36][36];
ll atmost(ll n, ll h);
ll atmost(ll n, ll h){
    if(n == 0) return 1;
    if(h == 0) return 0;
    if(mem1[n][h] != -1) return mem1[n][h];
    ll res = 0;
    for(ll root = 1; root <= n; root++)
        res += atmost(root-1, h-1) * atmost(n-root, h-1);
    return mem1[n][h] = res;
}

int main()
{
    fast;
    ll n, h; cin >> n >> h;
    memset(mem1, -1, sizeof(mem1));
    cout << atmost(n, n) - atmost(n, h-1) << "\n";
    return 0;
}
