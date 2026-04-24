class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {

       unordered_map<int, pair<int,int>> x1; 
unordered_map<int, pair<int,int>> x2; 

for(int i = 0; i < buildings.size(); i++){
    int x = buildings[i][0];
    int y = buildings[i][1];

 
    if(x1.find(x) == x1.end()){
        x1[x] = {y, y};
    } else {
        x1[x].first = min(x1[x].first, y);
        x1[x].second = max(x1[x].second, y);
    }

   
    if(x2.find(y) == x2.end()){
        x2[y] = {x, x};
    } else {
        x2[y].first = min(x2[y].first, x);
        x2[y].second = max(x2[y].second, x);
    }
}

    int count=0;
    for(int i=0;i<buildings.size();i++){

        int x = buildings[i][0];
    int y = buildings[i][1];

     if((x > x2[y].first && x < x2[y].second) &&
               (y > x1[x].first && y < x1[x].second)){
        count++;
    }
    }
    return count;    
    }
};