//"abc" : abc acb bac bca cba cab
#include<iostream>
using namespace std;
void permutations(int i, string s) {
    if (s[i] == '\0') {
        cout << s << endl;
        return;
    }
    for (int j = i; s[j]; j++) {
        swap(s[i], s[j]);
        permutations(i + 1, s);
        swap(s[i], s[j]); //backtracking
    }
}
int main() {
    string s;
    cin >> s;
    permutations(0, s);
}
