class Node:
    def __init__(self, data):
        self.data = data;
        self.next=None

class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtBegining(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        new_node.next=self.head
        self.head=new_node

    def insertAtEnd(self, data):
        new_node = Node(data)
        temp =self.head
        while(temp.next!=None):
            temp=temp.next
        temp.next=new_node

    def printList(self):
        temp = self.head

        if(self.head==None):
            print("No Elemenets")
        else:
            while temp!=None:
                print(temp.data, sep=",", end="\t")
                temp=temp.next
        print()
    def insertAtPos(self, data, pos):
        new_node = Node(data)
        if pos==1:
            self.insertAtBegining(data)
        cur_node = self.head
        count=1
        while cur_node!=None:
            if(pos==count+1):
                new_node.next=cur_node.next
                cur_node.next=new_node
            cur_node = cur_node.next
            count+=1
    def delAtBegining(self):
        if self.head==None:
            print("List is Empty")
        curNode = self.head
        self.head=self.head.next
        print(curNode.data, "is Deleted")
    def delAtEnd(self):
        curNode=self.head
        while curNode.next!=None:
            prev = curNode
            curNode=curNode.next
        prev.next=None
        print(curNode.data, "is Deleted")
    def delAtPos(self, pos):
        curNode=self.head
        count=1
        while curNode.next!=None:
            if(pos==count+1):
                prev.next=curNode.next
                print(curNode.data," is Deleted")
            prev = curNode
            curNode=curNode.next
            count+=1
        

llist = LinkedList()
llist.insertAtBegining(10)
llist.insertAtBegining(20)
llist.insertAtEnd(30)
llist.insertAtEnd(40)
llist.printList()
llist.insertAtPos(25, 2)
llist.printList()
# llist.delAtBegining()
# llist.delAtEnd()
llist.delAtPos(3)
llist.printList()
    

