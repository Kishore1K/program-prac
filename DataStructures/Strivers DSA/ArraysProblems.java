import java.util.Arrays;
import java.util.HashMap;

/*
 *Strivers Arrays Problem  
 * https://takeuforward.org/interviews/tcs-nqt-coding-sheet-tcs-coding-questions/#point_2
 */
public class ArraysProblems{

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
    int removeDuplicatesCount(int arr[]){
        int i=0;
        for(int j=0; j<arr.length; j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
    }
    static void removeDuplicates(int arr[], int n){
        int mark[] = new int[n];
        for(int i=0; i<n; i++){
            mark[i]=1;
        }

        for(int i=0; i<n; i++){
            if(mark[i]==1){
                for(int j=i+1; j<n; j++){
                    if(arr[i]==arr[j]){
                        mark[j]=0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            if(mark[i]==1) System.out.print(arr[i]+" ");
        }
    }

    static int[] insertBeg(int arr[], int n, int val){
        for(int i=n-1; i>0; i--){
            arr[i+1]=arr[i];
        }
        arr[0]=val;
        return arr;
    }
    static int[] insertEnd(int arr[], int n, int val){
        arr[n]=val;
        return arr;
    }
    static int[] insertMid(int arr[],int n, int pos, int val){
        for(int i=n; i>=pos; i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=val;
        return arr;
    }
    static void duplicateElements(int arr[]){
        int dup[]= new int[arr.length];
        int cnt=0;
        for(int i=0; i<arr.length-1; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]==arr[j])
                    dup[cnt++]=arr[i];
            }
        }
        System.out.println("The repeating elements are");
        for(int i=0; i<cnt; i++)
            if(dup[i]!=dup[i+1]) System.out.print(dup[i]+" ");
    }
    static void findNonRepeatingElement(int arr[]){
        boolean chk;
        for(int i=0; i<arr.length; i++){
            chk=false;
            for(int j=0; j<arr.length; j++){
                if(i!=j && arr[i]==arr[j]){
                    chk=true;
                    break;
                }

            }
            if(!chk) System.out.print(arr[i]+" ");
        }
    }

    static void symmetricPairs(){
        int n=5;
        int arr[][] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[j][0]==arr[i][1] && arr[j][1]==arr[i][0]){
                    System.out.print("(" + arr[i][1] + " " + arr[i][0] + ")" + " ");
                    break;
                }
            }
        }
        // or
        HashMap<Integer,Integer> mp = new HashMap<>();
        System.out.println("The Symmetric Pairs are: ");
        for (int i = 0; i < arr.length; i++) {
        int first = arr[i][0];
        int second = arr[i][1];
        if (mp.get(second) != null && mp.get(second) == first) {
            System.out.print("("+first + " " + second+") ");
        } else {
            mp.put(first, second);
        }
        }

    }
    static void rotateArray(int arr[], int k){
        for(int i=0; i<k; i++){
            int last = arr[arr.length-1];
            for(int j=arr.length-1;j>0;j--){
                arr[j] = arr[j-1];
            }
            arr[0]=last;
        }
        System.out.println(Arrays.toString(arr));
    }

    static void linearSearch(int arr[], int k){
        for(int i=0; i<arr.length; i++){
            if(arr[i]==k){
                System.out.println(i);
                break;
            }
        }
    }
    static void binarySearch(int arr[], int k){
        int low=0, high = arr.length-1;
        int mid=0, ans = 0;
        while (low<=high) {
            mid = low+(high-low)/2;
            if(arr[mid]==k){
                ans =mid;
                break;
            }
            else if(arr[mid]<k){
                low = mid+1;
            }else{
                high=mid-1;
            }
            low++;
            high--;
            
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        // int arr[] ={10,5,10,15,10,5};
        // int n = arr.length;
        // // countFreq(arr, n); 
        // sortIncDec(arr);
        rotateArray(new int[]{1,2,3,4,5}, 1);
        
        

    
    }
}
