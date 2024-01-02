// Question) Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int max=arr[0];
	   for(int i=0;i<n;i++){
	       if (arr[i]>max)
	       max=arr[i];
	       else
	       continue;
	   }
	   return max;
	}
};