
#include<bits/stdc++.h>
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(arr.size()==1){
            return arr[0];
        }
        if(arr[0]!=arr[1]){
            return arr[0];
        }
        if(arr[n-1]!=arr[n-2]){
            return arr[n-1];
        }

        else{
            int low = 1;
            int high = arr.size()-2;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]
                ){
                    return arr[mid];
                }
                if((mid%2==1 && arr[mid-1]==arr[mid])
                || (mid%2 ==0 && arr[mid+1]==arr[mid])){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }


            }
        }
        return -1;
    }
};