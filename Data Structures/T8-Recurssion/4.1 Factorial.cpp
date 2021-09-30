// Test Cases
// Case 1:
//(input)	Enter the number 5	
//(output)	The factorial is 120

// Case 2:
//(input)	Enter the number 10	
//(output)	The factorial is 3628800

// Code
#include <iostream>
using namespace std;

int fact( int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
 

int main()
{   
	int num;
	
    cout << "Enter the number: " << "\n";
    cin >> num;
    cout << " The factorial is " << fact(num) << " \n ";
	
    return 0;
}
