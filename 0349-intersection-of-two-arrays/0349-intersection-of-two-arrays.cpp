class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        unordered_set<int> ans;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            set.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            if(set.count(nums2[i])){
                if(ans.count(nums2[i])){
                    continue;
                }else{
                    ans.insert(nums2[i]);
                    v.push_back(nums2[i]);
                }
                
            }
        }
        return v;
    }
};