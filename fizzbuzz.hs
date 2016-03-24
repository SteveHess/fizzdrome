{-
Challenge #1: Fizz Buzz
Enter file directory and compile with: ghc -o fizzbuzz fizzbuzz.hs
Run with ./fizzbuzz 2 4 6 or any three other desired integer parameters
-}

import System.Environment

{- 
The value of num is the range iterations.
If their is no remainder when dividing by the value of num and the first divisor
and no remainder when dividing by the value of num with the second divisor, 
then print 'FizzBuzz'. 
If only the first divisor and num divide evenly, print 'Fizz'.
If only the second divisor and num divide evenly, print 'Buzz'.
Otherwise, print the value of num (iterator value) 
-}
fizz_buzz firstDivisor secondDivisor num
    | num `mod` firstDivisor == 0 
        && num `mod` secondDivisor == 0 = "FizzBuzz"
    | num `mod` firstDivisor == 0 = "Fizz"
    | num `mod` secondDivisor == 0 = "Buzz"
    | otherwise = show num


main = do

    -- read the 3 command line arguments and store as integers 
    (fD:sD:uB:_) <- getArgs
    let firstDivisor = read fD :: Integer
    let secondDivisor = read sD :: Integer
    let upperBound = read uB :: Integer

    -- pass parameters to fizz_buzz function
    mapM_ (putStrLn) [fizz_buzz firstDivisor secondDivisor x | x <- [1..upperBound]]

