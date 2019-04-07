#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> the_aim;
        for (int i=0;i<nums.capacity();i++){
            int temp=target-nums.at(i);
                for(int j=i+1;j<nums.capacity();j++){
                    if(temp==nums[j]){
                        the_aim.push_back(i);
                        the_aim.push_back(j);
                        // the_aim[0]=i;
                        // the_aim[1]=j;
                        break;
                        // return the_aim;
                    }

                }
        // target-nums<iter1>
            if(the_aim.capacity()==2) break;
        }
        return the_aim;
    }
};