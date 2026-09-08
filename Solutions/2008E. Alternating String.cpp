#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        vector<ll> even(26), odd(26);
        for(ll i = 0; i < n; i++){
            if(i % 2 == 0) even[s[i] - 'a']++;
            else odd[s[i] - 'a']++;
        }
        ll answer = n;
        if(n % 2 == 0){
            ll maxEven = *max_element(even.begin(), even.end());
            ll maxOdd = *max_element(odd.begin(), odd.end());
            answer = n - maxEven - maxOdd;
        }else{
            vector<ll> leftEven(26), leftOdd(26);
            for(ll i = 0; i < n; i++){
                if(i % 2 == 0) even[s[i] - 'a']--;
                else odd[s[i] - 'a']--;
                vector<ll> newEven(26), newOdd(26);
                for(ll j = 0; j < 26; j++){
                    newEven[j] = leftEven[j] + odd[j];
                    newOdd[j] = leftOdd[j] + even[j];
                }
                ll maxEven = *max_element(newEven.begin(), newEven.end());
                ll maxOdd = *max_element(newOdd.begin(), newOdd.end());
                answer = min(answer, n - maxEven - maxOdd);
                if(i % 2 == 0) leftEven[s[i] - 'a']++;
                else leftOdd[s[i] - 'a']++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
