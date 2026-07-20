#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    bool ok = true;
    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])){
            ok = false;
            break;
        }
    }
    if(ok){
        for(int i = 0; i < s.size(); i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            }else{
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}
