#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        vector<vector<ll>> b(n + 1);
        bool ok = true;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]].push_back(i);
            if(b[a[i]].size() >= 3) ok = false;
        }
        vector<ll> p(n, -1), q(n, -1);
        vector<ll> fp(n + 1, -1), fq(n + 1, -1);
        for(ll x = n; x >= 1 && ok; x--){
            for(ll i : b[x]){
                if(fp[x] == -1){
                    p[i] = x;
                    fp[x] = i;
                }else if(fq[x] == -1){
                    q[i] = x;
                    fq[x] = i;
                }
            }
        }
        ll vp = n, vq = n;
        for(ll x = n; x >= 1 && ok; x--){
            for(ll i : b[x]){
                while(vp >= 1 && fp[vp] != -1) vp--;
                while(vq >= 1 && fq[vq] != -1) vq--;
                if(p[i] == -1 && vp >= 1){
                    p[i] = vp;
                    fp[vp] = i;
                }
                if(q[i] == -1 && vq >= 1){
                    q[i] = vq;
                    fq[vq] = i;
                }
            }
        }
        for(ll i = 0; i < n; i++){
            if(p[i] == -1 || q[i] == -1 || max(p[i], q[i]) != a[i]) ok = false;
        }
        if(!ok) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(ll i = 0; i < n; i++) cout << p[i] << " ";
            cout << endl;
            for(ll i = 0; i < n; i++) cout << q[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
