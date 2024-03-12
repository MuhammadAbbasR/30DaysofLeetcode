class Solution {
public:
    bool isPalindrome(int x) {
        
        string b=to_string(x);
        int n=b.length()-1;
        string reverse ;
        for (int i = n; i >= 0; i--) {
                reverse+=b[i];
        }
            if(reverse==b){
               
                return true;
            }
            else {
                 
                return false;
            }
    }
};