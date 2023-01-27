{-
There are floor(n / 3) numbers between 1 and n which are divisible by 3
e.g. in the range from 1 to 10 there are floor(10 / 3) = 3 numbers (it's 3, 6, and 9).
Their sum is 3 + 6 + 9 = 18. 
This can be written as: (3 + 6 + 9) = 3 * (1 + 2 + 3) = 3 * sum{1..3} = 3 * sum{1..floor(10 / 3)} = 3 * sum{1..(n / 10)};
because n is an integer number, in C++ for each n, x is an int, n / x = floor(n / x);

Let's pay attention, there are floor(n / 15) numbers between 1 and n which are divisible by 15,
which means they are part of both sums. We should not count numbers as 15, 30, 45, etc... twice in our sum.
-}

sumOneToN :: Int -> Int
sumOneToN n = n * (n + 1) `div` 2

main :: IO()
main = do
    let sumOfThrees  = 3  * sumOneToN (999 `div` 3)
    let sumOfFive    = 5  * sumOneToN (999 `div` 5)
    let sumOfFifteen = 15 * sumOneToN (999 `div` 15)
    print (sumOfThrees + sumOfFive - sumOfFifteen)