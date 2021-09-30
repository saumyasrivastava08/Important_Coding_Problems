//"abc": "","a","b","c","ab","ac","bc","abc"
#include<iostream>
using namespace std;
void subseq(string &s, int i, string out) {
    if (s[i] == '\0') {
        out += '\0';
        cout << out << endl;
        return;
    }
    //include
    out += s[i];
    subseq(s, i + 1, out);
    out.pop_back(); //backtracking
    //exclude
    subseq(s, i + 1, out);
}
int main() {

    string s;
    cin >> s;
    string out = "";
    subseq(s, 0, out);

}
