package DSA.DataStructures.java.LinkedList;

public class LinkedList {
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    
    public static LinkedList insert(LinkedList list, int data){
        Node new_Node = new Node(data);
        new_Node.next = null;

        if(list.head==null){
            list.head=new_Node;
        }else{
            Node curNode=list.head;
            while (curNode.next!=null) {
                curNode= curNode.next;
                
            }
            curNode.next=new_Node;
        }
        return list;


    }
    public static void printList(LinkedList list){
        Node curNode=list.head;

        while(curNode!=null){
            System.out.print(curNode.data+"\t");
            curNode=curNode.next;
        }
        System.out.println();

    }
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list= insert(list, 10);
        list = insert(list, 20);
        list = insert(list, 30);
        list = insert(list, 40);
        list = insert(list, 50);
        list = insert(list, 60);

        printList(list);
    }
    
}
