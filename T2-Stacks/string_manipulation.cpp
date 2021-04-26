/*Tom is a string freak. He has got sequences of  n words to manipulate. 
If in a sequence, two same words come together then he’ll destroy each other. 
He wants to know the number of words left in the sequence after this pairwise destruction.

2
5
ab aa aa bcd ab
4
tom jerry jerry tom */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
       
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];    // aa aa ab
        }
        stack<string>s;
        s.push(arr[0]);
        for(int i=1;i<n;i++)
        {
            
            if(s.empty()==false && arr[i]==s.top())
               s.pop();
               else{
                   s.push(arr[i]);
               }
        }
        cout<<s.size()<<"\n";
    }
}
