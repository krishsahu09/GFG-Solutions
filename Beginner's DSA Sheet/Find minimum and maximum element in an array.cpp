// Question) Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long int min=a[0],max=a[0];
    
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            min=a[i];
        }
        else{
            continue;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
        else{
            continue;
        }
    }
    
    return make_pair(min,max);
}