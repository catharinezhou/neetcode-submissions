class Solution {
public:
    int search(vector<int>& nums, int target) {
        int middle;
        int min = 0;
        int max = nums.size() - 1;
        while(max >= min){
            middle = (max + min)/2;
            if(nums.at(middle) == target)
                return middle;
            else if(nums.at(middle) > target)
                max = middle - 1;
            else
                min = middle + 1;
        }
        return -1;
    }
};
