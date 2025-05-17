# BFS (Level-order)

# DFS Preorder (Root → Left → Right)

# DFS Inorder (Left → Root → Right)

# DFS Postorder (Left → Right → Root)

import collections


class BinarySearchTreeNode:  # Or Binary Tree
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def addChild(self, data):
        if data == self.data:
            return

        if data < self.data:
            # add to left
            if self.left:
                self.left.addChild(data)
            else:
                self.left = BinarySearchTreeNode(data)
        else:
            # add to right
            if self.right:
                self.right.addChild(data)
            else:
                self.right = BinarySearchTreeNode(data)

    def searchTree(self, val):  # dfs
        if self.data == val:
            return True

        if val < self.data:
            # may be on left
            if self.left:
                return self.left.searchTree(val)
            else:
                return False

        if val > self.data:
            # may be on right
            if self.right:
                return self.right.searchTree(val)
            else:
                return False

    def inOrderTraversal(self):
        elements = []

        if self.left:
            elements += self.left.inOrderTraversal()

        elements.append(self.data)

        if self.right:
            elements += self.right.inOrderTraversal()

        return elements

    def preOrderTraversal(self):
        elements = []

        elements.append(self.data)

        if self.left:
            elements += self.left.preOrderTraversal()

        if self.right:
            elements += self.right.preOrderTraversal()

        return elements

    def postOrderTraversal(self):
        elements = []

        if self.left:
            elements += self.left.postOrderTraversal()

        if self.right:
            elements += self.right.postOrderTraversal()

        elements.append(self.data)

        return elements

    def findMin(self):
        curr = self
        while curr.left:
            curr = curr.left

        return curr.data

    def findMax(self):
        curr = self

        while curr.right:
            curr = curr.right

        return curr.data

    def bfs(self, val):
        q = collections.deque()
        q.append(self)

        while q:
            node = q.popleft()

            if node:

                if val == node.data:
                    return True

                q.append(node.left)
                q.append(node.right)

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
                    q.append(node.left)
                    q.append(node.right)

            if level:
                res.append(level)

        return res


def buildTree(elements):
    root = BinarySearchTreeNode(elements[0])

    for i in range(1, len(elements)):
        root.addChild(elements[i])

    return root


numbers = [17, 4, 1, 20, 9, 23, 18, 34, 18, 4]
numbers_tree = buildTree(numbers)

print(numbers_tree.inOrderTraversal())
print(numbers_tree.preOrderTraversal())
print(numbers_tree.postOrderTraversal())

print(numbers_tree.searchTree(100))
print(numbers_tree.findMin())
print(numbers_tree.findMax())

countries = ["India", "USA", "China", "Brazil", "France", "Australia"]
countries_tree = buildTree(countries)

print(countries_tree.inOrderTraversal())
print(countries_tree.searchTree("China"))
print(countries_tree.searchTree("Germany"))

print(countries_tree.bfs("ajsjdsjd"))
print(numbers_tree.bfsTraversal())
