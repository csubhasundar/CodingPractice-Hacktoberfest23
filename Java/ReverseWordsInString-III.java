//https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");
        StringBuilder result = new StringBuilder();

        for (String word : words) {
            StringBuilder reversedWord = new StringBuilder();
            for (int i = word.length() - 1; i >= 0; i--) {
                reversedWord.append(word.charAt(i));
            }
            result.append(reversedWord).append(" ");
        }

        result.deleteCharAt(result.length() - 1);

        return result.toString();
    }
}
