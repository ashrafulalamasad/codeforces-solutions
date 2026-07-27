#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    vector<ll> freq(26, 0);
    for(char c : s) freq[c - 'a']++;
    for(ll i = 0; i < 26; i++){
        if(freq[i] > 0){
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
    return 0;
}
