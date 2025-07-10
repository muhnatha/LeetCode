#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// solution 1
// runtime = 35ms
// memory = 14.04 MB
// this solution has a complexity of O(n^2)

// pros : simple, fast for small array, small memory usage
// cons : slow if array is big, big O(n)
class Solution1 {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int i, j;
            int length = nums.size();
            // check the value on the right side of the curr value
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

// Solution 2 (one hash)
// runtime = 1ms
// memory = 14.88 MB

class Solution2 {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int i;
            int length = nums.size();
            unordered_map<int, int> hash;
            for(i=0; i<length; i++){
                int complement = target - nums[i];
                auto n = hash.find(complement);
                // chech the curr's complement on hash
                // if the complement in the hash return its index and i
                if(n != hash.end()){
                    return {n->second, i}; // to get the complement index
                }
                // if the complement not in the hash, add it to the hash
                else{
                    hash[nums[i]] = i;
                }
            }

            return {};
        }
    };

int main(){
    Solution2 sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for(int i=0; i< result.size(); i++){
        cout << result[i]<< " ";
    }
}