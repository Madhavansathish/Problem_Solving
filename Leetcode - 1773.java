class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int idx;
        if(ruleKey.equals("type"))
           idx=0;
        else if(ruleKey.equals("color"))
           idx=1;
        else 
           idx=2;
        
        int count=0;
        for(List<String> i: items){
            if(i.get(idx).equals(ruleValue))
               count++;
        }
        return count;
    }
}
