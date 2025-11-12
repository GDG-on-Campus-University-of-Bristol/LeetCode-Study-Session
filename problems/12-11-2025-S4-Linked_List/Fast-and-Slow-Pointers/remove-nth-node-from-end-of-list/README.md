<h2><a href="https://leetcode.com/problems/remove-nth-node-from-end-of-list/">Remove Nth Node From End of List</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>
<p>Given the <strong>head</strong> of a linked list, remove the <code>n</code><sup>th</sup> node from the end of the list and return its head.</p>

<p>Typical approach: use two pointers. Advance a fast pointer <code>n</code> steps, then move fast and slow together until fast reaches the end; delete the node after slow.</p>

<p><strong>Function (language-agnostic):</strong></p>
<ul>
  <li><code>ListNode* removeNthFromEnd(ListNode* head, int n)</code></li>
</ul>

<p><strong class="example">Example:</strong></p>
<pre>
<strong>Input</strong>: head = [1,2,3,4,5], n = 2
<strong>Output</strong>: [1,2,3,5]
<strong>Explanation</strong>: The 2nd node from the end is 4; remove it.
</pre>

<p><strong>Edge Cases:</strong></p>
<ul>
  <li>Removing the head (e.g., head = [1], n = 1 → []).</li>
  <li>List with two nodes and n = 2 (drop the first node).</li>
</ul>

<p><strong>Constraints:</strong></p>
<ul>
  <li>The number of nodes is in the range <code>[1, 30]</code>.</li>
  <li><code>0 &lt;= Node.val &lt;= 100</code></li>
  <li><code>1 &lt;= n &lt;=</code> length of the list</li>
</ul>
