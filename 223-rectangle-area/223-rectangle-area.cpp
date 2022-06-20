class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) 
    {
        int area1= (ax2-(ax1))*(ay2-(ay1));
        int area2= (bx2-(bx1))*(by2-(by1));
        int total=area1+area2;
        int minleftx=max(ax1,bx1);
        int minlefty=max(ay1,by1);
        int minrightx=min(ax2,bx2);
        int minrighty=min(ay2,by2);
        int common=(max(minrightx-(minleftx),0))*(max(minrighty-(minlefty),0));
        //cout<<area1<<" "<<area2<<endl;
        
        return total-common;
    }
};