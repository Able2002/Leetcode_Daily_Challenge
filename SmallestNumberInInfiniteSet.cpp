

class SmallestInfiniteSet
{
private:
    unordered_set<int> isPresent;
    priority_queue<int, vector<int>, greater<int>> addedInts;
    int currInt;

public:
    SmallestInfiniteSet()
    {
        currInt = 1;
    }

    int popSmallest()
    {
        int ans;

        if (!addedInts.empty())
        {
            ans = addedInts.top();
            isPresent.erase(ans);
            addedInts.pop();
        }
        else
        {
            ans = currInt;
            currInt += 1;
        }

        return ans;
    }

    void addBack(int num)
    {
        if (currInt <= num || isPresent.find(num) != isPresent.end())
            return;

        addedInts.push(num);
        isPresent.insert(num);
    }
};

// Time Complexity: O((m+n)*logn)
// Space Complexity: O(n)
