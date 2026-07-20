#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        vector<string> b(8);
        for(ll i=0; i<8; i++) cin >> b[i];
        for(ll i=1; i<7; i++){
            for(ll j=1; j<7; j++){
                if(b[i][j]=='#' && b[i-1][j-1]=='#' && b[i-1][j+1]=='#' && b[i+1][j-1]=='#' && b[i+1][j+1]=='#'){
                    cout << i+1 << " " << j+1 << endl;
                }
            }
        }
    }
    return 0;
}
