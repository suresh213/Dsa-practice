//Time Complexity : O(n2)
Brute force - check with every pair with two for loops


//Time Complexity : O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int sum = target-nums[i];
        if(mp.find(sum)!=mp.end()){
            return {mp[sum],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}

//Time Complexity : O(n)

Count all pairs with given sum

int getPairsCount(int nums[], int n, int target) {
    unordered_map<int,int> mp;
    int count=0;
    for(int i=0;i<n;i++){
        int sum=target-nums[i];
        if(mp.find(sum)!=mp.end()){
            count+=mp[sum];
        }
        mp[nums[i]]++;
    }
    return count;
}

//Time Complexity : O(n2)

Print all pairs with given sum

int getPairsCount(int nums[], int n, int target) {
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        int sum = target-nums[i];
        if(mp.find(sum)!=mp.end()){
            for(int j:mp[sum]){
                cout<<j<<" "<<i<<endl;
            }
        }
        mp[nums[i]].push_back(i);
    }
    return 0;
}

Input array is sorted

//Time Complexity : O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    int start=0,end=nums.size()-1;
    while(start<end){
        if(nums[start]+nums[end]==target) return {start+1,end+1};
        if(nums[start]+nums[end]<target) start++;
        else end--;
    }
    return {};
}
