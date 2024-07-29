class Solution {
    public String reverseWords(String s) {
        s = s.trim();
        String[] words = s.split("\\s+");

        reverseArray(words);

        StringBuilder returnable = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            returnable.append(words[i]);
            if (i < words.length - 1) {
                returnable.append(" ");
            }
        }

        return returnable.toString();
    }

    public void reverseArray(String[] array) {
        int left = 0;
        int right = array.length - 1;

        while (left < right) {
            // Swap elements
            String temp = array[left];
            array[left] = array[right];
            array[right] = temp;

            // Move towards the middle
            left++;
            right--;
        }
    }
}