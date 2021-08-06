//Time Complexity : O(n^2)
Brute force : A simple way to make all elements equal is that at each step find the largest elements and 
then increase all rest n-1 elements by 1. We should keep doing this operation till all elements become equal.


//Time Complexity : O(n)
Better Approach : If we took a closer look at each operation as well problem statement 
we will find that increasing all n-1 element except the largest one is similar
to decreasing the largest element only. So, the smallest elements need not to decrease
any more and rest of elements will got decremented upto smallest one. In this way the
total number of operation required for making all elements equal will be
arraySum – n * (smallestElement).

int minMoves(vector<int>& nums) {
    int sum=0,small=INT_MAX;
    for(int i:nums){
        sum+=i;
        small=min(small,i);
    }
    int ans = sum-(nums.size()*small);
    return ans;
}
