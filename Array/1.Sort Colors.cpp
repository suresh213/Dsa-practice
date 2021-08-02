//Time complexity: o(nlogn)
using merge sort

//Time complexity: o(n)
count 0,1,2 and make while to to rearrange;

//Time complexity: o(n)
//Single traversal


void sortColors(vector<int>& nums) {
    int start=0,mid=0,end=nums.size()-1;
   
    while(mid<=end){
        if(nums[mid]==0){
            swap(nums[start++],nums[mid++]);
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[end--]);
        }
    }
}
