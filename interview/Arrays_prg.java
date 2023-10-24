package DSA.interview;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class Arrays_prg {
    // Java Program to copy all elements of one array into another array
    static int[] copyArray(int []arr){
        int arr1[] = new int[arr.length];
        for(int i=0;i<arr.length; i++){
            arr1[i]=arr[i];
        }
        return  arr1;
    }

    static void freqOfElem(int[] arr){
    //    Map<Integer, Integer> map = new HashMap<>();
    //     for (int i : arr) {
    //        if(map.containsKey(i)){
    //             map.put(i, map.get(i)+1);
    //        }else{
    //         map.put(i, 1);
    //        }
            
    //     }
    //     System.out.println(map);
        int count;

        for(int i=0; i<arr.length; i++){
            count=1;
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            if(arr[i] !=-1){
                System.out.println(arr[i]+"-"+count);
            }
        }
    }
    //  Java Program to left rotate the elements of an array
    static int[] arrLeftRotate(int arr[], int n){
        int temp, j;

        for(int i=0; i<n; i++){
            temp=arr[0];
            for(j=0; j<arr.length-1; j++){
                arr[j]=arr[j+1];
            }
            arr[j]=temp;
        }
        return arr;

    }
    public static void main(String[] args) {
        // System.out.println(Arrays.toString(copyArray(new int[]{1,2,3,4,5,6})));
        freqOfElem(new int[]{1,2,3,1,5,7,2,5,2,8,1,5,3,2});
        System.out.println(Arrays.toString(arrLeftRotate(new int[]{1,2,3,4,5,6}, 2)));
        
    }
}
