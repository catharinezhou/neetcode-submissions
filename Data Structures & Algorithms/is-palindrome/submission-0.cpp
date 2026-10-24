class Solution {
public:
    bool isPalindrome(string s) {
        int index1 = 0;
        int index2 = s.length() - 1;
        while(index1 < index2){
            while(!isalnum(s[index1]) && index1 < index2)
                index1++;
            while(!isalnum(s[index2]) && index1 < index2)
                index2--;
            if(index1 >= index2)
                break;
            if(tolower(s[index1]) != tolower(s[index2]))
                return false;
            index1++;
            index2--;
        }
        return true;
    }
};
