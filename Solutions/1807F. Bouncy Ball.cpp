#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n,m,i1,j1,i2,j2; string d; cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
        ll dr = (d[0] == 'D' ? 1 : -1), dc = (d[1] == 'R' ? 1 : -1); set<ll> vis;
        ll i = i1, j = j1, bnc = 0;
        auto enc = [&](ll i, ll j, ll dr, ll dc){
            return i * (m+1) * 9 + j * 9 + (dr==1?2:0) + (dc==1?1:0);
        };
        vis.insert(enc(i,j,dr,dc));
        while(true){
            if(i == i2 && j == j2){
                cout << bnc << endl;
                break;
            }
            ll ni = i + dr, nj = j + dc;
            bool bounce = false;
            if(ni < 1 || ni > n){
                dr = -dr;
                bounce = true;
            }
            if(nj < 1 || nj > m){
                dc = -dc;
                bounce = true;
            }
            if(bounce) bnc++;
            i += dr; j += dc;
            ll code = enc(i,j,dr,dc);
            if(vis.count(code)){
                cout << -1 << endl;
                break;
            }
            vis.insert(code);
        }
    }
    return 0;
}
