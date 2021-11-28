
# "10844"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/10844/blob/main/10844_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

This problem takes me some time to solve. I thought I will easy because the problem name is 'easy stair number' ;(

At first, I tried to find recurrence relation. (dp[i] = dp[i-1] * 2 - 2(i-2) )

I failed with it and write down the cases in a tree pattern.

After that, I found that there is no pattern with is problem. 

The next though started from the tree structure I write.

        - i-1
    
i  --|

        - i+1 

With it I found there are 3 cases.

1. after 0, there is only one option (1)

2. after 9, there is only one option (8)

3. after 2~8, there is two options (i-1, i+1)

with these information, I tried to check the end number of stair numbers which leads to the equation in the code.


-------------------------------------------------------------------------------------------------------------------------------------

After search the internet, I found better solution, which is called sliding window.

Rather than making a N * 11 array, sliding window show to reuse the previouse array. 
By doing so, I can save more space. Sliding window code is also in the repository. Please check ;)

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

