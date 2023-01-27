makePalindrome :: Int -> Int
makePalindrome num = aux num 0
    where aux num ans | num > 0 = aux (num `div` 10) (ans * 10 + num `mod` 10)
                      | otherwise = ans

isPalindrome :: Int -> Bool
isPalindrome num = num == makePalindrome num

{-
Note that the number is probably 6 digits, i.e. abccba = p * q, where a, b, c is digit.
we can rewrite it as:
100000a + 10000b + 1000c + 100c + 10b + a = p * q
100001a + 10010b + 1100c = p * q
which can be factored to:
11 * (9091a + 910b + 100c) = p * q
=> p * q must be divisible by 11

Since p * q is divisible by 11, we start with 990 as the largest possible number in the given range that is also divisible by 11. 
-}

main :: IO()
main = do
    print $ maximum $ filter isPalindrome [x * y | x <- [990, 979.. 99], y <- [999, 998..99]]