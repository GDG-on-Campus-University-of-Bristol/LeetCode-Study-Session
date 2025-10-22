<h2><a href="https://leetcode.com/problems/number-of-recent-calls/">933. Number of Recent Calls</a></h2>
<img src="https://img.shields.io/badge/Difficulty-Easy-brightgreen" alt="Difficulty: Easy" />
<hr>

<p>You have a <code>RecentCounter</code> class which counts the number of recent requests within a 3000-millisecond time frame.</p>

<p><strong>Implement the <code>RecentCounter</code> class:</strong></p>
<ul>
  <li><code>RecentCounter()</code> Initializes the counter with zero recent requests.</li>
  <li><code>int ping(int t)</code> Adds a new request at time <code>t</code> (milliseconds) and returns the number of requests that have happened in the past <code>3000</code> milliseconds (inclusive range <code>[t - 3000, t]</code>). Each call uses a strictly larger <code>t</code> than the previous call.</li>
</ul>

<p>&nbsp;</p>

<p><strong class="example">Example 1:</strong></p>
<div class="example-block">
  <p><strong>Input</strong></p>
  <pre>
["RecentCounter","ping","ping","ping","ping"]
[[],[1],[100],[3001],[3002]]
  </pre>
  <p><strong>Output</strong></p>
  <pre>
[null,1,2,3,3]
  </pre>
  <p><strong>Explanation</strong></p>
  <pre>
RecentCounter recentCounter = new RecentCounter();
recentCounter.ping(1);     // requests = [1], range is [-2999, 1]   -> 1
recentCounter.ping(100);   // requests = [1, 100], range [-2900,100] -> 2
recentCounter.ping(3001);  // requests = [1, 100, 3001], [1,3001]    -> 3
recentCounter.ping(3002);  // requests = [1, 100, 3001, 3002], [2,3002] -> 3
  </pre>
</div>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>
<ul>
  <li><code>1 &lt;= t &lt;= 10<sup>9</sup></code></li>
  <li>At most <code>10<sup>4</sup></code> calls will be made to <code>ping</code>.</li>
  <li><code>t</code> is strictly increasing across calls.</li>
</ul>
