#include <iostream>
using namespace std;

void printSubsets(string input, string output, int index) {
    if (index == input.length()) {
        cout << "\"" << output << "\"" << endl;
        return;
    }

    // Include the current character
    printSubsets(input, output + input[index], index + 1);

    // Exclude the current character
    printSubsets(input, output, index + 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Subsets of \"" << str << "\":" << endl;
    printSubsets(str, "", 0);

    return 0;
}
