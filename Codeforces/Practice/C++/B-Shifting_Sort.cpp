//https://codeforces.com/contest/1579/problem/B
/*    MOAZZAM07    */
    

#include<bits/stdc++.h>
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

void left_rotate_by_one(int arr[], int l,int r)
{
 
/* Shift operation to the left */
int temp = arr[l], i;
for (i = l;i<r;i++)
    arr[i] = arr[i + 1];
arr[r] = temp;
}
 
void array_left_rotate(int arr[], int no_of_rotations, int l,int r)
{
for (int i = 0; i < no_of_rotations; i++)
left_rotate_by_one(arr, l,r);   // Function is called for no_of_rotations times 
}

void solve(){
        
    int n;
    cin>>n;
    int a[n],b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    if(is_sorted(a,a+n)){
        cout<<0<<endl;
    }
    else{
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                for(int j=i+1;j<n;j++){
                    if(a[j]==b[i]){
                        int c=j-i;
                        v.push_back({i+1,j+1,c});
                        array_left_rotate(a,c,i,j);
                        break;
                    }
                }
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }     
    }

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