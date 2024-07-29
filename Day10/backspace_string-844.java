import java.util.Stack;

class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> stack1 = new Stack<>();
        Stack<Character> stack2 = new Stack<>();

        // Process first string
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '#') {
                if (!stack1.isEmpty()) {
                    stack1.pop();
                }
            } else {
                stack1.push(s.charAt(i));
            }
        }

        // Process second string
        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == '#') {
                if (!stack2.isEmpty()) {
                    stack2.pop();
                }
            } else {
                stack2.push(t.charAt(i));
            }
        }

        // Compare the stacks
        while (!stack1.isEmpty() && !stack2.isEmpty()) {
            if (stack1.peek() != stack2.peek()) {
                return false;
            }

            stack1.pop();
            stack2.pop();
        }

        // Check if both stacks are empty
        return stack1.isEmpty() && stack2.isEmpty();
    }
}
