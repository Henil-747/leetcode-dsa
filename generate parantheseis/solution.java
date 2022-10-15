class Solution {
    List<String> sol = new ArrayList<String>();
    public void generate(String s, int open, int close){
        if(open == 0 && close == 0){
            sol.add(s);
        }
        if(open > 0){
            String temp = s + "(";
            generate(temp, open-1, close);
        }
        if(close > 0){
            if(open < close){
                String temp = s +  ")";
                generate(temp, open, close -1);
            }
        }
        
    }
    
    public List<String> generateParenthesis(int n) {
        String s ="";
        generate(s, n,n);
        
        return sol;
    }
    
    
}