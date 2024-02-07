class Solution {
public:

//comaprision function to pass to sort()
    static bool cmp(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
 
        if(s.length()==0 or s.length()==1 or s.length()==2) return s;
        
  string ans="";
  unordered_map<char,int>m;
  
  vector<pair<char,int>>vm;
        
        for(char c: s)
        {
            // if(c != ' ')
                m[c]++;
        }
        
        for(auto it : m)
            vm.push_back(make_pair(it.first,it.second));
        
        sort(vm.begin(),vm.end(), cmp);
        
        for(auto& i : vm)
        {
            while(i.second > 0)
            {
                ans+= i.first;
                --i.second;
            }
        }
        
        return ans;
    }
};
