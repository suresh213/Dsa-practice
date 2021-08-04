Read this article to understand the intuition
//https://leetcode.com/problems/majority-element-ii/discuss/1011894/Generalised-Boyer-Moore-Voting.-Majority-Element-Problem.-Floor(Nk)-less-Frequency(Majority-Element)

//Time complexity: o(n) 
//Space complexity: o(n) 
Use hashmap to store frequency and iterate hashmap and check for element which appears >n/2 times

vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    vector<int> res;
    for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.second > nums.size()/3){
            res.push_back(i.first);
        }
    }
    return res;
}

//Time complexity:O(n) 
We can easity track majority element as it appears more than n/2 times.
Iterate the array and if count is 0 update current element else update count

vector<int> majorityElement(vector<int>& nums) {
    int curr1,curr2,count1=0,count2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==curr1) ++count1;
        else if(nums[i]==curr2) ++count2;
        else if(count1==0){
            count1=1;
            curr1=nums[i];
        }
        else if(count2==0){
            count2=1;
            curr2=nums[i];
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int> res;
    count1=0;
    count2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==curr1) ++count1;
        else if(nums[i]==curr2) ++count2;
    }
    if(count1>nums.size()/3) res.push_back(curr1);
    if(count2>nums.size()/3) res.push_back(curr2);
    return res;
}
