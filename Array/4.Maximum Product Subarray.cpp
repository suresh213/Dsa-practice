// Time complexity:o(n)

int maxProduct(vector<int>& nums) {
    int minProduct = nums[0],maxProduct=nums[0],ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int choice1=nums[i]*minProduct;
        int choice2=nums[i]*maxProduct;
        minProduct=min(nums[i],min(choice1,choice2));
        maxProduct=max(nums[i],max(choice1,choice2));
        ans=max(ans,maxProduct);
    }
    return ans;
}

int maxProduct(vector<int>& nums) {
    int mx=nums[0],mn=nums[0],ans=nums[0];
    
    for(int i=1;i<nums.size();i++){
        if(nums[i]<0){
            swap(mx,mn);
        }
        mx=max(nums[i],mx*nums[i]);
        mn=min(nums[i],mn*nums[i]);
        ans=max(ans,mx);
    }
    return ans;
}

