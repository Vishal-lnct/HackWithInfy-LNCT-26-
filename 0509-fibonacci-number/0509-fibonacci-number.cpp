class Solution {
public:

int x(int n){

    if(n<=1){
        return n;
    }
    return x(n-1)+x(n-2);
}
    int fib(int n) {
        return x(n);
    }
};