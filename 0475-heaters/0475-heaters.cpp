class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());

        int  i=0;
        int r=0;
         for (int p : houses) {
            while (i < heaters.size() - 1 &&
                   abs(heaters[i+1] - p) <= abs(heaters[i] - p)) {
                i++;
            }
             r=max(r,abs(heaters[i]-p));

                 }
        return r;
        
    }
};