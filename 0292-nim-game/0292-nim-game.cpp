class Solution {
public:
    bool canWinNim(int n) {
        bool youWin=true;
        if (n%4==0) {
            youWin=false;
        }
        return youWin;
    }
};