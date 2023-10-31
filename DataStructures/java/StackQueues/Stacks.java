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
        if(isFull()){
            System.out.println("Stack OverFlow");
            return;
        }
        top++;
        arr[top]=data;

    }
    void print(){
        for(int i=top; i>=0; i--){
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }
    void pop(){
        if(isEmpty()){
            System.out.println("Stack Under Flow");
            return;
        }
        System.out.println(arr[top]+" is Poped From Stack");
        top--;
    }
    boolean isFull(){
        return top==cap-1;
    }
    boolean isEmpty(){
        return top==-1;
    }
    public static void main(String[] args) {
        Stacks stacks = new Stacks(5);
        stacks.push(20);
        stacks.push(30);
        stacks.push(40);
        stacks.push(50);
        stacks.push(60);

        stacks.print();
        stacks.pop();
        stacks.print();
        stacks.push(24);
        stacks.print();

        
    }
    
}
