class Solution {
public:
    static bool cmp(vector<int>&v1, vector<int>&v2)
    {
        return v1[1]<v2[1];
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();

        sort(events.begin(),events.end(),cmp);
        int ans=events[0][2];
        for(int i=1;i<n;i++)
        {
            int s=events[i][0];
            int e=events[i][1];
            int cst=events[i][2];
            events[i][2]=max(events[i][2],events[i-1][2]);
            int l=0;
            int r=i-1;
            int index=-1;
            while (l<=r)
            {
                int mid=(l+r)/2;
                if(events[mid][1]<s)
                {
                    index=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            if(index!=-1)
            {
                cst+=events[index][2];
            }
            ans=max(ans,cst);
        }

        return ans;
    }
};
