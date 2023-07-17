//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        bool haveZero = false;
//        bool haveMultipleZero = false;
//        int product = 1;
//        for (int i : nums) {
//            if (i == 0 && !haveZero) haveZero = true;
//            else if (i == 0) haveMultipleZero = true;
//            else product *= i;
//        }
//        for (int i = 0; i < nums.size(); i++) {
//            nums[i] = haveMultipleZero ? 0 : haveZero ? (nums[i] == 0 ? product : 0) : product / nums[i];
//        }
//        return nums;
//    }
//};