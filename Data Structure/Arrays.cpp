#include<bits/stdc++.h>
using namespace std;

// Function to reverse the array
vector<int> reverseArray(vector<int> A) {
    int n = A.size();
    vector<int> reversedArray(n);
    
    // Iterate through the array and reverse the order
    for (int i = 0; i < n; i++) {
        reversedArray[i] = A[n - 1 - i];
    }
    
    return reversedArray;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> result = reverseArray(A);

    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
