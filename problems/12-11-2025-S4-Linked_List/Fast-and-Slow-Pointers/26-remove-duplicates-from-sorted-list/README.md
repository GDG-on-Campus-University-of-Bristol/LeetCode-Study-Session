<h2><a href="https://leetcode.com/problems/remove-duplicates-from-sorted-list/">Remove Duplicates from Sorted List</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>
<p>Given the <strong>head</strong> of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list <strong>sorted</strong> as well.</p>

<p>Implement the function:</p>
<ul>
  <li><code>ListNode* deleteDuplicates(ListNode* head)</code> (language-agnostic signature varies).  
      Traverse the list and remove nodes with the same value as their predecessor.</li>
</ul>

<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input</strong>: head = [1,1,2]
<strong>Output</strong>: [1,2]
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input</strong>: head = [1,1,2,3,3]
<strong>Output</strong>: [1,2,3]
</pre>

<p><strong>Constraints:</strong></p>
<ul>
  <li>The number of nodes is in the range <code>[0, 300]</code>.</li>
  <li><code>-100 &lt;= Node.val &lt;= 100</code>.</li>
  <li>The list is <strong>non-decreasing</strong> (sorted).</li>
</ul>
