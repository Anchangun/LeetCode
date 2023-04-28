class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::vector<int>temp;
        std::map<int,int> check_map;
        for (int i = 0; i < nums.size(); i++) {
            auto it = check_map.find(nums[i]);
            if (it == check_map.end()) {
                check_map.insert({ nums[i], 1 });
            }
        }
        for (const auto& pair : check_map) {
            temp.push_back(pair.first);
        }
        nums = temp;
        return check_map.size();
    }
};