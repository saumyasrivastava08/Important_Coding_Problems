# define ll                    long long 
# define matarani             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
# define arrip(arr)         for(ll i=0;i<arr.size();i++){cin>>arr[i];}
# define vstr                     vector<string>
# define vvstr                     vector<vector<string>>
# define arrop(arr)         for(ll i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
# define vch                     vector<char>
# define vvch                     vector<vector<char>>
# define vi                     vector<ll>
# define vvi                     vector<vector<ll>>
# define vp                     vector<pair<ll,ll>>
# define pb                         push_back
# define finish                  cout << endl;

#include<bits/stdc++.h>
using namespace std;

ll pairs(ll number)
{
    return((number*(number-1))/2);
}

bool isPrime(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)return false;
    }
    return true;
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////MAIN LOGIC OF MY CODE IS HERE !!!!!!!!!
void JAIMATADI()
{
    ll n;
     vi arr(n);
      arrip(arr);
      arrop(arr);

}



///DON't Forget to say JAIMATADI !!!

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int32_t main() {
 
   matarani;
   ll t;
  cin >> t;
 
    while (t--) {
         JAIMATADI();
    }
}
 