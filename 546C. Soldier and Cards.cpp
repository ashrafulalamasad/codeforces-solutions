#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n, k, f = 0; cin >> n >> k;
    queue<int> a, b;
    for(int i=0; i<k; i++){ int x; cin >> x; a.push(x); }
    cin >> k;
    for(int i=0; i<k; i++){ int x; cin >> x; b.push(x); }
    int mx = 500000;
    while(f < mx && !a.empty() && !b.empty()){
        f++;
        int x = a.front(), y = b.front(); a.pop(), b.pop();
        if(x > y) a.push(y), a.push(x);
        else b.push(x), b.push(y);
    }
    if(!a.empty() && !b.empty()) cout << -1 << endl;
    else cout << f << " " << (a.empty() ? 2 : 1) << endl;
    return 0;
}
