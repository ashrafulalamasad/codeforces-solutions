#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        ll tmp = n, o2 = 0, o5 = 0;
        while(tmp % 2 == 0){
            o2++; tmp /= 2;
        }
        while(tmp % 5 == 0){
            o5++; tmp /= 5;
        }
        ll c2 = o2, c5 = o5, k = 1;
        while(c2 < c5 && k * 2 <= m){
            k *= 2; c2++;
        }
        while(c5 < c2 && k * 5 <= m){
            k *= 5; c5++;
        }
        while(k * 10 <= m){
            k *= 10; c2++; c5++;
        }
        ll v = n * k, z = 0;
        while(v % 10 == 0){
            z++; v /= 10;
        }
        ll need2 = z > o2 ? z - o2 : 0;
        ll need5 = z > o5 ? z - o5 : 0;
        ll base = 1;
        for(ll i = 0; i < need2; i++) base *= 2;
        for(ll i = 0; i < need5; i++) base *= 5;
        k = base * (m / base);
        cout << n * k << endl;
    }
    return 0;
}
