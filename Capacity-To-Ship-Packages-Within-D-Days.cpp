class Solution {
public:
int  ship(vector<int>& weights, int days,int mid){
        int last=0;
        int dayss=1;
       for(int i = 0 ; i<weights.size(); i++){
        if(weights[i]+last>mid){
           dayss++;
         last=weights[i];
        }
        else{
        last+=weights[i];
        }

        


       }
    

         return dayss;
       }
       
       
           
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
      int ans =-1;
        while(low<=high){
            int mid=(low+high)/2;

         int   key = ship(weights,days,mid);
            
            
            
           if(key<=days) {
               ans=mid;
              high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
       return ans;


    }
};