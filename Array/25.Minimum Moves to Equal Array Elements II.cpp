//Time Complexity : O(nlogn + n)
with finding median of array

int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int mid=nums.size()/2,ans=0;
    for(int i=0;i<nums.size();i++){
        ans+=abs(nums[i]-nums[mid]);
    }
    return ans;
}

//Time Complexity : O(nlogn + n)
without finding median of array

As we observe from above approach
         ans = nums[mid]-nums[i]
         ans = nums[j]-nums[mid]
         ans = nums[j]-nums[mid]+nums[mid]-nums[i]
//         both nums of mid get cancelled above
         ans = nums[j]-nums[i]
         
So we can traverse from both ends upto half and just subtract left element from right element and add it to our answer

int minMoves2(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i=0,j=nums.size()-1,ans=0;
    while(i<j){
        ans+=(nums[j]-nums[i]);
        i++;
        j--;
    }
    return ans;
}
