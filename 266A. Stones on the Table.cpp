#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, count = 0; string s;
    cin >> n >> s;
    for(ll i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
