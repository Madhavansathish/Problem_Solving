class Solution {
    public int longestPalindrome(String s) {
        int freq[]=new int[128];
        for(char c : s.toCharArray()){
            freq[c]++;
        }
        int len=0;
        int odd=0;
        for(int i : freq){
            if(i%2==0){
                len+=i;
            }
            else{
                len+=i-1;
                odd=1;
            }
        }
        return len+odd;
    }
}
