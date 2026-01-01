

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    cout<<"Targeta uyan sayıların indexleri "<<i<<" ve "<<j<<endl;
                    return {i,j};
                }
            }
            
        }
        cout<<"target a uygun indexbulunamadı.. ";
        return {};
    }
};