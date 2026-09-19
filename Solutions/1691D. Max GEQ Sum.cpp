#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll INFLL = (ll)4000000000000000000LL;
vector<ll> lgv;

ll build_lg(ll n){
    while((ll)lgv.size() <= n) lgv.push_back(0);
    for(ll i = 2; i <= n; i++) lgv[i] = lgv[i / 2] + 1;
    return lgv[n];
}

int main()
{
    fast;
    build_lg(200000);
    tc{
        ll n; cin >> n;
        if((ll)lgv.size() <= n) build_lg(n);
        vector<ll> a(n + 2, 0);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        vector<ll> pre(n + 2, 0);
        vector<ll> suf(n + 3, 0);
        for(ll i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i];
        for(ll i = n; i >= 1; i--) suf[i] = suf[i + 1] + a[i];
        ll K = lgv[n] + 1;
        vector<vector<ll>> stPre(K, vector<ll>(n + 2, -INFLL));
        vector<vector<ll>> stSuf(K, vector<ll>(n + 2, -INFLL));
        for(ll i = 1; i <= n; i++){
            stPre[0][i] = pre[i];
            stSuf[0][i] = suf[i];
        }
        for(ll k = 1; k < K; k++){
            for(ll i = 1; i + (1LL << k) - 1 <= n; i++){
                stPre[k][i] = max(stPre[k - 1][i], stPre[k - 1][i + (1LL << (k - 1))]);
                stSuf[k][i] = max(stSuf[k - 1][i], stSuf[k - 1][i + (1LL << (k - 1))]);
            }
        }
        auto range_max = [&](vector<vector<ll>> &st, ll l, ll r) -> ll {
            if(l > r) return -INFLL;
            ll k = lgv[r - l + 1];
            return max(st[k][l], st[k][r - (1LL << k) + 1]);
        };
        vector<ll> L(n + 2, 0);
        vector<ll> R(n + 2, n + 1);
        vector<ll> stk;
        a[0] = INFLL;
        stk.push_back(0);
        for(ll i = 1; i <= n; i++){
            while(!stk.empty() && a[stk.back()] <= a[i]) stk.pop_back();
            L[i] = stk.back();
            stk.push_back(i);
        }
        stk.clear();
        a[n + 1] = INFLL;
        stk.push_back(n + 1);
        for(ll i = n; i >= 1; i--){
            while(!stk.empty() && a[stk.back()] <= a[i]) stk.pop_back();
            R[i] = stk.back();
            stk.push_back(i);
        }
        bool ok = true;
        for(ll i = 1; i <= n; i++){
            if(range_max(stSuf, L[i] + 1, i - 1) - suf[i] > 0) ok = false;
            if(range_max(stPre, i + 1, R[i] - 1) - pre[i] > 0) ok = false;
            if(!ok) break;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
