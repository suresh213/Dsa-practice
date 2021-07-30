//Kadanes algo o(n)
int maxSubArray(vector<int>& nums) {
	int sum=0,maxVal=INT_MIN;
	for(int i=0;i<nums.size();i++){
	    sum+=nums[i];
	    if(sum>maxVal){
	        maxVal=sum;
	    }
	    if(sum<0){
	        sum=0;
	    }
	}   
	return maxVal;
}

// Handling if all elemetns are negative o(n)
int maxSubArray(vector<int>& nums) {
    int sum=nums[0],maxVal=nums[0];
    for(int i=1;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        maxVal=max(sum,maxVal);
    }
    return maxVal;
}
    
    
