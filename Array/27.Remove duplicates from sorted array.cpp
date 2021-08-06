//Time complexity : o(n)

int removeDuplicates(vector<int>& nums) {
    int j=0,n=nums.size();
    if(n<=1) return n;
    for(int i=0;i<n-1;i++){
        if(nums[i]!=nums[i+1]){
            nums[j++]=nums[i];
        }
    }
    nums[j++]=nums[n-1];
    return j;
}
