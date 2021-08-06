#include<bits/stdc++.h>
using namespace std;

//Time complexity : o(n2)
void reverseWord(string &str,int start,int end){
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
string reverseWords(string str) {
    int n=str.length(),start=0,end;
    for(int i=0;i<n;i++){
        if(str[i]==' ' || i==n-1){
            if(i==n-1) end=i;
            else end=i-1;
            
            reverseWord(str,start,end);
            start=i+1;
        }
    }
    return str;
}

int main(){
	string str="    the sky  is  b   blue  ";
//	getline(cin,str);
	cout<<reverseWords(str);
  return 0;
}
