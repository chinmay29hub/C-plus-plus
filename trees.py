import collections


class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []
        self.parent = None

    def addChild(self, child):
        child.parent = self
        self.children.append(child)

    def getLevel(self):
        p = self.parent
        level = 0

        while p:
            level += 1
            p = p.parent

        return level

    def printTree(self, level=0):
        spaces = " " * self.getLevel() * 5

        prefix = spaces + "|--" if self.parent else ""

        print(prefix + self.data)

        if self.children:
            for child in self.children:
                child.printTree()

    def preOrderTraversal(self):
        print(self.data)

        for child in self.children:
            child.preOrderTraversal()

    def postOrderTraversal(self):
        for child in self.children:
            child.postOrderTraversal()

        print(self.data)

    def dfs(self, val):
        if val == self.data:
            return True

        for child in self.children:
            if child.dfs(val):
                return True

        return False

    def bfs(self, val):
        q = collections.deque()
        q.append(self)

        while q:
            node = q.popleft()

            if node:
                if node.data == val:
                    return True

                for child in node.children:
                    q.append(child)

        return False

    def bfsTraversal(self):
        res = []
        q = collections.deque()

        q.append(self)

        while q:
            qlen = len(q)
            level = []

            for i in range(qlen):
                node = q.popleft()

                if node:
                    level.append(node.data)
                    for child in node.children:
                        q.append(child)

            if level:
                res.append(level)

        return res


root = TreeNode("Electronics")

laptops = TreeNode("Laptops")
cellphones = TreeNode("Cell Phones")
televisions = TreeNode("Televisions")

laptops.addChild(TreeNode("Macbook"))
laptops.addChild(TreeNode("Microsoft Azure"))
laptops.addChild(TreeNode("Thinkpad"))

cellphones.addChild(TreeNode("Iphone"))
cellphones.addChild(TreeNode("Google Pixel"))
cellphones.addChild(TreeNode("Vivo"))

televisions.addChild(TreeNode("Samsung"))
televisions.addChild(TreeNode("LG"))

root.addChild(laptops)
root.addChild(cellphones)
root.addChild(televisions)

# print(cellphones.getLevel())
root.printTree()

root.preOrderTraversal()
print("--------")
root.postOrderTraversal()

print(root.dfs("LGl"))
print(root.bfs("LGl"))
print(root.bfsTraversal())
