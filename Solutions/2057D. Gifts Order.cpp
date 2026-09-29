#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct node{
    ll min1, min2, max1, max2, ans1, ans2;
    node(ll x = 0, ll y = 0, bool leaf = false){
        if(leaf){
            min1 = max1 = x;
            min2 = max2 = y;
        }else{
            min1 = min2 = 0;
            max1 = max2 = 0;
        }
        ans1 = ans2 = 0;
    }
};

node merge(node a, node b){
    node res;
    res.min1 = min(a.min1, b.min1);
    res.min2 = min(a.min2, b.min2);
    res.max1 = max(a.max1, b.max1);
    res.max2 = max(a.max2, b.max2);
    res.ans1 = max({a.ans1, b.ans1, b.max1 - a.min1});
    res.ans2 = max({a.ans2, b.ans2, a.max2 - b.min2});
    return res;
}

void update(vector<node>& tree, ll v, ll l, ll r, ll pos, ll x, ll y){
    if(l == r){
        tree[v] = node(x, y, true);
        return;
    }
    ll mid = (l + r) / 2;
    if(pos <= mid) update(tree, v * 2, l, mid, pos, x, y);
    else update(tree, v * 2 + 1, mid + 1, r, pos, x, y);
    tree[v] = merge(tree[v * 2], tree[v * 2 + 1]);
}

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n); vector<node> tree(4 * n + 5);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            update(tree, 1, 0, n - 1, i, a[i] - i, a[i] + i - n + 1);
        }
        cout << max(tree[1].ans1, tree[1].ans2) << endl;
        while(q--){
            ll p, x; cin >> p >> x; p--;
            update(tree, 1, 0, n - 1, p, x - p, x + p - n + 1);
            cout << max(tree[1].ans1, tree[1].ans2) << endl;
        }
    }
    return 0;
}
