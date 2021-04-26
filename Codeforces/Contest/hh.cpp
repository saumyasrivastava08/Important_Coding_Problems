#define ll long long
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s)
{
	int n= s.length();
	int l=0,h=n-1,f=1;
	while(l<h)
	{
		if(s[l]!=s[h])
		 f=0;
		 l++;
		 h--;
	}
	if(f)
	return true;
	else
	return false;
}
int main()
{
	ll n;
	cin>>n;
	while(n--)
	{
		ll a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		ll c1=0,c2=0,c3=0;
    	for(int i=0;i<s.length();i++)
     	{
	     	if(s[i]=='0')
	     	c1++;
	    	else if(s[i]=='1')
	     	c2++;
	     	else if(s[i]=='?')
	     	c3++;
    	}
    	if(c1>a || c2>b)
    	{
    		cout<<-1<<endl;
    	//	return;
		}
		ll kk=a,jj=b;
	    a= a-c1;
	    b= b-c2;
	    ll l=0,h=s.length()-1,f=0;
	    while(l<=h)
	    {
	    	if(l==h)
		  	{
            	if(b>a && b>0)
				{
				      	s[l]='1';
				       	b--;
		        }
				else if(a>b && a>0)
			   	{
				       	s[l]='0';
				       	a--;
			    }
		    }
	    	if(s[l]=='?')
	    	{
	    		if(s[h]=='1')
	    		{
	    			if(b>=1)
	    			{
	    				s[l]='1';
	    				b = b-1;
					}
					else if(b<1)
					{
						f=0;
						break;
					}
					
				}
				else if(s[h]=='0')
				{
					if(a>=1)
					{
						s[l]='0';
						a= a-1;
					}
					else if(a<1)
					{
						f=0;
						break;
					}
					
				}
				else if(s[h]=='?')
				{
					if(b>a)
					{
						if(b>=2)
						{
							s[l]='1';
							s[h]='1';
							b = b-2;
						}
						else
						{
							f=0;
							break;
						}
					}
					else if(a>b)
					{
						if(a>=2)
						{
							s[l]='0';
							s[h]='0';
							a= a-2;
						}
						else
						{
							f=0;
							break;
						}
					}
					else if(a==b)
					{
						if(a==1 && b==1)
						{
							f=0;
							break;
						
						}
						else if(a>=2 && b>=2)
					    {
					           s[l]='0';
				               s[h]='0';
				               a=a-2;		
						}
					}
				}
			}
			else if(s[h]=='?')
			{
				if(s[l]=='0')
				{
					if(a>=1)
					{
						s[h]='0';
						a=a-1;
					}
					else if(a<1)
					{
						f=0;
						break;
					}
				}
			  else if(s[l]=='1')
				{
					if(b>=1)
					{
						s[h]='1';
						b=b-1;
					}
					else if(b<1)
					{
						f=0;
						break;
					}
				}
				
			}
			else if(s[l]=='0' && s[h]!='0')
			{
			     f=0;
			     break;
			}
			else if(s[l]=='1' && s[h]!='1')
			{
				f=0;
				break;
			}
			l++;
			h--;
		}
		if(f)
		{
				if(!ispalindrome(s))
		         	{
			         	cout<<-1<<endl;
		         	}
		        else
				{
					ll mm=0,ii=0;
		           	for(int i=0;i<s.length();i++)
		         	{
			             	if(s[i]=='0')
				             mm++;
				             else
				              ii++;
			        }
		         	if(mm==kk && ii==jj)
			      	cout<<"ans "<<s<<endl;
			      	else
			       	cout<<"ans "<<-1<<endl;
				} 	
		
	  }
	  else
	cout<<"ans "<<-1<<endl;
}
}
