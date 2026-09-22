class Solution {
public:
    bool rotateString(string s, string goal) {


        if(goal.size()!=s.size()){
            return false;
        }

      string res=s+s;

     if (res.find(goal) != string::npos) {
    return true;
}
      return false;
    }
};