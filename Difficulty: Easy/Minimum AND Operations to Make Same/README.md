<h2><a href="https://www.geeksforgeeks.org/problems/min-operations--170645/1">Minimum AND Operations to Make Same</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p class="PDq2pG_selectionAnchorContainer" data-start="119" data-end="232"><span style="font-size: 14pt;">Given two non-negative integers <strong data-start="155" data-end="160" data-is-only-node="">a</strong> and <strong data-start="165" data-end="170">b</strong>, f</span><span style="font-size: 14pt;">ind the minimum number of the operations to make a and b equal.</span></p>
<p class="PDq2pG_selectionAnchorContainer" data-start="119" data-end="232"><span style="font-size: 14pt;">In one operation,</span></p>
<ul data-start="237" data-end="396">
<li data-section-id="tkefea" data-start="237" data-end="277"><span style="font-size: 14pt;"> Choose any non-negative integer <strong data-start="271" data-end="276">x</strong>. </span></li>
<li data-section-id="1b88jj0" data-start="280" data-end="394"><span style="font-size: 14pt;"> Select either a or b, and replace the selected number with the result of its bitwise AND with x. In other words, you can perform either <strong>a = a &amp; x</strong> or&nbsp;<strong>b = b &amp; x</strong>.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>a = 5, b = 12
<strong>Output: </strong>2
<strong>Explanation: </strong>In first operation replace a = a &amp; 4 = 4 after that replace b = b &amp; 6 = 4. Hence both are same after applying two operations.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>a = 100, b = 100
<strong>Output: </strong>0
<strong>Explanation</strong>: Both numbers already same.</span></pre></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Bit Magic</code>&nbsp;