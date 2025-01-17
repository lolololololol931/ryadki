#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

//n1
string replacespacetab(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') str[i] = '\t';
    }
    return str;
}
//n2
void countsymbol(string str, int& letters, int& digits, int& others) {
    letters = digits = others = 0;
    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else others++;
    }
}

int main() {
    string str;
    int letters, digits, others;
    cout << "vvedit ryadok: ";
    cin >> str;
    cout << "N1: " << replacespacetab(str) << endl;
    countsymbol(str, letters, digits, others);
    cout << "N2 letters: " << letters << ", digits: " << digits << ", other: " << others << endl;
}
