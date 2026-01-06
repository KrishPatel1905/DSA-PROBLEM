class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int sum =0;
        int fl = ((nums.size())*(nums.size()+1))/2;
        for(int i=0;i<nums.size();i++)
        {
            sum = nums[i]+sum;
        }
        int total =  fl-sum;
        return total;
        
    }
};
