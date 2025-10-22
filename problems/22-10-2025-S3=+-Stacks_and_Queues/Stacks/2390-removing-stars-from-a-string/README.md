<h2><a href="https://leetcode.com/problems/removing-stars-from-a-string/">2390. Removing Stars From a String</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Medium-orange" alt="Difficulty: Medium" />
<hr>

<p>You are given a string <code>s</code> which contains stars <code>*</code>.</p>
<p>In one operation, you can choose a star in <code>s</code>, remove the closest non-star character to its left, and remove the star itself.</p>
<p>Return the string after all stars have been removed.</p>
<p><em>Note:</em> The input is generated so that the operation is always possible, and the resulting string is unique.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">s = "leet**cod*e"</span></p>
  <p><strong>Output:</strong> <span class="example-io">"lecoe"</span></p>
  <p><strong>Explanation:</strong></p>
  <ul>
    <li>The first <code>*</code> removes the <code>t</code>, the second <code>*</code> removes the remaining <code>e</code> to its left.</li>
    <li>The next <code>*</code> removes the <code>d</code>.</li>
    <li>Final string is <code>"lecoe"</code>.</li>
  </ul>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">s = "erase*****"</span></p>
  <p><strong>Output:</strong> <span class="example-io">""</span></p>
</div>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
  <li><code>s</code> consists of lowercase English letters and the character <code>'*'</code>.</li>
</ul>
