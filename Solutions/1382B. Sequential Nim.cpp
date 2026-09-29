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
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll firstNonOne = 0;
        while(firstNonOne < n && a[firstNonOne] == 1) firstNonOne++;
        if(firstNonOne == n){
            if(n % 2 == 1) cout << "First" << endl;
            else cout << "Second" << endl;
        }else if(firstNonOne % 2 == 0) cout << "First" << endl;
        else cout << "Second" << endl;
    }
    return 0;
}
