class Solution {
public:
    vector<int> grayCode(int n) {
    	std::vector<int> res;
    	res.clear();
    	for(int i = 0; i < (1 << n); i++) {
    		res.push_back(i ^ (i >> 1));
    	}
    	return res;
        
    }
};