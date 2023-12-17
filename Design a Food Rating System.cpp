class FoodRatings {
public:

    struct comparator{
        bool operator()(const pair<string,int>& F1 , const pair<string,int>& F2)const{
            return F1.second > F2.second || (F1.second == F2.second && F1 < F2);
        }
    };

    unordered_map<string,set<pair<string,int>,comparator>> CF;
    unordered_map<string, string> FC;
    unordered_map<string,int> FR;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = 0; i<foods.size(); i++){
            CF[cuisines[i]].insert({foods[i],ratings[i]});
            FC[foods[i]] = cuisines[i];
            FR[foods[i]] = ratings[i];
        }
    }

    void changeRating(string food, int newRating) {
        CF[FC[food]].erase({food,FR[food]});
        CF[FC[food]].insert({food,newRating});
        FR[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return CF[cuisine].begin()->first;
    }
};
