// https://leetcode.com/problems/valid-perfect-square/


// class Solution {
// public:
//     bool isPerfectSquare(int n) {
//         int start=1;
//         int end=n;
//          while(start<=end){
//             int mid=start+(end-start)/2;
//             long long square=1LL*mid*mid;
//             if(square==n){
//                 return true;
//             }else if(square>n){
//                 end=mid-1;
//             }else{
//                 start=mid+1;
//             }
//          }
//          return false;
//     }
// };