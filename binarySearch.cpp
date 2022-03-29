#include<iostream>
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
       int r=nums.size()-1;
        int mid;
        while(l<=r){
      
      mid=l+(r-l)/2;
      
      if(nums[mid]==target)
        return mid;
        
      if(nums[mid]<target)
        l=mid+1;
     else 
        r=mid-1;
           
  }
        
 return l;
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start=0 , end= nums.size()-1 ,mid;
        
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]== target){
               
                return mid;
            } else if(target>nums[mid])
            {start=mid+1;}
                else end =mid -1;
        }
        return -1;
    }
};

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int  mid ,low =1 , high=n,res;
        while(low<=high){
            if(isBadVersion(low)){
                return low;
            }
            
            mid= low + (high-low)/2;
            if(isBadVersion(mid)){
                high=mid-1;
                res=mid;
                continue;
            }
            low= mid+1;
        }
        return res;
    }
};