class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxi=0;
        int l;
        while(i<j){
            l=(j-i)*min(height[i], height[j]);
            maxi=max(maxi,l);
            if(height[i]<=height[j]){
                i++;
            } else{
                j--;
            }
        }
        return maxi;
    }
};
