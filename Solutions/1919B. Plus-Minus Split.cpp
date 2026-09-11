#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; string s; cin >> n >> s;
        for(ll i = 0; i < n; i++){
            if(s[i] == '+'){
                sum++;
            }else{
                sum--;
            }
        }
        if(sum < 0){
            sum = -sum;
        }
        cout << sum << endl;
    }
    return 0;
}
