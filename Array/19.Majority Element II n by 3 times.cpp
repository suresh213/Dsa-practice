//https://leetcode.com/problems/majority-element-ii/discuss/1011894/Generalised-Boyer-Moore-Voting.-Majority-Element-Problem.-Floor(Nk)-less-Frequency(Majority-Element)

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
