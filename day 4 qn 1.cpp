#include <iostream>
using namespace std;

int main() {
    char x[100], y[100];
    int b, e, c = 0;
    cout << "Enter a string to make reverse::\n";
    cin >> x;
    while (x[c] != '\0') {
        c++;
    }

    e = c - 1;
    for (b = 0; b < c; b++) {
        y[b] = x[e];
        e--;
    }

    y[b] = '\0';
    cout << "The reverse of the string is : " << y << "\n";
    return 0;
}
