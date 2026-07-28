#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

// Structure for item
struct Item {
    int value;
    int weight;
};

class Solution {
public:
    // Comparator to sort by value/weight ratio
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n) {
        // Sort items by ratio
        sort(arr, arr + n, comp);

        int currWeight = 0;
        double finalValue = 0.0;

        for (int i = 0; i < n; i++) {
            // If full item can be taken
            if (currWeight + arr[i].weight <= W) {
                currWeight += arr[i].weight;
                finalValue += arr[i].value;
            }
            // Take fractional part
            else {
                int remaining = W - currWeight;
                finalValue += arr[i].value * ((double)remaining / arr[i].weight);
                break;
            }
        }
        return finalValue;
    }
};

int main() {
    int W = 50;
    Item arr[] = { {100,20}, {60,10}, {120,30} };
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    double ans = obj.fractionalKnapsack(W, arr, n);

    cout << fixed << setprecision(2);
    cout << "The maximum value is " << ans;

    return 0;
}
