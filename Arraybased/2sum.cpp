class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> nmap;

        for(int i=0;i<n;i++)
        {
            int rem= target-nums[i];
            if(nmap.count(rem))
            {
                return {nmap[rem],i};
            }
            nmap[nums[i]]=i;
        }
        return {};
    }
};