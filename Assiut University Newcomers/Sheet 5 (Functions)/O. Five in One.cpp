#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mx(vector<ll>& a){
    return *max_element(a.begin(), a.end());
}

ll mn(vector<ll>& a){
    return *min_element(a.begin(), a.end());
}

bool isPrime(ll n){
    if(n <= 1) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

ll countPrimes(vector<ll>& a){
    ll cnt = 0;
    for(ll x : a){
        if(isPrime(x)) cnt++;
    }
    return cnt;
}

bool isPalindrome(ll n){
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

ll countPalindromes(vector<ll>& a){
    ll cnt = 0;
    for(ll x : a){
        if(isPalindrome(x)) cnt++;
    }
    return cnt;
}

ll countDivisors(ll n){
    ll cnt = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt++;
            if(i != n / i) cnt++;
        }
    }
    return cnt;
}

ll getMaxDivisors(vector<ll>& a){
    ll best = a[0];
    for(ll i = 1; i < a.size(); i++){
        ll d1 = countDivisors(a[i]);
        ll d2 = countDivisors(best);
        if(d1 > d2){
            best = a[i];
        }else if(d1 == d2){
            best = max(best, a[i]);
        }
    }
    return best;
}


int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    cout << "The maximum number : " << mx(a) << endl;
    cout << "The minimum number : " << mn(a) << endl;
    cout << "The number of prime numbers : " << countPrimes(a) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(a) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisors(a) << endl;
    return 0;
}
