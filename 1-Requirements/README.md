
# Requirements
## Introduction
>A prime factorization algorithm also known as Pollard Monte Carlo factorization method. There are two aspects to the Pollard rho factorization method. The first is the idea of iterating a formula until it falls into a cycle. Let n=pq, where n is the number to be factored and p and q are its unknown prime factors. Iterating the formula

 x_(n+1)=x_n^2+a (mod n), ----------------------(1)
 
>or almost any polynomial formula (an exception being x_n^2-2) for any initial value x_0 will produce a sequence of number that eventually fall into a cycle. The expected time until the x_ns become cyclic and the expected length of the cycle are both proportional to sqrt(n).

>However, since n=pq with p and q relatively prime, the Chinese remainder theorem guarantees that each value of x (mod n) corresponds uniquely to the pair of values (x (mod p)), x (mod q)). Furthermore, the sequence of x_ns follows exactly the same formula modulo p and q, i.e.,

x_(n+1)	=	[x_n (mod p)]^2+a (mod p)	  ----------------------(2)

x_(n+1)	=	[x_n (mod q)]^2+a (mod q).	----------------------(3)

>Therefore, the sequence (mod p) will fall into a much shorter cycle of length on the order of sqrt(p). It can be directly verified that two values x_1 and x_2 have the same value (mod p), by computing

GCD(|x_2-x_1|,n), 	               ----------------------(4)
which is equal to p.

>The second part of Pollard's method concerns detection of the fact that a sequence has become periodic. Pollard's suggestion was to use the idea attributed to Floyd of comparing x_i to x_(2i) for all i. A different method is used in Brent's factorization method.

>Under worst conditions, the Pollard rho algorithm can be very slow. 

## Research

- In the randomized factoring algorithm , the function f returns a value uniformly at
random from {0, . . . , p − 1} irrespective of the function argument. In Pollard’s rho algorithm, f is chosen to
be the ‘magic’ function f(x) = (x
2 + 1) mod N, where x ∈ ZN . Apparently, this choice of f behaves like
a ‘random’ function for all practical purposes. As to why it behaves like a random function no one really
knows - indeed, a rigorous analysis of Pollard’s rho algorithm is an open problem.

- Goal: Reduce gcd computatiom by novel choice of subset X

- Generation of subset X
Choose f(x):a polynomial Ex. f(x) = x^2+a

- Initially choose x1 belongs to Zn

- Generate Xi = f(Xi-1) mod n

## Algorithm

![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/1.png)

![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/2.PNG)

![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/3.PNG)

![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/4.PNG)

## Cost and Features and Timeline

Since the system uses only open source software, it is free of cost..!!
| S.No. | Features | Cost (Rs.) |
| ---   | ---      |  ---       |
| 1 | IDE | 0 |
| 2 | Calculation | 0 |
| 3 | Implementation | 0 |

## Defining Our System
![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/5.png)
## SWOT ANALYSIS
![](https://github.com/pradhanamit/SDLC-Project/blob/main/1-Requirements/swot-file.jpg)

# 4W&#39;s and 1&#39;H

## Who:

>The program is helping hand for user to verify the result.It is not the fastest algorithm by far but in practice it outperforms trial division by many orders of magnitude. It is based on very simple ideas that can be used in other contexts as well.

## What:

>Finding factorization in seconds.

## When:

>Struggling with lot of calcutation ,when procession the algorithum.

## Where:

>For the complex problem the program can be used to check the output. 


# Detail requirements
## High Level Requirements:
--- TBD in Tabular Format 
-- ID | Description | Status (Implemented/Future)


##  Low level Requirements:
In the low level requirement, we must have the knowledge of basic calculation like gcd,modular inverse.
-- ID | Description | Status (Implemented/Future)
