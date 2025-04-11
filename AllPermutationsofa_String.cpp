#include <iostream>
#include <string>
using namespace std;

void generatePermutations(string str, int start, int end) {
    if (start == end) {
        cout << str << endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);                      // Swap current index with loop index
        generatePermutations(str, start + 1, end);     // Recurse
        swap(str[start], str[i]);                      // Backtrack
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "All permutations of \"" << input << "\":" << endl;
    generatePermutations(input, 0, input.length() - 1);

    return 0;
}
