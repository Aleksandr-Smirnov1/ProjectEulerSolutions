{-
We start our loop from 2 (as smallest prime)
Number N can be represented as N = i * (N / i), where (N / i is an integer)
If N / i is a composite number, loop will be continuing until N / i is a largest prime number.
Loop will be running until factor <= sqrt(N), because then only a prime is left.
-}

largestPrimeFactor :: Int -> Int
largestPrimeFactor n = aux n 2
    where aux n p | p * p > n = n
                  | n `mod` p == 0 =  aux (n `div` p) p
                  | otherwise = aux n (p + 1)

main :: IO()
main = do
    print (largestPrimeFactor 600851475143)