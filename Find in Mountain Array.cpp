class Solution {
private:
    int bs(int s,int e,int tar,MountainArray &arr,bool flag) {
        while(s<=e){
            int mid=s+(e-s)/2;
            int midVal=arr.get(mid);

            if(midVal==tar) return mid;

            if(flag==(midVal>tar)) s=mid+1;
            else e=mid-1;
        }
        return -1;
    }
public:
    int findInMountainArray(int tar, MountainArray &arr) {
        int s=0,e=arr.length()-1,peak=0;

        while(s<e){
            int mid=s+(e-s)/2;

            if(arr.get(mid)<arr.get(mid+1)) s=peak=mid+1;
            else e=mid;
        }

        int ans=bs(0, peak, tar,arr,false);
        int res=bs(peak+1,arr.length()-1,tar,arr,true);

        return (ans!=-1) ? ans : res;
    }
};
