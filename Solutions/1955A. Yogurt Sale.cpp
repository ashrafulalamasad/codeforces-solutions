#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b, ans; cin >> n >> a >> b;
        if(b <= 2*a){
            ans = (n/2) * b + (n%2) * a;
        }else{
            ans = n * a;
        }
        cout << ans << endl;
    }
    return 0;
}
