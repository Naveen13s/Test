/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*****
*****
*****
*****
Print the pattern in the function given to you.*/

#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;
int toggleChallenge(vector<string> &input) {
    // Store digit patterns for 0-9
    string digitPatterns[10];
    for (int i = 0; i < 10; i++) {
        digitPatterns[i] = input[0].substr(i * 3, 3) + input[1].substr(i * 3, 3) + input[2].substr(i * 3, 3);
    }

    // Check for the faulty number
    set<int> possibilities;
    int len = input[3].length() / 3;

    for (int d = 0; d < len; d++) {
        string faultyDigit = input[3].substr(d * 3, 3) + input[4].substr(d * 3, 3) + input[5].substr(d * 3, 3);
        bool validFound = false;

        for (int digit = 0; digit < 10; digit++) {
            string originalPattern = digitPatterns[digit];
            int toggleCount = 0;

            // Compare the patterns
            for (int k = 0; k < 9; k++) {
                if (faultyDigit[k] != originalPattern[k]) {
                    toggleCount++;
                }
            }

            if (toggleCount <= 1) {
                possibilities.insert(digit);
                validFound = true;
            }
        }

        if (!validFound) {
            return -1; // Indicate invalid
        }
    }

    // Calculate the sum of all valid numbers
    int totalSum = 0;
    do {
        int number = 0;
        for (int num : possibilities) {
            number = number * 10 + num;
        }
        totalSum += number;
    } while (false);

    return totalSum;
}

int main() {
    vector<string> input(6);
    for (int i = 0; i < 6; i++) {
        cin >> input[i];
    }

    int result = toggleChallenge(input);
    if (result == -1) {
        cout << "Invalid" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}