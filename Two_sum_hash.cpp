#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map_table;
        vector<int> the_aim;
        for(int i=0;i<nums.capacity();i++){
            int key=nums[i];
            map_table[key]=i;
        }
        for(int i=0;i<nums.capacity();i++){
            unordered_map<int,int>::iterator iter1;
            int temp_target=target-nums[i];
            iter1=map_table.find(temp_target);
            if(iter1!=map_table.end() && \
                iter1->second!=i){
                the_aim.push_back(i);
                the_aim.push_back(iter1->second);
                break;
            }
        }
        return the_aim;
    }
};
int main(){
    Solution sl;
    vector<int> a(2,3);
    cout<<sl.twoSum(a,6)[1]<<endl;
    
}