package DSA.DataStructures.java.LinkedList;
class Node{
    int data;
    Node next;
    Node prev;

    Node(int data){
        this.data=data;
        this.next=null;
        this.prev=null;
    }
}
public class DoublyLinkedList {
    static Node head=null;
    static Node tail=null;
    

    void insertAtBegining(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=tail=newNode;
            return ;
        }
        newNode.next=head;
        head.prev=newNode;
        head=newNode;
    }
    void insertAtEnd(int data){
        if(head==null){
            insertAtBegining(data);
        }else{
            Node newNode = new Node(data);
            tail.next=newNode;
            newNode.prev=tail;
            tail=newNode;
        }
    }
    void insertAtPos(int data, int pos){
        Node newNode = new Node(data);
        if(pos==1){
            insertAtBegining(data);
        }else{
            Node curNode = head;
            int count=1;

            while (curNode!=null && count<pos) {
                curNode=curNode.next;
                count++;
            }
            if(curNode==null){
                insertAtEnd(data);
            }
            else{
                newNode.next=curNode;
                newNode.prev=curNode.prev;
                curNode.prev.next=newNode;
                curNode.prev=newNode;
            }
        }        
    }
    void printForward(){
        Node curNode=head;
        while (curNode!=null) {
            System.out.print(curNode.data+"\t");
            curNode=curNode.next;  
        }
        System.out.println();
    }

    void printBackward(){
        Node curNode=tail;
        while (curNode!=null) {
            System.out.print(curNode.data+"\t");
            curNode=curNode.prev;
        }
        System.out.println();
    }

    void deleteAtBegining(){
        Node cuNode=head;

        head=head.next;
        head.prev=null;
        cuNode.next=null;
    }
    void deleteAtEnd(){
        Node curNode=tail;
        tail=tail.prev;
        tail.next=null;
        curNode.prev=null;
    }
    void deleteAtPos(int pos){
        Node curNode=head;

        if(pos==1){
            deleteAtBegining();
        }else{
            int count=1;
            while (curNode!=null && count<pos) {
                curNode=curNode.next;
                count++;
            }
            if(curNode==null){
                deleteAtEnd();
            }
            else{
                curNode.prev.next=curNode.next;
                curNode.next.prev=curNode.prev;
                curNode.next=curNode.prev=null;
            }

        }
    }
    public static void main(String[] args) {
    DoublyLinkedList linkedList = new DoublyLinkedList();
    linkedList.insertAtBegining(100);
    linkedList.insertAtBegining(200);
    linkedList.insertAtBegining(300);
    linkedList.printForward();
    linkedList.insertAtEnd(400);
    linkedList.insertAtEnd(500);
    linkedList.printForward();
    linkedList.insertAtPos(250, 3);
    linkedList.printForward();
    // linkedList.printBackward();
    linkedList.deleteAtBegining();
    linkedList.printForward();
    linkedList.deleteAtEnd();
    linkedList.printForward();
    linkedList.deleteAtPos(2);
    linkedList.printForward();



    }
}
