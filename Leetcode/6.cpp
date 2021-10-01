/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"

*/
class Solution {
public:
    string convert(string s, int n) {
        if(n<=1)return s;
        int len = s.length();
        queue<char> arr[n];
        for(int i=0;i<n;i++)
        {
            queue<char> m;
            arr[i] = m;
        }
        int k=0;
        int t = 1;
        int v = 0;
        while(k<len)
        {
            char ch = s[k];
            arr[v].push(ch);
            if(v==0)
            {
                t=1;
            }
            if(v==n-1)
            {
                t=-1;
            }
            if(n==1)t=0;
            v+=t;
            k++;
        }
        string st = "";
        for(int i=0;i<n;i++)
        {
            while(!arr[i].empty())
            {
                char ch = arr[i].front();
                st+=ch;
                arr[i].pop();
            }
        }
        return st;
    }
};
