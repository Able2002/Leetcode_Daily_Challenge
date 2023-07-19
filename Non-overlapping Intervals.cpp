class Solution {
public:
    struct A {
        int s, e;
        bool operator <(const A&o)const{
            return e == o.e ? s < o.s : e < o.e;
        }
    };
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size(), cnt = 0, last = -1e9;
        vector<A> v;
        for(auto x : intervals) {
            v.push_back({x[0], x[1]});
        }
        sort(v.begin(), v.end());
        for(auto [s, e] : v) {
            if(s >= last) cnt++, last = e;
        }
        return n - cnt;
    }
};
