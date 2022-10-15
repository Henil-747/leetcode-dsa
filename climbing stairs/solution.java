class Solution {
    int q = 10000000;
    int arr[] = new int[q];
    
    public int func(int n){
        if(n <= 2){
            return arr[n] = n;
        }
        if (arr[n] != -1){
            return arr[n];
        }
        else{
            return arr[n] = func(n-1) + func(n-2);
        }
    }
    
    public int climbStairs(int n) {
        for(int i=0;i<q;i++){
            arr[i] = -1;
        }
        return func(n);
    }
}