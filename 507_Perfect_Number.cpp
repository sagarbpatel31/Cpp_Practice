class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> mm;
        int i=num,answer=0;
        num=num/2;

        if (i==1)
            return false;
        while(num>1)
        {   

            if(i%num==0)
            {
                mm.push_back(num);
                mm.push_back(i/num);
                num=num/2;
            }
            num--;
        }
        for(int j=0;j<mm.size();j++)
        {
            answer+=mm[j];
        }
        if((answer+1)==i)
            return true;
        else
            return false;
    }
};