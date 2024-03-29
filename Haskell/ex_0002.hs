{-
Each new term in the Fibonacci sequence is generated by sum the previous two terms.
By starting with 1 and 2, next terms can be found as:
a <- b
b <- (a + b)
-}

fibs :: [Integer]
fibs = aux 1 1
    where aux a b = a:aux b (a + b)

main :: IO()
main = do
    print $ sum $ filter even $ takeWhile (< 4000000) fibs
    