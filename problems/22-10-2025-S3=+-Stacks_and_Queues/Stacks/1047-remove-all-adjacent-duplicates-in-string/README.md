<h2><a href="https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/">1047. Remove All Adjacent Duplicates in String</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<p>You are given a string <code>s</code> consisting of lowercase English letters. A <em>duplicate removal</em> consists of choosing two <strong>adjacent and equal</strong> letters and removing them.</p>
<p>We repeatedly make duplicate removals on <code>s</code> until we can no longer do so.</p>
<p>Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.</p>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">s = "abbaca"</span></p>
  <p><strong>Output:</strong> <span class="example-io">"ca"</span></p>
  <p><strong>Explanation:</strong></p>
  <ul>
    <li>Remove <code>"bb"</code> from <code>"abbaca"</code> → <code>"aaca"</code>.</li>
    <li>Remove <code>"aa"</code> → <code>"ca"</code> (no more moves).</li>
  </ul>
</div>

<p><strong class="example">Example 2:</strong></p>
<div class="example-block">
  <p><strong>Input:</strong> <span class="example-io">s = "azxxzy"</span></p>
  <p><strong>Output:</strong> <span class="example-io">"ay"</span></p>
</div>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
  <li><code>s</code> consists of lowercase English letters.</li>
</ul>
