#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string a, b; cin >> a >> b;
        ll ae = 0, ao = 0, be = 0, bo = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] == '1'){
                if(i % 2 == 0) ae++;
                else ao++;
            }
            if(b[i] == '1'){
                if(i % 2 == 0) be++;
                else bo++;
            }
        }
        if(ae == be && ao == bo){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
