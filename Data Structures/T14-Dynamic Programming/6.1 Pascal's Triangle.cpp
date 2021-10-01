// C++ program to 
// to print Pascal's Triangle till nth row.

#include<iostream>
#include<vector>

using namespace std;

vector<vector<int> > PascalTriangle(int numRows);

int main()
{
    int n;
    cout << "Enter the number of rows to print in Pascal's Triangle: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << PascalTriangle(n)[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int> > PascalTriangle(int numRows)
{
    vector<vector<int>> pascal;
    for(int i=0;i<numRows;i++)
    {
        vector<int> row(i+1,1);
        pascal.push_back(row);
        for(int j=1;j<i;j++)
        {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];        
        }
    }
    return pascal;
}


  /* Test Case 1
    
    Enter the number of rows to print in Pascal's Triangle: 6
    
    1 
    1 1 
    1 2 1 
    1 3 3 1 
    1 4 6 4 1 
    1 5 10 10 5 1 

    Test Case 2

    Enter the number of rows to print in Pascal's Triangle: 10
    
    1 
    1 1 
    1 2 1 
    1 3 3 1 
    1 4 6 4 1 
    1 5 10 10 5 1 
    1 6 15 20 15 6 1 
    1 7 21 35 35 21 7 1 
    1 8 28 56 70 56 28 8 1 
    1 9 36 84 126 126 84 36 9 1 

    Link to the problem: https://leetcode.com/problems/pascals-triangle/

   */