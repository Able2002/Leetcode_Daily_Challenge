class Solution {
public:
bool is_possible(vector<int>& dist,int speed, double hour){
    double cur_time=0;
    for(int i=0;i<dist.size();i++){
        cur_time=cur_time+(double)dist[i]/speed;
        if(cur_time>hour)return false;
        cur_time=ceil(cur_time);
    }
    return true;
}
int minSpeedOnTime(vector<int>& dist, double hour) {
        if(ceil(hour)<dist.size())return -1;
        int start=1,end=1e8,mid=0;
        while(start<=end){
            mid=(start+end)>>1;
            if(is_possible(dist,mid,hour)){
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return start;
    }
};
