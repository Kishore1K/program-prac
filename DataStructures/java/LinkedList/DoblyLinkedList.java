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
public class DoblyLinkedList {
    Node head;
    DoblyLinkedList insert(DoblyLinkedList list, int data){
        Node newNode = new Node(data);
        if(list.head==null){
            list.head=newNode;
            return list;
        }
        Node curNode=list.head;
        while (curNode.next!=null) {
            curNode= curNode.next;
            
        }
        curNode.next=newNode;
        return list;

    }

    void printDLL(DoblyLinkedList list){
        Node curNode=list.head;
        while (curNode!=null) {
            System.out.print(curNode.data+"\t");
            curNode=curNode.next;
        }
        System.out.println();
    }
    public static void main(String[] args) {
        DoblyLinkedList list = new DoblyLinkedList();
        list = list.insert(list, 10);
        list = list.insert(list, 20);
        list = list.insert(list, 30);
        list = list.insert(list, 40);
        list = list.insert(list, 50);

        list.printDLL(list);

    }
}
