package DSA.DataStructures.java.StackQueues;

public class Queues {
    private int front;
    private int rear;
    private int arr[];
    private int cap;

    Queues(int size){
        this.front=-1;
        this.rear=-1;
        arr = new int[size];
        cap=size;
    }
    boolean isFull(){
       return (front==0 && rear==cap-1);
    }
    boolean isEmpty(){
        return front==-1;
    }
    void enqueue(int data){
        if(isFull()){
            System.out.println("OverFlow");
            return;
        }
        if(front==-1 && rear==-1){
            front=0;
        }
        rear++;
        arr[rear]=data;
    }

    void print(){
        for(int i=front;i<=rear;i++){
            System.out.print(arr[i]+"\t");
        }
        System.out.println();
    }

    void dequeue(){
        if(isEmpty()){
            System.out.println("Queue is Empty");
            return ;
        }else{
            if(front>rear){
                front=rear=-1;
            }else{
                front++;
            }
        }
        System.out.println(arr[front]+" is Dequeued From the Queue");
    }

    public static void main(String[] args) {
        Queues queues = new Queues(5);
        queues.enqueue(10);
        queues.enqueue(20);
        queues.enqueue(30);
        queues.enqueue(40);
        queues.print();
        queues.enqueue(50);
        queues.print();
        queues.enqueue(60);
        queues.dequeue();
        queues.print();
        queues.dequeue();
        queues.print();


    }
}
