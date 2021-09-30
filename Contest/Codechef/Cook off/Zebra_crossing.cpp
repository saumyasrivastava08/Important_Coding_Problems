#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int c=0;
       for(int i=0;i<n-1;i++){
         if(s[i]!=s[i+1])
         c++;
       }
       if(c<k)
       cout<<-1<<"\n";
       else{
           for(int i=n-1;i>=0;i--){
               if(k%2==0){
                   if(s[i]==s[0]){
                   cout<<i+1<<"\n";
                   break;
                   }
               }
               else{
                   if(s[i]!=s[0]){
                   cout<<i+1<<"\n";
                    break;
                   }
               }
           }
       }
   }
}


