class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        // Use a two-pointer approach to find the two numbers that add up to the target
        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            // Move the left pointer to the right if the sum is less than the target
            else if (sum < target) {
                left++;
            } 
            // Move the right pointer to the left if the sum is greater than the target
            else {
                right--;
            }
        }

        return {};
    }
};