1.	const int N = 3e5 + 5;
2.	const int MOD = 998244353;
3.	 
4.	int fact[N], invfact[N];
5.	 
6.	int pow(int a, int b, int m)
7.	{
8.		int ans=1;
9.		while(b)
10.		{
11.			if(b&1)
12.				ans=(ans*a)%m;
13.			b/=2;
14.			a=(a*a)%m;
15.		}
16.		return ans;
17.	}
18.	 
19.	int modinv(int k)
20.	{
21.		return pow(k, MOD-2, MOD);
22.	}
23.	 
24.	void precompute()
25.	{
26.		fact[0]=fact[1]=1;
27.		for(int i=2;i<N;i++)
28.		{
29.			fact[i]=fact[i-1]*i;
30.			fact[i]%=MOD;
31.		}
32.		invfact[N-1]=modinv(fact[N-1]);
33.		for(int i=N-2;i>=0;i--)
34.		{
35.			invfact[i]=invfact[i+1]*(i+1);
36.			invfact[i]%=MOD;
37.		}
38.	}
39.	 
40.	int nCr(int x, int y)
41.	{
42.		if(y>x)
43.			return 0;
44.		int num=fact[x];
45.		num*=invfact[y];
46.		num%=MOD;
47.		num*=invfact[x-y];
48.		num%=MOD;
49.		return num;
50.	}
