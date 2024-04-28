////
//// Created by yaochongcc  on 2024/4/28.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////class Solution {
////public:
////    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
////        sort(nums1.begin(),nums1.end());
////        sort(nums2.begin(),nums2.end());
////        int minV=INT_MAX;
////        int res[3];
//////        int ans=0;
////        for(int i=0;i<2;i++){
////            res[i]=nums2[0]-nums1[i];
////            minV=min(minV,res[i]);
////        }
////        return minV;
////    }
////};
//
//
////判断子序列方法
//class Solution{
//public:
//    int minimumAddedInteger(vector<int> &nums1,vector<int> &nums2){
//        sort(nums1.begin(),nums1.end());
//        sort(nums2.begin(),nums2.end());
//        for(int i=2;i>=0;i--){
//            int diff=nums2[0]-nums1[i];
//            int j=0;
//            for(int v:nums1){
//                if(j<nums2.size()&&nums2[j]-v==diff){
//                    j++;
//                    if(j==nums2.size()) return diff;
//                }
//            }
//        }
//        return 0;
//    }
//};
//
//
//int main(){
//    Solution s;
//    vector<int> nums1 = {4,20,16,12,8};
//    vector<int> nums2 = {14,18,10};
//    cout<<s.minimumAddedInteger(nums1,nums2)<<endl;
//    return 0;
//}