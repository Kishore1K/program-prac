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
    // Java program to delete a node from the beginning of the singly linked list
    public SinglyLinkedList deleteNodeAtBegining(SinglyLinkedList list){
        Node curNode=list.head;
        if(curNode==null){
            System.out.println("List is empty");
            return list;
        }
        System.out.println(curNode.data+" is deleted");

        list.head=curNode.next;
        return list;

    }

    public void deleteNodeAtEnd(SinglyLinkedList list){
        Node curNode=list.head, prev=null;
        if(curNode==null){
            System.out.println("List is empty");
            return ;
        }
        while(curNode.next!=null){
            prev=curNode;
            curNode=curNode.next;
        }
        System.out.println(curNode.data+" is deleted");
        prev.next=curNode.next;
        return ;
    }
    void deleteAtMiddel(SinglyLinkedList list){
        int count = countLL(list);
        int key = count%2==0?(count/2): (count+1)/2;
        int temp=0;
        Node  curNode=list.head, prev=null;
        while(curNode!=null){
            if(temp==key){
                System.out.println(curNode.data+" is deleted");

                prev.next=curNode.next;
                return ;
            }
            prev = curNode;
            curNode=curNode.next;
            temp++;
        }
        return ;
    }
    void insertBegining(SinglyLinkedList list, int data){
        Node newNode = new Node(data);
        if(list.head==null){
            list.head=newNode;
            return ;
        }
        Node temp=list.head;
        newNode.next=temp;
        list.head=newNode;
        return ;
    }
    void insertEnd(SinglyLinkedList list, int data){
        Node newNode = new Node(data);
        if(list.head==null){
            list.head=newNode;
            return ;
        }
        Node curNode = list.head;
        while(curNode.next!=null){
            curNode=curNode.next;
        }
        curNode.next=newNode;
        return;
    }
    void insertAtKey(SinglyLinkedList list,int data, int key){
        Node newNode = new Node(data), curNode=list.head, prev=null;
        while (curNode.data!=key) {
            curNode=curNode.next;
            
        }
        // prev.next=newNode;
        newNode.next=curNode.next;
        curNode.next=newNode;
        return;
    }
    void printLR(SinglyLinkedList list){
        if(list.head==null){
            System.out.println("List is empty");
            return;
        }
        Node curNode=list.head;
        while(curNode!=null){
            System.out.print(curNode.data+"\t");
            curNode=curNode.next;
        }
        System.out.println();
    }
    void printRL(Node curNode){
        while (curNode.next==null) {
            System.out.print(curNode.data+"\t");
            return;
        }
        printRL(curNode.next);
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
        linkedList.insertBegining(linkedList, 100);
        linkedList.insertBegining(linkedList, 200);
        linkedList.printLL(linkedList);
        linkedList.insertEnd(linkedList, 500);
        linkedList.printLL(linkedList);
        linkedList.insertAtKey(linkedList, 25, 20);
        // linkedList.printLL(linkedList);
        linkedList.printLR(linkedList);
        linkedList.printRL(linkedList.head);
        // linkedList.countLL(linkedList);
        // // linkedList.reverseLL(linkedList.head);
        // linkedList.printLL(linkedList);
        // // // linkedList.deleteNodeAtBegining(linkedList);
        // // // linkedList.printLL(linkedList);
        // linkedList.deleteNodeAtBegining(linkedList);
        // linkedList.printLL(linkedList);
        // linkedList.deleteNodeAtEnd(linkedList);
        // linkedList.printLL(linkedList);
        // linkedList.deleteAtMiddel(linkedList);
        // linkedList.printLL(linkedList);


    }
}