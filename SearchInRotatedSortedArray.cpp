#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if(mid < nums.size() - 1 && nums[mid] > nums[mid + 1]) {
                low = mid + 1;
                break;
            } else if(mid > 0 && nums[mid] < nums[mid - 1]) {
                low = mid - 1;
                break;
            }
            else if(nums[mid] > nums[0]) low = mid + 1;
            else high = mid - 1;
        }
        int offset = low;
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if(nums[(mid + offset) % nums.size()] == target) {
                return (mid + offset) % nums.size();
            } else if(nums[(mid + offset) % nums.size()] < target) {
                low = mid + 1;
            } else high = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums{8,9,2,3,4};
    cout<<s.search(nums, 9);
}