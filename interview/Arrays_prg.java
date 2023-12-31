package DSA.interview;

import java.util.Arrays;
import java.util.HashMap;

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
    //  Java Program to print the duplicate elements of an array
    static void printDuplicate(int[] arr){
        int count;
        for(int i=0;i<arr.length; i++){
            count=1;
            for(int j=0; j<arr.length; j++){
                if(arr[i]==arr[j] && i!=j){
                    count++;
                    arr[j]=-1;
                }
            }
            if(arr[i]!=-1 && count >1){
                System.out.print(arr[i]+ " ");
            }
        }
        System.out.println();
        
       /*for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]==arr[j]){
                    System.out.print(arr[j]+" ");
                }
            }
        } */ 

    }

    static void printArray(int arr[]){
        for (int i : arr) {
            System.out.print(i+ " ");
        }
        System.out.println();
    }

    //  Java Program to print the elements of an array in reverse order
    static int[] revArray(int arr[]){
        int temp;
        for(int i=0; i<arr.length/2;i++){
            temp = arr[i];
            arr[i]=arr[arr.length-i-1];
            arr[arr.length-i-1]=temp;
        }
        return arr;
    }
    //  Java Program to print the elements of an array present on even position
    static void printArrayEven(int arr[]){
        for(int i=0; i<arr.length; i++){
            if(i%2==0){
                System.out.print(arr[i]+ " ");
            }
        }
        System.out.println();
    }
        //  Java Program to print the elements of an array present on odd position
        static void printArrayOdd(int arr[]){
        for(int i=0; i<arr.length; i++){
            if(i%2!=0){
                System.out.print(arr[i]+ " ");
            }
        }
        System.out.println();
    }
    //  Java Program to print the largest element in an array
    static int largestElement(int arr[]){
        int largest;
        largest = arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }
    //  Java Program to print the smallest element in an array
    static int smallestElement(int arr[]){
        int smallest;
        smallest = arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        return smallest;
    }

    // Java Program to print the sum of all the items of the array
    static int sumElements(int arr[]){
        int sum=0;
        for(int i=0;i<arr.length; i++){
            sum+=arr[i];
        }
        return sum;
    }
    // Java Program to right rotate the elements of an array
    static int[] rightRotate(int arr[], int n){
        int temp, j;
        for(int i=0; i<n; i++){
            temp = arr[arr.length-1];
            for(j=arr.length-1;j>0; j-- ){
                arr[j]=arr[j-1];
            }
            arr[0]= temp;
        }

        return arr;
    }

    // Java Program to sort the elements of an array in ascending order
    static int[] ascendingSort(int arr[]){
        int temp;
        for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }
    // Java Program to sort the elements of an array in descending order
    static int[] descendingSort(int arr[]){
        int temp;
        for(int i=0; i<arr.length; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]<arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }
    static int thirdLargest(int arr[]){
        int largest, secLargest, thirdLargest;
        largest=secLargest=thirdLargest=arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]>largest){
                thirdLargest= secLargest;
                secLargest=largest;
                largest=arr[i];
            }else if(arr[i]<largest && arr[i]>secLargest){
                thirdLargest= secLargest;
                secLargest=arr[i];
            }else if(arr[i]>thirdLargest && arr[i]<secLargest){
                thirdLargest=arr[i];
            }
        }
        return thirdLargest;
    }
    //  Java Program to Find 2nd Largest Number in an array
    static int secLargest(int arr[]){
        int largest, secLargest;
        largest=secLargest=arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i]>largest){
                secLargest= largest;
                largest=arr[i];
            }else if(arr[i]>secLargest && arr[i]<largest){
                secLargest=arr[i];
            }
        }
        return secLargest;
    }
     //  Java Program to Find 2nd smallest Number in an array
    static int secSmallest(int arr[]){
        int secSmallest,smallest;
        secSmallest=smallest=arr[0];
        for(int i=0;i<arr.length; i++){
            if(arr[i]<smallest){
                secSmallest=smallest;
                smallest=arr[i];
            }else if(arr[i]>smallest && arr[i]<secSmallest){
                secSmallest=arr[i];
            }
        }
        return secSmallest;

    } 
    // Java Program to print Odd and Even Numbers from an Array
    static void printOddEven(int arr[]){
        for(int i=0; i<arr.length; i++){
            if(arr[i]%2==0){
                System.out.println("Even "+arr[i]);
            }

        }
        for(int  i=0; i<arr.length; i++){
            if(arr[i]%2!=0){
                System.out.println("Odd "+arr[i]);
            }
        }
    }

    static int[] twoSum(int arr[], int target){
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i=0; i<arr.length; i++){
            int diff = (target-arr[i]);
            if(map.containsKey(diff)){
                int returnSet[] = {map.get(diff)+1, i+1};
                return returnSet;
            }
            map.put(arr[i], i);

        }
        return null;
    }
    
    public static void main(String[] args) {
        // System.out.println(Arrays.toString(copyArray(new int[]{1,2,3,4,5,6})));
        // freqOfElem(new int[]{1,2,3,1,5,7,2,5,2,8,1,5,3,2});
        // System.out.println(Arrays.toString(arrLeftRotate(new int[]{1,2,3,4,5,6}, 2)));
        // printArray(rightRotate(new int[]{1,2,3,4,5,6}, 2));

        // printDuplicate(new int[]{1, 2, 3, 4, 2, 7, 8, 8, 3, 8});
        // printArray(new int[]{1, 2, 3, 4, 2, 7, 8, 8, 3, 8});
        // // reverse
        // printArray(revArray(new int[]{1, 2, 3, 4, 2, 7, 8, 8, 3, 8}));
        // printArrayEven(new int[]{1, 2, 3, 4, 2, 7, 8, 8, 3, 8});
        // // odd
        // printArrayOdd(new int[]{1, 2, 3, 4, 2, 7, 8, 8, 3, 8});
        // System.out.println(largestElement(new int[]{7,3,5,2,8,11,0,2,56,112,5,-1}));
        // System.out.println(smallestElement(new int[]{7,3,5,2,8,11,0,2,56,112,5,-1}));
        // System.out.println(sumElements(new int[]{7,3,5,2,8,11,0,2,56,112,5,-1}));
        // printArray(ascendingSort(new int[]{2,6,1,5,9,4,7}));
        // printArray(descendingSort(new int[]{2,6,1,5,9,4,7}));
        // System.out.println(thirdLargest(new int[]{2,6,1,5,9,4,7, 8, 100}));
        // System.out.println(secLargest(new int[]{2,6,1,5,9,4,7, 8, 100}));
        // System.out.println(secSmallest(new int[]{2,6,1,5,-1,9,4,7, 8, 100}));
        // printOddEven(new int[]{2,6,1,5,-1,9,4,7, 8, 100});
        System.out.println(Arrays.toString(twoSum(new int[]{4,5,6,1,3}, 7)));
    }
}
