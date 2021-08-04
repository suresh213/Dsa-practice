//Time complexity: o(n) 
//Space complexity: o(n) 
Use hashmap to store frequency and iterate hashmap and check for element which appears >n/2 times

//Time complexity:O(n) 
We can easity track majority element as it appears more than n/2 times.
Iterate the array and if count is 0 update current element else update count

int majorityElement(vector<int>& nums) {
    int count=0;
    int curr;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            count=1;
            curr=nums[i];
        }
        else if(nums[i]==curr) ++count;
        else{
            count--;
        }
    }
    return curr;
}
