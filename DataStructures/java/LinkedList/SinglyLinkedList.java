package DSA.DataStructures.java.LinkedList;
class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}
public class SinglyLinkedList {
    Node head;

    public SinglyLinkedList insert(SinglyLinkedList list, int data){
        Node newNode = new Node(data);
        if(list.head==null){
            list.head=newNode;
            return list;
        }
        Node curNode = list.head;
        while(curNode.next!=null){
            curNode= curNode.next;
        }
        curNode.next=newNode;
        return list;
    }

    public void printLL(SinglyLinkedList list){
        Node curNode=list.head;
        while (curNode!=null) {
            System.out.print(curNode.data+"\t");
            curNode=curNode.next;
        }
        System.out.println();
    }
    // count number of nodes
    public int countLL(SinglyLinkedList list){
        int count=0;
        Node curNode=list.head;
        while (curNode!=null) {
            count++;
            curNode=curNode.next;
        }
        System.out.println("Linked List contains = "+count);
        return count;
    }
    // display it in reverse order
    public void reverseLL(Node curNode){

        while (curNode.next==null) {
            System.out.print(curNode.data+ "\t");
            return;
            
        }
        reverseLL(curNode.next);
        System.out.print(curNode.data+"\t");



    }
    public static void main(String[] args) {
        SinglyLinkedList linkedList = new SinglyLinkedList();
        linkedList = linkedList.insert(linkedList, 10);
        linkedList = linkedList.insert(linkedList, 30);
        linkedList = linkedList.insert(linkedList, 20);
        linkedList = linkedList.insert(linkedList, 50);
        linkedList = linkedList.insert(linkedList, 80);
        linkedList.printLL(linkedList);
        linkedList.countLL(linkedList);
        linkedList.reverseLL(linkedList.head);
        
    }
}