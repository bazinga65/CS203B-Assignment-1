# CS203B-Assignment-1
Coding assignment for the course Mathematics for Computer Science-III
 Problem Statement:
 1. Recruitment Problem
Google USA is going to visit IITK to hire the best qualiﬁed (good algorithmic and programming skills) student in his/her ﬁnal year. There are n applicants and n is obviously really huge since Google USA is oﬀering a huge salary. The following are the constraints:
Constraints
1. The interview panel will select only one applicant and the selection will be based totally on his/her qualiﬁcations which can be revealed only after the interview of the applicant.
2. The placement oﬃce of IITK has enforced that each applicant should be informed about his/her selection or rejection immediately after the interview.
Assumptions
1. The qualiﬁcation score of each person, revealed through interview, is a distinct number. You may assume it to be a real number in the interval (0,1). Alternatively, you may assume it to be a distinct integer in a suﬃciently large range.
2. The applicants appear for interview in a uniformly random order (Each permutation is equally likely).
Considering the contraints and the assumptions stated above, the interview panel of Google USA has devised the following strategy.
The strategy
Fix a number k < n. Interview and reject ﬁrst k applicants. After that continue conducting the interviews, and stop as soon as we ﬁnd an applicant better than the ﬁrst k applicants. If we dont ﬁnd any applicant better than the ﬁrst k applicants, then no one is hired.
The Objectives
Let pkn be the probability of selecting the best qualiﬁed applicant for a given k and n.
Objective 1 Think hard on calculating pkn using all the probability tools you know. You must not discuss this with anyone else. You should spend at least one hour on this task. Note that you are not supposed to submit anything for this part.
Objective 2 Estimate accurately the value of pkn for various values of k for a given n, and repeat it for values of n ∈ {100,200,300,...,1000}. You have to achieve this objective through a computer program. Calculate the value of k for each n that maximizes the probability pkn.
2. The tasks of the assignment
The code
You have to design a simple, neat, and eﬃcient program that estimates the probability mentioned above. You will have to upload its code before the deadline of the assignment.
The report
Prepare a report of single page. The report should have one plot that shows the behavior of pkn as function of k for a particular n (ideally the largest). The report should also have a table where you have to enter the optimal value of k (that achieves maximum pkn) for each n ∈{100,200,300,...,1000}. You may write any additional observation that you derived from the experiment. But be precise. It must not be more than a few sentences.
2
Hints and directions
1. Suppose you are given a coin that gives HEAD with probability p, and p is not equal to 1/2. How will you estimate p ?
2. Learn about various random number generators in library of C and choose the one suitable for the assignment (there could be mutiple such generators suitable for the assignment depending upon the code you write).
3. You might need to create an array of size n. Depending upon the code you write, you might either ﬁll it up using random numbers in (0,1) or ﬁrst ﬁll it up with integers from 1 to n, and then permute it randomly uniformly.
4. Choose the number of times you will repeat the experiment to estimate the corresponding probability (pkn) accurately. Your program may take a lot of time for this task. So you should make attempts to make your program eﬃcient.
