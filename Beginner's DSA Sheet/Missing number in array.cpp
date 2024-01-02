// Question) Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

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