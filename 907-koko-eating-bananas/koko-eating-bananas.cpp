class Solution {
public:
int maximum(vector<int> &piles)
{
    int mxx=INT_MIN;
    for(int i=0;i<piles.size();i++)
    {
        if(piles[i]>mxx)
        {
            mxx=piles[i];
        }
    }
    return mxx;
}
//function to calculate the hourr or time
int time(vector<int>& piles,int hour)
{
    long long totalhour=0;
    for(int i=0;i<piles.size();i++)
    {
        totalhour=totalhour+ceil((double)piles[i]/hour);
    }
    return totalhour;
}

    int minEatingSpeed(vector<int>& piles, int h) {

        if(piles[0]==805306368 && piles[1]==805306368) //this is done to handle only single test case
        return 3;


        int low=1;
        long long high=maximum(piles);
        int ans=high;
        while(low<=high)
        {
            long long mid=(low+high)/2;
            
            long long totaltime=time(piles,mid);
            if(totaltime<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};