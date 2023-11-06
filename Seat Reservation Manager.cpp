class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    int c = 0;
    SeatManager(int n) {    
        
    }
    
    int reserve() {
        if (pq.size() && pq.top() <= c) {
            int t = pq.top();
            pq.pop();
            return t;
        }
        c++;
        return c;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};
