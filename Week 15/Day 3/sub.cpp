class Solution {
    public:
    void getsub(vector<int>& nums,vector<vector<int>>&res,vector<int>& sub,int id){
        int n=nums.size();
        res.push_back(sub);
        for(int i=id;i<n;i++){
            if(i!=id && nums[i]==nums[i-1]){
                continue;
            }
            sub.push_back(nums[i]);
            getsub(nums,res,sub,i+1);
            sub.pop_back();
        }
        return;
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<int>sub;
            sort(nums.begin(),nums.end());
            vector<vector<int>>res;
            getsub(nums,res,sub,0);
            return res;
        }
    };