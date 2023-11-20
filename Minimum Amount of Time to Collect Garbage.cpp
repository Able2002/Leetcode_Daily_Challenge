class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int lastg=0, lastm=0, lastp=0, total=0;
        for(int i=1; i<travel.size(); i++) travel[i] += travel[i-1];
        for(int i=0; i<garbage.size(); i++) {
            total += garbage[i].length();
            for(int j=0; j<garbage[i].size(); j++) {
                if(garbage[i][j]=='P') lastp=i;
                if(garbage[i][j]=='M') lastm=i;
                if(garbage[i][j]=='G') lastg=i;
            }
        }
        total += (lastg ? travel[lastg-1] : 0) + (lastp ? travel[lastp-1] : 0) + (lastm ? travel[lastm-1] : 0);
        return total;
    }
};
