/* Problem : Given a set of n integers, divide the set in two subsets of n/2 sizes each such that the difference of the sum of two subsets is as minimum as possible. If n is even, then sizes of two subsets must be strictly n/2 and if n is odd, then size of one subset must be (n-1)/2 and size of other subset must be (n+1)/2 */

#include <bits/stdc++.h>
using namespace std;

void solution(int *arr, int n, bool *curr_elements, int no_of_selected_elements,
              bool *soln, int *min_diff, int sum, int curr_sum, int curr_position)
{

    if (curr_position == n)
        return;

    if ((n / 2 - no_of_selected_elements) > (n - curr_position))
        return;

    solution(arr, n, curr_elements, no_of_selected_elements,
             soln, min_diff, sum, curr_sum, curr_position + 1);

    no_of_selected_elements++;
    curr_sum = curr_sum + arr[curr_position];
    curr_elements[curr_position] = true;

    if (no_of_selected_elements == n / 2)
    {

        if (abs(sum / 2 - curr_sum) < *min_diff)
        {
            *min_diff = abs(sum / 2 - curr_sum);
            for (int i = 0; i < n; i++)
                soln[i] = curr_elements[i];
        }
    }
    else
    {

        solution(arr, n, curr_elements, no_of_selected_elements, soln,
                 min_diff, sum, curr_sum, curr_position + 1);
    }

    curr_elements[curr_position] = false;
}

void tugOfWar(int *arr, int n)
{

    bool *curr_elements = new bool[n];

    bool *soln = new bool[n];

    int min_diff = INT_MAX;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        curr_elements[i] = soln[i] = false;
    }

    solution(arr, n, curr_elements, 0, soln, &min_diff, sum, 0, 0);

    cout << "The first subset is: ";
    for (int i = 0; i < n; i++)
    {
        if (soln[i] == true)
            cout << arr[i] << " ";
    }
    cout << "\nThe second subset is: ";
    for (int i = 0; i < n; i++)
    {
        if (soln[i] == false)
            cout << arr[i] << " ";
    }
}

// Driver program
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    tugOfWar(arr, n);
    return 0;
}
