class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;

        // Calculate the sum of the first `k` cards.
        int currentSum = 0;
        for (int i = 0; i < k; i++) {
            currentSum += cardPoints[i];
        }

        int maxPoints = currentSum;

        // Slide the window from the beginning towards the end.
        for (int i = 0; i < k; i++) {
            currentSum -= cardPoints[k - 1 - i]; // Remove from the left end.
            currentSum += cardPoints[n - 1 - i]; // Add from the right end.
            maxPoints = Math.max(maxPoints, currentSum);
        }

        return maxPoints;
    }
}
