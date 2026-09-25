#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(is_sorted(a.begin(), a.end())){
            cout << 0 << endl;
            continue;
        }
        auto build = [&](vector<ll> arr, bool positive){
            vector<pair<ll, ll>> operations;
            auto add = [&](ll i, ll j){
                arr[i] += arr[j];
                operations.push_back({i + 1, j + 1});
            };
            if(positive){
                ll pivot = max_element(arr.begin(), arr.end()) - arr.begin();
                ll minimum = *min_element(arr.begin(), arr.end());
                while(arr[pivot] < -minimum){
                    add(pivot, pivot);
                }
                for(ll i = 0; i < n; i++){
                    if(arr[i] < 0) add(i, pivot);
                }
                for(ll i = 1; i < n; i++){
                    add(i, i - 1);
                }
            }else{
                ll pivot = min_element(arr.begin(), arr.end()) - arr.begin();
                ll maximum = *max_element(arr.begin(), arr.end());
                while(-arr[pivot] < maximum){
                    add(pivot, pivot);
                }
                for(ll i = 0; i < n; i++){
                    if(arr[i] > 0) add(i, pivot);
                }
                for(ll i = n - 2; i >= 0; i--){
                    add(i, i + 1);
                }
            }
            return operations;
        };
        ll maximum = *max_element(a.begin(), a.end());
        ll minimum = *min_element(a.begin(), a.end());
        vector<pair<ll, ll>> answer;
        bool found = false;
        if(maximum > 0){
            answer = build(a, true);
            found = true;
        }
        if(minimum < 0){
            auto candidate = build(a, false);
            if(!found || candidate.size() < answer.size()) answer = move(candidate);
        }
        cout << answer.size() << endl;
        for(auto [i, j] : answer){
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
