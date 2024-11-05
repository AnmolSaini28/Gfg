<h2><a href="https://www.geeksforgeeks.org/problems/maximize-number-of-1s0905/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Maximize Number of 1's</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary array&nbsp;<strong>arr</strong>&nbsp;and an integer&nbsp;<strong>m</strong>. You are allowed to flip 0 to 1 at most m times. Find the maximum number of&nbsp;<strong>consecutive 1's&nbsp;</strong>present in the array after performing the operation at most m times<strong>.</strong>&nbsp;<br><br><strong>Note</strong>: 0-based indexing is followed.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 0, 1], m = 1
<strong>Output: </strong>3
<strong>Explanation: </strong>Maximum subarray of <span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">consecutive</span> 1's is of size 3 which can be obtained after flipping the zero present at the 1st index.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1], m = 2
<strong>Output: </strong>8
<strong>Explanation: </strong>Maximum subarray of consecutive 1's is of size 8 which can be made after flipping the zeros at 5th and 7th index.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 1], m = 2
<strong>Output: </strong>2
<strong>Explanation: </strong>Since the array is already having the max consecutive 1's, hence we dont need to perform any operation. Hence the answer is 2</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>5</sup><br>0 &lt;= m &lt;= arr.size()<br>0 &lt;= arr[i] &lt;= 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;