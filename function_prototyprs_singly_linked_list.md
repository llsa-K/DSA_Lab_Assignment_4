Algorithm 1: Create Node

Algorithm CreateNode(value)

1. Allocate memory for newNode
2. Set newNode→data ← value
3. Set newNode→next ← NULL
4. Return newNode

Algorithm 2: Insert at Beginning

Algorithm InsertAtBeginning(head, value)
1. Create newNode using CreateNode(value)
2. Set newNode→next ← head
3. Set head ← newNode
4. Return head

Algorithm 3: Insert at End

Algorithm InsertAtEnd(head, value)
1. Create newNode using CreateNode(value)
2. If head is NULL:
a. Return newNode
3. Set temp ← head
4. While temp→next ≠ NULL:
a. temp ← temp→next
5. temp→next ← newNode
6. Return head

Algorithm 4: Insert at Position (0-based index)

Algorithm InsertAtPosition(head, value, pos)
1. If pos = 0:
a. Return InsertAtBeginning(head, value)
2. Create newNode using CreateNode(value)
3. Set temp ← head
4. Loop (i = 0 to pos-2):
a. If temp = NULL: return head (Invalid position)
b. temp ← temp→next
5. newNode→next ← temp→next
6. temp→next ← newNode
7. Return head

Algorithm 5: Delete from Beginning

Algorithm DeleteFromBeginning(head)
1. If head = NULL: return NULL
2. Set temp ← head
3. Set head ← head→next
4. Free temp
5. Return head

Algorithm 6: Delete from End

Algorithm DeleteFromEnd(head)
1. If head = NULL: return NULL
2. If head→next = NULL:
a. Free head
b. Return NULL
3. Set temp ← head
4. While temp→next→next ≠ NULL:
a. temp ← temp→next
5. Free temp→next
6. temp→next ← NULL
7. Return head

Algorithm 7: Search Element

Algorithm Search(head, key)
1. Set temp ← head
2. While temp ≠ NULL:
a. If temp→data = key: return true
b. temp ← temp→next
3. Return false
Algorithm 8: Display List

Algorithm Display(head)
1. Set temp ← head
2. While temp ≠ NULL:
a. Print temp→data
b. temp ← temp→next
