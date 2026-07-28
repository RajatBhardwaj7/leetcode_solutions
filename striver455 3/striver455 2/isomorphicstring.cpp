#include <iostream>
using namespace std;

int main() {
    string s = "paper";
    string t = "title";

    if (s.size() != t.size()) {
        cout << "Not Isomorphic";
        return 0;
    }

    int mapST[256] = {0}; // mapping s → t
    int mapTS[256] = {0}; // mapping t → s

    for (int i = 0; i < s.size(); i++) {
        char c1 = s[i], c2 = t[i];

        // if already mapped, check consistency
        if (mapST[c1] && mapST[c1] != c2) {
            cout << "Not Isomorphic";
            return 0;
        }
        if (mapTS[c2] && mapTS[c2] != c1) {
            cout << "Not Isomorphic";
            return 0;
        }

        // create mapping
        mapST[c1] = c2;
        mapTS[c2] = c1;
    }

    cout << "Isomorphic";
    return 0;
}
