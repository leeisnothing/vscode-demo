/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num = nums.size();//返回容器中数据个数
        vector<int> rnum;
        vector<int> frnum;
        for (int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                if (nums.at(i)+nums.at(j)==target)
                {
                    /* code */
                    rnum.push_back(i);
                    rnum.push_back(j);
                    break;
                }
                
            }
        }
        for (int i=0;i<rnum.size();i=i+2){
            if(rnum.at(i)!=rnum.at(i+1)){
                frnum.push_back(rnum.at(i));
                frnum.push_back(rnum.at(i+1));
                break;
            }
        }
        return frnum;
    }
};
// @lc code=end

