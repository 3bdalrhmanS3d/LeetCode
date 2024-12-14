class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        vector<int> arrCopy = arr, Rank(arr.size(), 0) ;

        sort(arrCopy.begin(), arrCopy.end());

        unordered_map<int , int > valueToRank ;

        int cur = 1 ;

        for(int  i= 0 ; i < arrCopy.size() ; i++)
        {
            if(valueToRank.find(arrCopy[i]) == valueToRank.end())
            {
                valueToRank[arrCopy[i]] = cur++ ; 
            }
        }

        for (int i = 0; i < arr.size(); ++i) {
            Rank[i] = valueToRank[arr[i]];
        }

        return Rank;
    }
};