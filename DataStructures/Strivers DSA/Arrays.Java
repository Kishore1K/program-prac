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


    public static void main(String[] args) {
        System.out.println(secondSmallest(new int[]{2,5,7,1,9,6}));
    }
}
