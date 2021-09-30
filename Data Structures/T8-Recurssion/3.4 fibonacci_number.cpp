
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    cin>>n;
    cout << fib(n);
    return 0;
}

/*
Test cases : 
n = 9
output : 34
--------------------
n = 25
output : 75025

*/