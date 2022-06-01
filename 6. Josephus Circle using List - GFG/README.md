# 6. Josephus Circle using List
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given two integers <strong>n </strong>and <strong>k</strong> where n represents the total number of people who are standing in a circle, and k represents the person who gets killed in each iteration. You need to find which person is the last man standing. The indexing here starts from one. The counting starts from the first&nbsp;person and after each killing, the counting resets and start from the next neighbour of the killed person.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 7, k = 3
<strong>Output:</strong>
4
<strong>Explanation:
</strong>There are 7 people in the circle. Let's
represent them as 1 2 3 4 5 6 7. Now, k
is 3, so every 3rd person gets killed.
So first killing is 3: <strong>1 2 3 4 5 6 7</strong><strong>. 
</strong>Now, the circle is 1 2 4 5 6 7. Now, we
start our count from the person who is
represented by 4 here as this person 
was the next in line to the killed
person. So, second person to be killled
is 6: <strong>1 2 4 5 6 7</strong><strong>. </strong>The circle now looks 
like 1 2 4 5 7. Now, we start the count
from 7. The third person to be killed is
2 as we are in a circle so 1 comes after
the 7. So killed person is 2: <strong>1 2 4 5 7</strong><strong>.
</strong>The circle now looks like 1 4 5 7. 
We start the count from 4, and we kill
the 3rd person from here. 7 gets killed.
<strong>1 4 5 7</strong>. The circle is 1 4 5. Start the
count from 1. The third person gets
killed, so 5 is dead. <strong>1 4 5</strong>. The circle 
looks 1 4. Start the count from 1 and
the third person is 1 itself, so 4 is
the last man standing.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 8, k = 2
<strong>Output:</strong>
1
<strong>Explanation:
</strong>Here n = 8 and k = 2.&nbsp; We move similarly
to above and get 1 as the last man
standing.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You are required to complete the function<strong> josephus()</strong> that takes<strong> two parameters n and k</strong> and <strong>returns </strong>an integer denoting<strong> the index of the last man standing</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= k, n &lt;= 20</span></p>
 <p></p>
            </div>