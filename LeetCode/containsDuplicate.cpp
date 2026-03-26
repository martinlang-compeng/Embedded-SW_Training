class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Goal: 
        //      Return true if a element appears more than once within the array
        //      Return false if all elements appear once

        // Best way is to store it as a hash map where:
        //      Key = element
        //      value = number of appearances

        std::unordered_map<int, int> count_map;

        // We iterate through the vector once
        for(unsigned i = 0; i < nums.size(); i++) {
            // If we don't find the element within our map, then add it
            if(count_map.find(nums[i]) == count_map.end()) {
                count_map[nums[i]] = 1;
            } 
            // If element does exist, we can return true, since it appears more than once
            else {
                return true;
            }
        }

        return false;
    }
};
