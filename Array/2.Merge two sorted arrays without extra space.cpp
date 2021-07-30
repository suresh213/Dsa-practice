//Time Complexity: o(mn)
void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            int key=arr2[0];
            int j=1;
            while(j<m && key>arr2[j]){
                arr2[j-1]=arr2[j];
                j++;
            }
            arr2[j-1]=key;
        }
    }
} 

//Time Complexity: The time complexity while traversing the arrays in while loop is O(n+m) in worst case 
//and sorting is O(nlog(n) + mlog(m)). So overall time complexity of the code becomes O((n+m)log(n+m)).

void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    int i=0,k=n-1,j=0;
    while(i<=k && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            swap(arr1[k--],arr2[j++]);
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
} 
