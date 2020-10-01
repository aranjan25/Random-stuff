class Node :
    def __init__(self, i) :
        self.right = None
        self.left = None
        self.val = i

def push(root, i) :
    node = Node(i)
    if(root is None) :
        root = node
    elif(i > root.val) :
        if(root.right is None) :
            root.right = node
        else :
            root = root.right
    else :
        if(root.left is None) :
            root.left = node
        else :
            root = root.left
  
  # ---->  Postorder function   
def postorder(node) :
    if(node is None) :
        return
    postorder(node.left)
    postorder(node.right)
    print(node.val)
    
root = Node(int(input('Enter Root Node: ')))
top = root
push(top, int(input('Enter Something To Push: ')))

postorder(root)