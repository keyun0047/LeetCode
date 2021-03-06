class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        set<int> s;
        for (int num : nums) {
        	if (s.find(num) != s.end()) {
        		s.erase(num);
        	}
        	else {
        		s.insert(num);
        	}
        }
        for (auto it = s.begin(); it != s.end(); ++it) {
        	res.push_back(*it);
        }
        return res;
    }
};