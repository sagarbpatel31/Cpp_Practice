class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        bool intersect=false;
        int a1=0,a2=0,p1=0,p2=0,s1=0,s2=0;
        int area=0;
        intersect = ((bx2>ax1) && (ay2>by1) && (ax2>bx1) && (by2>ay1));
        a1=(ax2-ax1)*(ay2-ay1);
        a2=(bx2-bx1)*(by2-by1);
        if(intersect==false)
        {
            area=a1+a2;   
            return area;
        }
        s1=min(ax2,bx2);
        s2=min(ay2,by2);
        p1=max(ax1,bx1);
        p2=max(ay1,by1);

        int intersectarea = (s1-p1)*(s2-p2);
        return (a1+a2-intersectarea);
    }
};
