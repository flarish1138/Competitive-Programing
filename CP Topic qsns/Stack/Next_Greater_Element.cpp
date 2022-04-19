#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define flarish_1138 cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pi 3.141592653589793238
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nline "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define sz(v) (int)(v.size())
#define all(v) v.begin(), v.end()
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()



vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    Code By flarish_1138 int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << nline;
    }

    return 0;
}

// 1.DP se soch
// 2.DP se soch
// 3.DP se soch
// graph, gcd, BS, seive
// if NOTA,then
// brute force hi optimal h



// Qsn2:--> 496. Next Greater Element I  

// Link: ==> https://leetcode.com/problems/next-greater-element-i/

// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

// Example 1:

// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]

 

//  class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
//     stack<int> st;
//         unordered_map<int,int> m;
//         for(int n : nums){
//             while(!st.empty() && st.top()<n){
//                 m[st.top()]=n;
//                 st.pop();
//             }
//             st.push(n);
//         }
//         // while(!st.empty()){
//         //     m[st.top()]=-1;
//         //     st.pop();
//         // }
        
//         vector<int> ans;
//         for(int n :findNums) ans.push_back(m.count(n)?m[n]:-1);
//         return ans;
     
//     }
// };


// Qsn:--> 503. Next Greater Element II

// LINK: --> https://leetcode.com/problems/next-greater-element-ii/

// Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

// The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.

 

// Example 1:

// Input: nums = [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2; 
// The number 2 can't find next greater number. 
// The second 1's next greater number needs to search circularly, which is also 2.
// Example 2:

// Input: nums = [1,2,3,4,3]
// Output: [2,3,4,-1,4]


// class Solution {
// public:
//     vector<int> nextGreaterElements(vector<int>& nums) {
//         stack<int> st;
//         int n = nums.size();
//         vector<int>ans(n,-1);
//         for(int i=0;i<n*2;i++){
//             int num = nums[i%n];
//             while(!st.empty() && nums[st.top()]<num){
//                 ans[st.top()] = num;
//                 st.pop();
//             }
//             if(i<n) st.push(i);
//         }
//         return ans;
//     }
// };