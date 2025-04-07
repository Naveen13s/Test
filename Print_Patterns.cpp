#include <iostream>
using namespace std;

int main() {
//Solid Square of Stars
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}


//Right-Angled Triangle of Stars
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++)
        cout << "*";
    cout << endl;
}

//Number Pyramid

int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++)
        cout << j;
    cout << endl;
}

//Right-Aligned Triangle

int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++)
        cout << " ";
    for (int k = 1; k <= i; k++)
        cout << "*";
    cout << endl;
}


//Pyramid Pattern
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++)
        cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++)
        cout << "*";
    cout << endl;
}

