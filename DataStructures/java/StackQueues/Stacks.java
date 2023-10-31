package DSA.DataStructures.java.StackQueues;



public class Stacks {
    private  int top;
    private  int arr[];
    private  int cap;

    Stacks(int size){
        arr = new int[size];
        top=-1;
        cap=size;

    }

    void push(int data){
        if(top==cap){
            System.out.println("Stack OverFlow");
            return;
        }
        top++;
        arr[top]=data;

    }
    void print(int arr[]){
        for(int i=arr.length-1; i>=0; i--){
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Stacks stacks = new Stacks(5);
        stacks.push(20);
        stacks.push(30);
        stacks.push(40);
        stacks.push(50);
        stacks.push(60);

        stacks.print(stacks.arr);

        
    }
}
