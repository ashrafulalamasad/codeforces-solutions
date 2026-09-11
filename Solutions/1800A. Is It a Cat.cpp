#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s, sound; cin >> s;
        for(ll i = 0; i < n; i++){
            char letter = tolower(s[i]);
            if(sound.empty() || sound.back() != letter){
                sound += letter;
            }
        }
        if(sound == "meow"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
