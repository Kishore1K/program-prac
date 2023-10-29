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
    public static LinkedList deleteByKey(LinkedList list , int key){
        Node curNode=list.head, prev = null;

        if(curNode==null){
            System.out.println("List is empty so we cant delete");
        }
        if(curNode!=null && curNode.data==key){
            System.out.println(key + " deleted");
            list.head= curNode.next;
            return list;
        }
        while (curNode.data!=key) {
            prev = curNode;
            curNode=curNode.next;
        }
        prev.next = curNode.next;
        System.out.println(key+" deleted");


        return list;
    }
    public static LinkedList deletePosition(LinkedList list, int index){
        int count=0;
        Node curNode=list.head, prev=null;
        if(curNode==null){
            System.out.println("List is empty !");
        }

        if(index==0 && curNode!=null){
            list.head=curNode.next;
            System.out.println(index+" pos elem is deleted");
        }
        else{
        while(curNode!=null){
            if(count==index){
                prev.next=curNode.next;
                System.out.println(index+" pos elemet is deleted");
                break;
            }
            prev = curNode;
            curNode=curNode.next;
            count++;
        }
        }

        return list;
            
    }

    public static int count(LinkedList list){
        Node curNode=list.head;
        int count=0;
        if(curNode==null){
            System.out.println("List Contains "+count+" nodes");
            return 0;
        }
        while (curNode!=null) {
            count++;
            curNode=curNode.next;
            
        }
        System.out.println("List Contains "+count+" nodes");
        return count;

    }
    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        count(list);
        list= insert(list, 10);
        list = insert(list, 20);
        list = insert(list, 30);
        list = insert(list, 40);
        list = insert(list, 50);
        list = insert(list, 60);
        printList(list);    
        count(list);
        list = deleteByKey(list, 40);
        printList(list);
        list = deleteByKey(list, 10);
        printList(list);
        list = deleteByKey(list, 60);
        printList(list);

        list = insert(list, 12);
        list = insert(list, 13);
        list = insert(list, 14);
        list = insert(list, 15);
        list = insert(list, 16);

        printList(list);
        count(list);
        list=deletePosition(list, 3);
        printList(list);
        list=deletePosition(list, 0);
        printList(list);
        list=deletePosition(list, 3);
        printList(list);
        count(list);

        
        
    }
    
}
