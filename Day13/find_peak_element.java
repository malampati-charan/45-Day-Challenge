import java.util.*;

class find_peak_element {
    public static void main(String[] args) {
        int[] arr = new int[3];

        // To find the peak element and min cost to make all the elements zero, find the median and compute the diff
        int median; 

        if (arr.length % 2 == 1) {
            median = arr[arr.length / 2];    
        } else {
            median = ( arr[arr.length / 2 ] + arr[(arr.length - 2) / 2] ) / 2;
        }

        int minDiff = 0;
        for (int i = 0; i < arr.length; i++) {
            minDiff += Math.abs(arr[i] - median);
        }

        System.out.println(minDiff);
    }
}