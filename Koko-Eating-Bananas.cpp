class Solution {
public:

   bool banana(vector<int>& piles, int h,int mid){
   long long int  total =0;
    for(int i = 0 ; i< piles.size(); i++){
        total+=ceil((double)piles[i]/(double)mid);


    }
    if(total<=h){
    return 1;
    }else{
        return 0;
    }
       
   }
    int minEatingSpeed(vector<int>& piles, int h) {
       long long  int low = 1;
       long long  int high=*max_element(piles.begin(),piles.end());
        int ans =0;
        while(low<=high){
            int mid=(low+high)/2;
          
          long long   int key =banana(piles,h,mid);
         
          
            if(banana(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
      return ans;
    }
};