class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int ans=0;
        while (l!=r){
            int s=(r-l)*min(height[l],height[r]);
            if (height[l]<height[r])
                l++;
            else r--;
            ans=max(ans,s);
        }
        if (height.size()==2)
            ans=min(height[0],height[1]);
        return ans;
    }
};
