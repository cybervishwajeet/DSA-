class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        // logic 1 with sorting approch
       // sort(nums.begin(), nums.end());

        //for(int i = 0; i < n; i++){
          //  if(nums[i] == nums[i + 1]){
            //    return true;
           // }
        //}
        //return false;


   // logic 2 with hashset approch
        unordered_set<int> sh;
        for(int i = 0 ; i < n ; ++i){
             if(sh.find(nums[i]) != sh.end()) {
                return true;
             }
             sh.insert(nums[i]);
        }
        return false;
    }
};