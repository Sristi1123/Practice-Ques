#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n=4;
    int one=1;
    int zero=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            int sum=i+j;
            if(sum%2==0){
                cout<<one;
            }else{
                cout<<zero;;
            }
        }
        cout<<endl;
    }
    return 0;
}