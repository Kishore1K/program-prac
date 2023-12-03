import java.util.Arrays;

/*
 *Strivers Arrays Problem  
 * https://takeuforward.org/interviews/tcs-nqt-coding-sheet-tcs-coding-questions/#point_2
 */
public class Arrays{

    static int smallest(int arr[]){
        int min = arr[0];
        for(int i=1; i<arr.length; i++){
            if(arr[i]<min)
                min = arr[i];
        }
        return min;
    }
    static int largest(int arr[]){
        int lar = arr[0];
        for(int i=1; i<arr.length; i++){
            if(arr[i]>lar)
                lar = arr[i];
        }
        return lar;
    }
    static int secondLargest(int arr[]){
        int lar = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++){
            if(arr[i]>lar){
                secondLargest = lar;
                lar = arr[i];
            }else if(arr[i]>secondLargest && arr[i]<lar){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
    static int secondSmallest(int arr[]){
        int small = Integer.MAX_VALUE;
        int secondSmallest = Integer.MAX_VALUE;
        for(int i=0; i<arr.length; i++){
            if(arr[i]<small){
                secondSmallest=small;
                small = arr[i];
            }else if(arr[i]<secondSmallest && arr[i]>small){
                secondSmallest = arr[i];
            }

        }
        return secondSmallest;
    }
    static int[] reverseArray(int arr[], int n){
        for(int i=0; i<n/2; i++){
            int temp = arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        return arr;
    }
    static void printArray(int arr[]){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    static void countFreq(int arr[], int n){
        boolean visited[] = new boolean[n];
        int count=0;
        for(int i=0; i<n; i++){
            if(visited[i]==true)
                continue;
            count=1;
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    visited[j]=true;
                    count++;
                }
            }
            System.out.println(arr[i]+ " = "+count);
        }
    }
    // sort array increase+decrease [1,2,3,4,8,7,6,5] 1st half increase and 2nd off decrease
    static void sortIncDec(int arr[]){
        Arrays.sort(arr);
        int n =arr.length;
        for(int i=0; i<n/2; i++){
            System.out.print(arr[i]+" ");
        }
        for(int i=n-1; i>=n/2; i--){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int arr[] ={10,5,10,15,10,5};
        int n = arr.length;
        // countFreq(arr, n); 
        sortIncDec(arr);
            
    }
}
