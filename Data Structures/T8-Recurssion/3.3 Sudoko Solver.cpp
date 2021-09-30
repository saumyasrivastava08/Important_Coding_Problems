#include <iostream>
#include <math.h>
using namespace std;

bool is_valid(int mat[][9], int i, int j, int num, int n)
{   //check horizontally
    for (int k = 0; k < n; ++k)
    {
        if (mat[i][k] == num)
        {
            return false;
        }
    }
    //check vertically
    for (int k = 0; k < n; ++k)
    {
        if (mat[k][j] == num)
        {
            return false;
        }
    }
    //check for the smaller 3 X 3 block
    n = sqrt(n);
    int src = (i / n) * n;
    int scc = (j / n) * n;
    for (int p = src; p < src + n; ++p)
    {
        for (int q = scc; q < scc + n; ++q)
        {
            if (mat[p][q] == num)
            {
                return false;
            }
        }
    }
    return true;

}
bool sudokoSolver(int mat[][9], int i, int j, int n)
{
    //base case
    if (i == n)
    {
        //print the matrix
        for (int k = 0; k < n; ++k)
        {
            for (int l = 0; l < n; ++l)
            {
                cout << mat[k][l] << " ";
            }
            cout << endl;
        }
        return true;
    }
    if (j == n)
    {
        return sudokoSolver(mat, i + 1, 0, n);
    }
    if (mat[i][j] != 0)
    {
        return sudokoSolver(mat, i, j + 1, n);
    }
    //recursive case. for that i need to do 1 work khud se i.e fill in 1 block khud se
    for (int num = 1; num <= 9; ++num)
    {
        if (is_valid(mat, i, j, num, n))
        {
            mat[i][j] = num;

            bool sudokoSolverRec = sudokoSolver(mat, i, j + 1, n);
            if (sudokoSolverRec)
            {
                return true;
            }
            mat[i][j] = 0;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int mat[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    sudokoSolver(mat, 0, 0, 9); //passing starting row index, col index, size of mat
    return 0;
}
