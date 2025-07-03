#include <iostream>
#include <vector>

using namespace std;

// solution 1
//runtime = 35ms
//memory = 14.04 Mb
// this solution has a complexity of O(n^2)
/*

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int i, j;
            int length = nums.size();
            for(i=0; i<length-1; i++){
                for(j=i+1; j<length; j++){
                    if (nums[i]+nums[j] == target){
                        return {i, j};
                    } 
                }
            }
            return {};
        }
    };
*/

int main(){
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for(int i=0; i< result.size(); i++){
        cout << result[i]<< " ";
    }
}