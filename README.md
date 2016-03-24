Fizzdrome Challenge 
===================

Challenge #1: Fizz Buzz
------------------------
This is an old one but a good one with a little twist. That twist is that the solution must be coded in [Haskell].

### The Challenge
Write a script that reads 3 command line arguments:

1. ***first divisor*** - This is the first divisor to check against the dividend.
2. ***second divisor*** - This is the second divisor to check against the dividend.
3. ***upper bound*** - This is the maximum dividend.

The script will cycle through the range of `[0..<upper bound>]` and print one of the following strings:

* If divisible by both the `first divisor` and `second divisor` print `FizzBuzz`
* If divisible by just the `first divisor` then print `Fizz`
* If divisible by just the `second divisor` then print `Buzz`
* If not divisible by either divisor then print the dividend itself.

Here is some the sample output for the arguments `2 4 6`:

```bash
1
Fizz
3
FizzBuzz
5
Fizz
```

Challenge #2: Palindrome and Reverse Lexical Sort
-------------------------------------------------
This challenge is a combination of two different challenges. This tests your understanding of strings and their representation in different languages. Complete this challenge in 2 different languages, one interpreted language (Python) and the other a compiled, statically typed language (C).

For this challenge take in a text file that is given as a command line argument. That text file will be composed of several lines of strings. Take each line and determine if that line is a palindrome, if it is, then print `YES`, else print `NO`.  Then, print a `|`, then the line sorted in reverse lexical order without the white space characters.

Example Input:
```bash
12344321
00982343
pizza
aibohphobia
Influential Publishers
Xanax
```

Example Output:
```bash
YES | 44332211
NO | 98433200
NO | zzpia
YES | pooiihhbbaa
NO | uutssrnnllliihfeebaPI
YES | xnaaX
```
