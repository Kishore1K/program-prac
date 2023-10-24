package DSA.interview;

import java.util.Arrays;

public class Arrays_prg {
    // Java Program to copy all elements of one array into another array
    static int[] copyArray(int []arr){
        int arr1[] = new int[arr.length];
        for(int i=0;i<arr.length; i++){
            arr1[i]=arr[i];
        }
        return  arr1;
    }
    public static void main(String[] args) {
        System.out.println(Arrays.toString(copyArray(new int[]{1,2,3,4,5,6})));
        
    }
}
