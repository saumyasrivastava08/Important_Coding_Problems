#include <iostream>
using namespace std;
string s[10] = {"", "", "ABC", "DEF", "GHI", "JKI", "LMN", "PQRS", "TUV", "WXYZ"};
void PhoneKeypad(char *inp, int i, char *out, int j) {
    //base case:
    if (inp[i] == '\0') {
        out[i] = '\0';
        cout << out << endl;
        return;
    }
    //recursive case:
    int digit = inp[i] - '0';
    for (int k = 0; s[digit][k] != '\0'; ++k)
    {
        out[j] = s[digit][k];
        PhoneKeypad(inp, i + 1, out, j + 1);
    }

}
int main(int argc, char const *argv[])
{
    char inp[100], out[100];
    cin >> inp;
    PhoneKeypad(inp, 0, out, 0);
    return 0;
}
