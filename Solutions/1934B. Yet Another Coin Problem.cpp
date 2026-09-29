#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; ll answer = 1e18;
        for(ll ones = 0; ones <= 2; ones++){
            for(ll threes = 0; threes <= 1; threes++){
                for(ll sixes = 0; sixes <= 4; sixes++){
                    for(ll tens = 0; tens <= 2; tens++){
                        ll used = ones + 3 * threes + 6 * sixes + 10 * tens;
                        if(used <= n && (n - used) % 15 == 0){
                            answer = min(answer, ones + threes + sixes + tens + (n - used) / 15);
                        }
                    }
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}
