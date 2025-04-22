class Solution {
public:
    char nextGreatestLetter(vector<char>& let, char target) {
        int n = let.size();
      
            for(int i =0;i<n ; i++){
                  if(target <let[i]){
                    return let[i];

                  }
            }

        
        return let[0];
        
    }
};