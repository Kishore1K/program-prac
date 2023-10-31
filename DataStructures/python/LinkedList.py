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


llist = LinkedList()
llist.insertAtBegining(10)
llist.insertAtBegining(20)
llist.insertAtEnd(30)
llist.insertAtEnd(40)
llist.printList()
    

