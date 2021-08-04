//Time complexity: o(n) 
//Space complexity: o(n) 
Use hashmap to store frequency and iterate hashmap and check for element which appears >n/2 times

vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    int k=3;    
    vector<int> res;
    for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.second > nums.size()/k){
            res.push_back(i.first);
        }
    }
    return res;
}

//Time complexity:O(n) 
//Space complexity:O(n) 
Generalized form same as hashmap method just understand the intuition

vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    int k=3;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            ++mp[nums[i]];
        }
        else if(mp.size()<k-1){
            ++mp[nums[i]];
        }
        else{
            for(auto it=mp.begin();it!=mp.end();){
                if(it->second==1){
                    it=mp.erase(it);
                }
                else{
                    --mp[it->first];
                    it++;
                }
            }
        }
    }
    vector<int> res;
    for(auto i:mp){
        mp[i.first]=0;
    }
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            mp[nums[i]]++;
        }
    }
    for(auto i:mp){
        if(i.second > nums.size()/k){
            res.push_back(i.first);
        }
    }
    return res;
}
