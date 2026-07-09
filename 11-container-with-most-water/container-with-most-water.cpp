class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0;
        int n=height.size();
        int end=n-1;
        int ans=0;

        while(st<end){
            int ht=min(height[st],height[end]);
            int len=end-st;
            int area=ht*len;
            
            ans=max(area,ans);
            if(height[st]<height[end]){
                st++;
            }
            else{
                end--;
            }
        }
        return ans;
        
    }
};