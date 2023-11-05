class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int first=0; int second=1; int count=0;
        while(first < arr.size() && second< arr.size()){
            if(count==k) return arr[first];
            
            if(arr[first] > arr[second]){
                count++;
                second++;
            }
            else{
                count=1;
                while(first!=second){
                    first++;
                }
                first++;
                int temp=second;
                second= first;
                first= temp;
            }
        }
        return arr[first];
    }
};
