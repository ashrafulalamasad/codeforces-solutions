#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, a, b, c; cin >> n >> a >> b >> c;
        ll cycle = a + b + c, days = (n / cycle) * 3, rem = n % cycle;
        if(rem == 0){
            cout << days << endl;
        }else if(rem <= a){
            cout << days + 1 << endl;
        }else if(rem <= a + b){
            cout << days + 2 << endl;
        }else{
            cout << days + 3 << endl;
        }
    }
    return 0;
}
