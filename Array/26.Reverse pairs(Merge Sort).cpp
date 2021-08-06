//Time Complexity : O(nlogn) + o(n)merging + o(n)counting

Check count inversions also

int merge(vector<int> &nums,vector<int> &temp,
    int low,int mid,int high){
    int j=mid+1,count=0;
    for(int i=low;i<=mid;i++){
        while(j<=high && nums[i]> (2LL * nums[j])){
            j++;
        }
        count+=(j-(mid+1));
    }
    int i=low,k=low;
    j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<=nums[j]){
            temp[k++]=nums[i++];
        }
        else{
            temp[k++]=nums[j++];
        }
    }
    while(i<=mid){
        temp[k++]=nums[i++];
    }
    while(j<=high){
        temp[k++]=nums[j++];
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i];
    }
    return count;
}
int mergeSort(vector<int> &nums,vector<int> &temp,
               int low,int high){
    
    if(low>=high) return 0;
    
    int mid=(low+high)/2;
    int count=0;
    count+=mergeSort(nums,temp,low,mid);
    count+=mergeSort(nums,temp,mid+1,high);
    count+=merge(nums,temp,low,mid,high);
    return count;
}
int reversePairs(vector<int>& nums) {
    int n=nums.size();
    vector<int> temp(n);
    return mergeSort(nums,temp,0,n-1);
}
