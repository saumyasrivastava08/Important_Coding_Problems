    //https://codeforces.com/contest/1561/problem/C
    /*    MOAZZAM07    */
    

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <sstream>
    #include <queue>
    #include <deque>
    #include <bitset>
    #include <iterator>
    #include <list>
    #include <stack>
    #include <map>
    #include <set>
    #include <functional>
    #include <numeric>
    #include <utility>
    #include <limits>
    #include <time.h>
    #include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <assert.h>
    #include <iomanip>      

    using namespace std;
    #define int long long int
    #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define NL "\n"
    #define N 1000000007
    const int MOD = 1e9 + 7;
    const int INF = 1e9;

    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define debug(x)
    #endif

    void _print(int a){cerr<<a;}
    void _print(string t) {cerr << t;}
    void _print(char t) {cerr << t;}
    void _print(double t) {cerr << t;}

    template <class T, class V> void _print(pair <T, V> p);
    template <class T> void _print(vector <T> v);
    template <class T> void _print(set <T> v);
    template <class T, class V> void _print(map <T, V> v);
    template <class T> void _print(multiset <T> v);
    template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
    template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


    void swap(int &x, int &y) {
        int temp = x;
        x = y; 
        y = temp;
    }
    int gcd(int a, int b) {
        if (b > a) {
            return gcd(b, a);
        } 
        if (b == 0) {
            return a;
        } 
        return gcd(b, a % b);
    }
    void sieve(int n) 
    { 
        bool prime[n+1]; 
        memset(prime, true, sizeof(prime)); 
      
        for (int p=2; p*p<=n; p++) 
        { 
            
            if (prime[p] == true) 
            { 
                for (int i=p*p; i<=n; i += p) 
                    prime[i] = false; 
            } 
        } 
      
        for (int p=2; p<=n; p++) 
           if (prime[p]) 
              cout << p << " "; 
    } 

    int fastExp(int b, int e, int m)
    {
        int result = e & 1 ? b : 1;
        while (e) {
            e >>= 1;
            b = (b * b) % m;
            if (e & 1)
                result = (result * b) % m;
        }
        return result;
    }

    int bin_search(int b,int n,int a[]){
        int low = 0;
        int high = n;
        while(low < high){
            int mid = (low+high)/2;
            if(a[mid] <= b){
                low = mid + 1;
            }else{
                high = mid;
            }
        }
     
        return low;
    }

    bool is_sqr(int x) {
      int y = (int) (sqrt(x) + 0.5);
      return y * y == x;
    }

    bool isPrime(int n){
            for(int i=2;i<=n/2;i++){
                if(n%i == 0) return false;
            }
            return true;
    }

    bool isVowel(char c){
        if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U' ){
            return true;
        }
        return false;
        //to convert int to string "auto s=to_string(n)";
    }
    int test(int i, int k,int n){
        if(i==1){
            return n-k+1;
        }
    }

void solve(){
        
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        
        int mx=0;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            mx=max(mx,x-j+1);    
        }
        v.push_back({mx,k});
    }
    sort(v.begin(),v.end());
    debug(v)
    int l=v[0].first,r=v[n-1].first;
    int ans=0;
    
    while(l<=r){
        int mid=(l+r)/2;
        int cur=mid,f=1;
        for(int i=0;i<n;i++){
            if(v[i].first<=cur){
                cur+=v[i].second;
            }
            else{
                f=0;
                break;
            }
        }
        if(f==0){
            l=mid+1;
        }
        else{
            ans=mid;
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    fastio();
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    int tt=1;
    cin >> tt;
    while(tt--){
           
        solve();
           
    }
}