#include <iostream>
using namespace std;

int leastInterval(char tasks[], int nTasks, int n) {
    int freq[26] = {0};

    // Count frequency of each task
    for(int i = 0; i < nTasks; i++) {
        freq[tasks[i] - 'A']++;
    }

    // Find maximum frequency
    int maxFreq = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] > maxFreq)
            maxFreq = freq[i];
    }

    // Count how many tasks have max frequency
    int countMax = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] == maxFreq)
            countMax++;
    }

    // Apply formula
    int result = (maxFreq - 1) * (n + 1) + countMax;

    // Return maximum of total tasks or calculated result
    if(result < nTasks)
        return nTasks;

    return result;
}

int main() {
    char tasks[] = {'A','A','A','B','B','B'};
    int nTasks = sizeof(tasks) / sizeof(tasks[0]);
    int n = 2;

    cout << leastInterval(tasks, nTasks, n);
    return 0;
}
