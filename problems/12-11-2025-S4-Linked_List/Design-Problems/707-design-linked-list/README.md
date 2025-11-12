<h2><a href="https://leetcode.com/problems/design-linked-list/">Design Linked List</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>
<p>Design a singly linked list that supports the following operations.</p>

<p>Implement the <code>MyLinkedList</code> class:</p>
<ul>
  <li><code>MyLinkedList()</code> Initialize the object.</li>
  <li><code>int get(int index)</code> Return the value of the node at <code>index</code> (0-indexed). If the index is invalid, return <code>-1</code>.</li>
  <li><code>void addAtHead(int val)</code> Insert a node of value <code>val</code> before the first element of the list.</li>
  <li><code>void addAtTail(int val)</code> Append a node of value <code>val</code> to the end of the list.</li>
  <li><code>void addAtIndex(int index, int val)</code> Insert a node of value <code>val</code> before the node at <code>index</code>.
    <ul>
      <li>If <code>index == length</code>, the node is appended.</li>
      <li>If <code>index &gt; length</code>, the insertion is ignored.</li>
      <li>If <code>index &lt; 0</code>, insert at head.</li>
    </ul>
  </li>
  <li><code>void deleteAtIndex(int index)</code> Delete the node at <code>index</code> if the index is valid.</li>
</ul>

<p><strong class="example">Example:</strong></p>

<pre>
<strong>Input</strong>
["MyLinkedList","addAtHead","addAtTail","addAtIndex","get","deleteAtIndex","get"]
[[],[1],[3],[1,2],[1],[1],[1]]

<strong>Output</strong>
[null,null,null,null,2,null,3]

<strong>Explanation</strong>
MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);      // List: 1
myLinkedList.addAtTail(3);      // List: 1 -> 3
myLinkedList.addAtIndex(1, 2);  // List: 1 -> 2 -> 3
myLinkedList.get(1);            // return 2
myLinkedList.deleteAtIndex(1);  // List: 1 -> 3
myLinkedList.get(1);            // return 3
</pre>

<p><strong>Constraints (typical LC 707):</strong></p>
<ul>
  <li>Values are integers (commonly <code>0 &lt;= val &lt;= 1000</code>).</li>
  <li>At most ~<code>2000</code> calls will be made to the methods.</li>
</ul>
