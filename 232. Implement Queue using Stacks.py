class MyQueue:

    def __init__(self):
        self.s1=deque()
        self.s2=deque()

    def push(self, x: int) -> None:
        self.s1.append(x)

    def pop(self) -> int:
        for i in range(len(self.s1)-1):
            self.s2.append(self.s1.pop())
        p = self.s1.pop()
        for i in range(len(self.s2)):
            self.push(self.s2.pop())
        return p    

    def peek(self) -> int:
        return self.s1[0]

    def empty(self) -> bool:
        if (len(self.s1)==0):
            return True
        return False
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()
