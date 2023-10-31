package DSA.DataStructures.java.StackQueues;



public class Stacks {
    private static int top;
    private static int arr[];
    private static int cap;

    Stacks(int size){
        arr = new int[size];
        top=-1;
        cap=size;

    }

    static void push(int data){
        if(top==cap){
            System.out.println("Stack OverFlow");
        }
        arr[top++]=data;

    }
    public static void main(String[] args) {
        
    }
}
