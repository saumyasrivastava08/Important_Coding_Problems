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
                    	ll k=a,j=b;
                     	if(c3==0)
                       	{
    	                 	if(ispalindrome(s))
    	                  	{
    		                	if(c1==k && c2==j)
    			             {
    			             	cout<<s<<endl;
    			                 // f=5;
    			                 // break;
			              	}
			                	else 
			               	{
			                     	cout<<-1<<endl;
				              //  break;
				            }
		            	}
		               	else if(ispalindrome(s)==false)
		             	{
			                  	cout<<-1<<endl;
		              	}
	                 	}
	                 	else
	                 	{           ll kk=a;
	                 	          	a=a-c1;
	                 	            ll jj=b;
                                 	b=b-c2;
                                 	
                               	if(a<0 || b<0)
                             	{
    	                              	cout<<-1<<endl;
	                           	}
	                           	else
	                          	{
			                 	ll h=s.length()-1,l=0;
                                   	ll f=1;
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
    	                    	if(s[l]=='?'&& s[h]=='0')
    	                        	{
    	         	              	if(a>=1)
    	         	            	{
    	         			         	s[l]='0';
    		                        	a=a-1;
						            }
					        	else
					          	{
						          	f=0;
							         break;
					         	}
			                      }
			        else if(s[l]=='0'&& s[h]=='?')
    	         	{
    	         		if(a>=1)
    	         		{
    	         				s[h]='0';
    		                	a=a-1;
						}
						else
						{
							f=0;
							break;
						}
			        }
		
		      	else if(s[l]=='?'&& s[h]=='?')
		    	{	//cout<<a<<" b "<<b;
			      	if(b>a )
			    	{
					if(b>=2)
					{
					     s[l]='1';
					     s[h]='1';
				         b=b-2;	
					}
					else
					{
						f=0;
						break;
					}
			       	}
			    	else if(b==a )
			     	{
				     	 if(a==1 && b==1)
			         	{
			    	    	f=0;
			    	    	break;
					    }
					    else
					    {
					           s[l]='0';
				            	 s[h]='0';
				              a=a-2;		
						}
			    	}
			    	else if(a>b)
			    	{
			    		if(a>=2)
				     	{
					     s[l]='0';
					     s[h]='0';
				         a=a-2;	
				    	}
				    	else
				    	{
				    		f=0;
				    		break;
						}
					}
			}
			else if(s[l]=='1' && s[h]=='?')
			{
				if(b>=1)
				{
					s[h]='1';
					b= b-1;
				}
				else
				{
					f=0;
					break;
				}
			}
			else if(s[l]=='?' && s[h]=='1')
			{
				if(b>=1)
				{
					s[l]='1';
					b= b-1;
				}
				else
				{
					f=0;
					break;
				}
			}
			l++;
			h--;
		}
        if(f==0)
		cout<<-1<<endl;
		else if(f==1)
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
				cout<<s<<endl;
				else
				cout<<-1<<endl;
			}
			
		}
	
		}	
 }
    
	}
    
    	
	}

