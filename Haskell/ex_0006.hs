
-- The sum of all numbers between 1 and n is sum{1..n} n = (n * (n + 1)) / 2
sumOneToN :: Integer -> Integer
sumOneToN n = (n * (n + 1)) `div` 2
-- The sum of all square of numbers between 1 and n is sum{1..n^2} n = (n * (n + 1) * (2n + 1)) / 6
sumOneToNTimesTwo :: Integer -> Integer
sumOneToNTimesTwo n = (n * (n + 1) * (2 * n + 1)) `div` 6; 

main :: IO()
main = do
    let sumN = sumOneToN 100
    let sumNTimesTwo = sumOneToNTimesTwo 100
    print (sumN * sumN - sumNTimesTwo)
