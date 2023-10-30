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
        if(pos==0){
            insertAtBegining(data);
        }else{
            Node newNode = new Node(data);
            Node curNode=head;
            int count=1;
            while (curNode != null && count < pos) {
                curNode=curNode.next;
                count++;
            }
            if(curNode==null){
                insertAtEnd(data);
            }
            newNode.next=curNode;
            newNode.prev=curNode.prev;
            curNode.prev.next=newNode;
            curNode.next=newNode;
        }
    }
    public static void main(String[] args) {
    DoublyLinkedList linkedList = new DoublyLinkedList();
    linkedList.insertAtBegining(100);
    


    }
}
