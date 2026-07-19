class Solution {
public:

int check(int i,string s){

    if(s[i]=='I'){
        return 1;
    }else if(s[i]=='V'){
        return 5;
    }else if(s[i]=='L'){
        return 50;
    }else if(s[i]=='C'){
        return 100;
    }else if(s[i]=='D'){
        return 500;
    }else if(s[i]=='M'){
        return 1000;
    }else if(s[i]=='X'){
        return 10;
    }
    return 0;
}
    int romanToInt(string s) {
// int n=s.size()-1;
     int sum=0;

     int i=0;
     while(i<s.size()){
    if(check(i,s)<check(i+1,s)){
        sum-=check(i,s);
    }else{
        sum+=check(i,s);
    }
    i++;
     }

// sum+=check(n-1,s);
return sum;
    }
};