//Time complexity: o(n) 
brute force -> check square of elements from 1 upto x

//Time complexity: o(logn + p) =>log(n) 

#include<bits/stdc++.h>
using namespace std;

float mySqrt(int x,int p) {
    if(x==0 || x==1) return x;
    long long low=1,high=x;
	float ans=1;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(mid*mid == x){
        	ans=mid;
        	break;
        }
        if(mid*mid < x){
            ans=mid;
            low=mid+1;
        }
        else high = mid-1;
    }
    float increament=0.1;
    for(int i=0;i<p;i++){
    	while(ans*ans <= x){
    		ans+=increament;
		}
		//ans*ans > x , so decreament
		ans-=increament;
		increament/=10;
	}
    
    return ans;
}

int main(){
	int precision=4;
	cout<<mySqrt(48,precision);
    return 0;
}



