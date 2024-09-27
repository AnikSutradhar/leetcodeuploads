class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> re_nums;

        stack<int>po;
        stack<int> ne;
        int l =nums.size()-1;
        while(l>=0)
        {
            if(nums[l]>0)
            {
                po.push(nums[l]);
            }
            else
              ne.push(nums[l]);
              l--;
        }

        while(!po.empty() && !ne.empty())
        {
            int p = po.top();
            int n = ne.top();
            re_nums.push_back(p);
             re_nums.push_back(n);
             po.pop();
             ne.pop();
        }
        return re_nums;
    }
};