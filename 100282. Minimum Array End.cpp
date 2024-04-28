//
// Created by yaochongcc on 2024/4/28.
//位运算：
//给你两个整数 n 和 x 。你需要构造一个长度为 n 的 正整数 数组 nums ，对于所有 0 <= i < n - 1 ，满足 nums[i + 1] 大于 nums[i] ，
// 并且数组 nums 中所有元素的按位 AND 运算结果为 x 。
//
//返回 nums[n - 1] 可能的 最小 值。

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    long long minEnd(int n, int x) {
        n--;
       int i,j;
       i=j=0;
       while(n>>j){
           if((x>>i&1)==0){
               int bit=n>>j&1;
               x|=bit <<i;
               j++;
           }
           i++;
       }
       return x;
    }
};
int main() {
    Solution s;
    int n,x;
    cin >> n >> x;
    cout << s.minEnd(n,x) << endl;
    return 0;
}