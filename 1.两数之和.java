import java.util.Map;

/*
 * @lc app=leetcode.cn id=1 lang=java
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map <Integer,Integer> map = new HashMap<>();
        for (int i = 0;i<nums.length;i++){
            int temp = target -nums[i];
            if (map.containsKey(temp)){
                return new int []{map.get(temp),i};
            }
            map.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}
// @lc code=end

