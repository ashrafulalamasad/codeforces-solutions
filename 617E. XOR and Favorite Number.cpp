#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct query{
    ll l, r, id, block;
} q[1000001];

ll cumxor[1000001], cnt[1<<20], fin[1000001];
ll n, m, k, curl = 0, curr = 0, ans_c = 0;
ll B = 333;

void add(ll x){
    ans_c += cnt[cumxor[x] ^ k];
    cnt[cumxor[x]]++;
}

void remove(ll x){
    cnt[cumxor[x]]--;
    ans_c -= cnt[cumxor[x] ^ k];
}

int main()
{
    fast;
    cin >> n >> m >> k;
    cumxor[0] = 0;
    for(ll i=1; i<=n; i++){
        ll x; cin >> x;
        cumxor[i] = cumxor[i-1] ^ x;
    }
    for(ll i=0; i<m; i++){
        cin >> q[i].l >> q[i].r;
        q[i].l--;
        q[i].id = i;
        q[i].block = q[i].l / B;
    }
    sort(q, q + m, [](const query &a, const query &b){
        return a.block != b.block ? a.block < b.block : (a.block & 1 ? a.r < b.r : a.r > b.r);
    });
    cnt[0] = 1;
    for(ll i=0; i<m; i++){
        while(curl > q[i].l) add(curl - 1), curl--;
        while(curr < q[i].r) add(curr + 1), curr++;
        while(curl < q[i].l) remove(curl), curl++;
        while(curr > q[i].r) remove(curr), curr--;
        fin[q[i].id] = ans_c;
    }
    for(ll i=0; i<m; i++) cout << fin[i] << endl;
    return 0;
}
