//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
    int sum = 0, sum_arr = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    for (int i = 0; i < n-1; i++) { //n-1 is important because without it the loop will take garbage value of array
        sum_arr += array[i];
    }
    return sum - sum_arr;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends