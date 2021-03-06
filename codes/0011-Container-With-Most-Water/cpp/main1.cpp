class Solution {
public:
    int maxArea(vector<int>& height) {
    	int res = 0;
    	for (int i = 0; i < height.size() - 1; i++) {
    		for (int j = i + 1; j < height.size(); j++) {
    			int area = (j - i) * min(height[i], height[j]);
    			res = max(res, area);
    		}
    	}
        return res;
    }
};