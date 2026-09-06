class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        //    mid calculate kiya
        //    hrs ko calculate kiya ceil value
        //    hrs ko add kiya
        //    ab add krne k baad
        //    compare krna h
        //    < = mid + 1;
        //    > = mid - 1; and isi me store and compute krna h ans = mid;
        int n = piles.size();
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans=-1;
        while (s<=e){
            int mid = (s + e)/2;
             long long hours = 0;


            for (int i = 0; i<n; i++){
                hours  = hours + ceil((double)piles[i] / mid);
            }
            if (hours > h){
                s = mid + 1;
            }
            else {
                ans = mid;
                e = mid -1;
            }
        }
        return ans;
    }
};