#define ll long long 
#include<bits/stdc++.h>
using namespace std;
ll k = 1000000;
	vector<string> v ;
void decimalToBinary()
{

	ll i=1;
	while(i<=k)
	{
		 string s = bitset<64> (i).to_string();
   
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
    
        v.push_back( s.substr(loc1));
     
   i++;
		
	}
	
   
}
int main()
{
	ll n;
	cin>>n;
	 decimalToBinary();
	

}
