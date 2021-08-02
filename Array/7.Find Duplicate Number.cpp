//Time complexity:o(nlogn)

using sorting and check nearby elements

//Time complexity:o(n)
//space complexity : o(n)

using map count duplicates

//Time complexity:o(n)
modifying array with values according to indexes


//Time complexity:o(n)
Floyd's Tortoise and Hare (Cycle Detection)

int findDuplicate(vector<int>& nums) {
    int slow=nums[0],fast=nums[0];
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}
