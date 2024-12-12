class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1, high = *max_element(nums.begin(),nums.end());
        while (low<high)
        {
            int mid=low +(high-low)/2;
            int op=0;
            for (int n:nums)
            {
                if ((op+=(n-1)/mid)>maxOperations)
                    break;
            }
            op<=maxOperations ? high=mid : low=mid+1;
        }
        return high;
    }
};
