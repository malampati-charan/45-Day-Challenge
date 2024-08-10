class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] answer = new int[n];
        // Stack to store indices of the days
        java.util.Stack<Integer> stack = new java.util.Stack<>();

        for (int i = n - 1; i >= 0; i--) {
            // Pop elements from the stack until finding a warmer temperature
            while (!stack.isEmpty() && temperatures[stack.peek()] <= temperatures[i]) {
                stack.pop();
            }
            
            // If stack is not empty, calculate the days to wait for a warmer temperature
            if (!stack.isEmpty()) {
                answer[i] = stack.peek() - i;
            }
            
            // Push the current day's index onto the stack
            stack.push(i);
        }
        
        return answer;
    }
}
