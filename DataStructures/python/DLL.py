class Node:
    def __init__(self, data):
        self.data=data
        self.next=None
        self.prev=None
class DoblyLinkedList:

    def __init__(self):
        self.head=None
    

    def insertAtBegining(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return

        newNode.next=self.head
        newNode.prev=None
        self.head=newNode


        
        
    
    def printLR(self):
        curNode =self.head
        while curNode.next!=None:
            print(curNode.data, end="->")
            curNode=curNode.next
        print(curNode.data)

    # def printRL(self):
    #     curNode = self.head
    #     while curNode!=None:
    #         copy = curNode
    #         curNode=curNode.next
    #     while copy != None:
    #         print(copy.data)
    #         copy=copy.prev
    #     print()
        

dll = DoblyLinkedList()
dll.insertAtBegining(10)
dll.insertAtBegining(20)
dll.insertAtBegining(30)
dll.insertAtBegining(40)
dll.printLR()
dll.printRL()

