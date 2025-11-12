<h2><a href="https://leetcode.com/problems/design-hashmap/">Design HashMap</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>
<p>Design a HashMap without using built-in hash table libraries.</p>

<p>Implement the <code>MyHashMap</code> class:</p>
<ul>
  <li><code>MyHashMap()</code> Initialize the object.</li>
  <li><code>void put(int key, int value)</code> Insert a <code>(key, value)</code> pair into the HashMap.
      If the key already exists, update the corresponding value.</li>
  <li><code>int get(int key)</code> Return the value to which the specified key is mapped,
      or <code>-1</code> if this map contains no mapping for the key.</li>
  <li><code>void remove(int key)</code> Remove the key and its corresponding value if the key exists.</li>
</ul>

<p><strong class="example">Example:</strong></p>

<pre>
<strong>Input</strong>
["MyHashMap","put","put","get","get","put","get","remove","get"]
[[],[1,1],[2,2],[1],[3],[2,1],[2],[2],[2]]

<strong>Output</strong>
[null,null,null,1,-1,null,1,null,-1]

<strong>Explanation</strong>
MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1);      // map: {1:1}
myHashMap.put(2, 2);      // map: {1:1, 2:2}
myHashMap.get(1);         // return 1
myHashMap.get(3);         // return -1
myHashMap.put(2, 1);      // update: {1:1, 2:1}
myHashMap.get(2);         // return 1
myHashMap.remove(2);      // map: {1:1}
myHashMap.get(2);         // return -1
</pre>

<p><strong>Constraints (typical LC 706):</strong></p>
<ul>
  <li><code>0 &lt;= key, value &lt;= 10^6</code></li>
  <li>At most <code>10^4</code> calls will be made to <code>put</code>, <code>get</code>, and <code>remove</code>.</li>
</ul>
