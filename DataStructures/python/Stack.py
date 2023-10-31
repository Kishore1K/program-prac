class Stack:
    def __init__(self, size):
        self.stack=[]
        self.top=-1
        self.size=size
    def isFull(self)->bool:
        return self.top==self.size
    def push(self, data):
        if self.isFull():
            print("Stack OverFlow")
            return 
        top+=1
        self.stack[top]=data
    def printLR(self):
        
