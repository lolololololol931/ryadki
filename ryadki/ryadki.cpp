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
//n3
int countwords(string str) {
    int count = 0;
    bool inWord = false;
    for (int i = 0; i < str.size(); i++) {
        if (!isspace(str[i])) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }
    return count;
}
//n4
bool palindrome(string str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) return false;
        left++; right--;
    }
    return true;
}


int main() {
    string str;
    int letters, digits, others;
    cout << "vvedit ryadok: ";
    getline(cin, str);
    cout << "N1: " << replacespacetab(str) << endl;
    countsymbol(str, letters, digits, others);
    cout << "N2 letters: " << letters << ", digits: " << digits << ", other: " << others << endl;
    cout << "N3: " << countwords(str) << endl;
    cout << "N4: " << (palindrome(str) ? "yes" : "no") << endl;
}
