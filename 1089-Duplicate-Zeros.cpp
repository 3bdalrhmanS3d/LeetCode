
class Solution {
    public:

    void duplicateZeros(vector<int>& arr)
    {

        int size = arr.size();
        vector<int> vec ;
        for (int i = 0; i < size; i++) 
        {
            if (arr[i] == 0) 
            {
                vec.push_back(0) ;
                vec.push_back(0) ;
            }
            else
            {
                vec.push_back(arr[i]) ;
            }
        }
        for(int i = 0 ; i < size ; i ++)
        {
            arr[i] = vec[i] ;
        }
    }
};