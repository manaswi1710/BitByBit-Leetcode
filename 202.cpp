class Solution {
    private:
    int func(int n){
        int m=0;
        while(n!=0){
             int digit=n%10;
                 m+=digit*digit;
                 n=n/10;
        }
        return m;
    }
public:
    bool isHappy(int n) {
        unordered_set<int>hash;
        while(n!=1 && !hash.count(n)){
            hash.insert(n);
            n=func(n);
        }
        if(n==1){
            return true;
        }
      return false;
    }
};