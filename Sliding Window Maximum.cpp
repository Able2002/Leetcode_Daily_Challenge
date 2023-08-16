class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> dq;
        int i=0;
        vector<int> ans;
        for(int j=0;j<n;j++){
            while(dq.empty()==false && dq.back()<nums[j]){
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            if(j-i+1==k){
                ans.push_back(dq.front());
                if(nums[i]==dq.front()){
                    dq.pop_front();
                }
                i++;
            }
        }
        return ans;
    }
};
