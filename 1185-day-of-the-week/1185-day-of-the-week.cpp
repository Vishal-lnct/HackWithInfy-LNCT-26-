class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        vector<string>st={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

        vector<int>y={31,28,31,30,31,30,31,31,30,31,30,31};
int x=4;
        for(int i=1971;i<year;i++){
            if(i%400==0 ||(i%4==0 && i%100!=0)){
                x+=366;
            }else{
                x+=365;
            }

        }

        for(int i= 0;i<month-1;i++){
            day+=y[i];
        }
        if(month > 2 &&
   (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
{
    x++;
}
        x+=day;


return st[x%7];
    }
};