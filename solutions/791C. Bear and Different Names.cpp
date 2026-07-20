#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string getname(ll i){
    string res = "";
    res += 'A' + i/26;
    res += 'a' + i%26;
    return res;
}

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<string> names(n);
    for(ll i=0; i<n; i++) names[i] = getname(i);
    for(ll i=0; i<n-k+1; i++){
        string s; cin >> s;
        if(s=="NO") names[i+k-1] = names[i];
    }
    for(ll i=0; i<n; i++) cout << names[i] << (i==n-1 ? "" : " ");
    cout << endl;
    return 0;
}
