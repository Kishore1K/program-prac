package DSA.interview;

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
    //  Bubble Sort in Java
    static void bubbleSort(int arr[]){
        for(int i=0; i<arr.length-1; i++){
            for(int j=0; j<(arr.length-i-1); j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        System.out.println(Arrays.toString(arr));
    }
    // Selection Sort in Java
    static void selectionSort(int arr[]){
        for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        System.out.println(Arrays.toString(arr));
    }
    // Insertion Sort in Java
    static void insertionSort(int arr[]){
        for(int i=1; i<arr.length; i++){
            int temp = arr[i];
            int j=i-1;
            while((j>=0) && (arr[j]>temp)){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
        System.out.println(Arrays.toString(arr));

    }

    public static void main(String[] args) {
        linearSearch(new int[]{40,23,74,33,11,977,34}, 74);
        binarySerach(new int[]{10,12,14,18,25,50,73}, 25);
        bubbleSort(new int[]{40,23,74,33,11,977,34});
        selectionSort(new int[]{40,23,74,33,11,977,34});
        insertionSort(new int[]{40,23,74,33,11,977,34});


        
    }
}
