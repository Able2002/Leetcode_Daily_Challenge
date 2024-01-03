class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int prevCnt =0;
        int n =bank.size(),m=bank[0].size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(auto s: bank[i]){
                if(s=='1'){
                    cnt++;
                }
            }
            if(cnt>0){
                // q.push(cnt);
                ans += prevCnt*cnt;
                prevCnt = cnt;
            }else{
                continue;
            }
        }
       return ans;
    }
};
