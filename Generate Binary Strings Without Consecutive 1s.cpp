#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(int n, string curr = "", char last = '0') {
    // Base case: if current string has length n, print it
    if ((int)curr.size() == n) {
        cout << curr << " ";
        return;
    }

    // Always can add '0'
    generateBinaryStrings(n, curr + "0", '0');

    // Can add '1' only if last was not '1'
    if (last != '1')
        generateBinaryStrings(n, curr + "1", '1');
}

int main() {
    int n;
    cin >> n;

    generateBinaryStrings(n);
    cout << endl;
    return 0;
}
