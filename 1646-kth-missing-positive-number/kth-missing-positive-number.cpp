class Solution {
public:
bool ls(vector<int> &arr , int a)
{

    for(int i=0;i<arr.size();i++)
    {
        if( arr[i]==a)
        return true;
    }
    return false;
}
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> v;
       for(int j=1;v.size()<k;j++)
       {
        if(ls(arr,j)==true)
        continue;
        else
        v.push_back(j);
       }

       return v[k-1];
    }
};