class Solution {
  public int reverse(int x) {
      int rev=0;
      while (x!=0){
          rev=(rev*10)+x%10;
          x=x/10;
      }
      return rev;
  }

    public static void main(String[] args) {
      int cnt;
      Solution obj = new Solution();
      cnt= obj.reverse(0);
      System.out.println("ans : "+ cnt);
    }
}
