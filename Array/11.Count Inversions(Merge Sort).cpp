void merge(long long arr[],long long start,long long mid,
                    long long end,long long temp[],long long &count){
    int i=start,j=mid+1,k=start;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=end){
        temp[k++]=arr[j++];
    }
    
    for(int i=start;i<=end;i++){
        arr[i]=temp[i];
    }
}

void mergeSort(long long arr[],long long start,long long end,
                long long temp[],long long &count){
    if(start<end){
        int mid = (start+end)/2;
        mergeSort(arr,start,mid,temp,count);
        mergeSort(arr,mid+1,end,temp,count);
        merge(arr,start,mid,end,temp,count);
    }
}

long long int inversionCount(long long arr[], long long N)
{
    long long temp[N],count=0;
    mergeSort(arr,0,N-1,temp,count);
    return count;
}
