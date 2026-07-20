#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll w, h, n; cin >> w >> h >> n;
		ll cnt = 1;
		while(w%2==0){
			w/=2;
			cnt*=2;
		}
		while(h%2==0){
			h/=2;
			cnt*=2;
		}
		if(cnt>=n)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
    return 0;
}
