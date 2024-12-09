class Solution {
public:
    string convertToBase7(int num) {
        int flag=0;
        string ans="";
        if (num==0)
            return "0";
        if(num<0)
        {
            flag=-1;
            num=num*(-1);
        }
        while (num!=0)
        {
            int temp=num%7;
            num=num/7;
            ans=to_string(temp)+ans;
        }
        if(flag==-1)
        {
            return '-'+ans;
        }
        return ans;
        
    }
};
