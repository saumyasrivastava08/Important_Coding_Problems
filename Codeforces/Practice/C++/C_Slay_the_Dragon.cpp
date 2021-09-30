// C. Slay the Dragon
// // //  // // //  // // //  // // // // // //  // // // // // //  // // //

#include <algorithm>
// #include <bits/stdc++.h>
// #include <cmath>
#include <iostream>
// #include <map>
// #include <set>
// #include <queue>
// #include <stack>
// #include <unordered_map>
// #include <unordered_set>
#include <vector>

// // //  // // //  // // //  // // // // // //  // // // // // //  // // //

using namespace std;

// // //  // // //  // // //  // // // // // //  // // // // // //  // // //

#define w(T)  \
    int T;    \
    cin >> T; \
    while (T--)

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define v(Type) vector<Type>
#define all(x) x.begin(), x.end()

#define int long long int
#define mod 1000000007ll
#define endl "\n"

// // //  // // //  // // //  // // // // // //  // // // // // //  // // //

int justGreaterOrEqual(v(int) & A, int p)
{

    int l = -1;
    int r = A.size();

    while (r - l > 1)
    {
        int m = (l + r) >> 1;

        if (A[m] >= p)
            r = m;
        else
            l = m;
    }

    return (r < A.size()) ? A[r] : INT32_MIN;
}

int justSmallerOrEqual(v(int) & A, int p)
{

    int l = -1;
    int r = A.size();

    while (r - l > 1)
    {
        int m = (l + r) >> 1;

        if (A[m] <= p)
            l = m;
        else
            r = m;
    }

    return (l >= 0) ? A[l] : INT32_MIN;
}

void solve()
{
    int n;
    cin >> n;

    v(int) A(n);
    int sum = 0;
    for (int &x : A)
    {
        cin >> x;
        sum += x;
    }

    sort(all(A));

    int m;
    cin >> m;

    while (m--)
    {
        int p, att;
        cin >> p >> att;

        int option1 = justGreaterOrEqual(A, p);
        int option2 = justSmallerOrEqual(A, p);

        int ans1 = (option1 != INT32_MIN) ? max(0ll, att - (sum - option1)) : INT64_MAX;
        int ans2 = (option2 != INT32_MIN) ? p - option2 + max(0ll, att - (sum - option2)) : INT64_MAX;

        cout << min(ans1, ans2) << endl;
    }
}

int32_t main()
{
    FastIO;

    // w(T)
    solve();

    return 0;
}
