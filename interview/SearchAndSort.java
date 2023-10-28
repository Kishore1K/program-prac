package DSA.interview;

import java.lang.reflect.Array;
import java.util.Arrays;

public class SearchAndSort {
//  Linear Search in Java
    static void linearSearch(int arr[], int key){
        for(int i=0; i<arr.length; i++){
            if(arr[i]==key){
                System.out.println("Element "+ key+ "is Found in = "+(i+1));
                break;
            }else{
                        System.out.println(key+ " Not Found");

            }
        }
    }
    // Binary Search in Java
    static void binarySerach(int arr[], int key){
    int l=0, r=arr.length-1, mid=0;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==key){
            System.out.println(key + " Element Found in "+mid);
            break;
        }else if(arr[mid]<key){
            l=mid+1;

        }else{
            r=mid-1;
        }
    }
    }

    public static void main(String[] args) {
        // linearSearch(new int[]{40,23,74,33,11,977,34}, 74);
        binarySerach(new int[]{10,12,14,18,25,50,73}, 25);

        
    }
}
