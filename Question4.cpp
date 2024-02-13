class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto j=nums.begin();
        j++;
        for(auto i=j;i!=nums.end();++i){
            if(*i==*(i-1))
                return true;
        }
        return false;
    }
};
