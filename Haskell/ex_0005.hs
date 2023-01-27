-- Euclidean algorithm:Greatest Common Divisor
gcd' :: Integer -> Integer -> Integer
gcd' a b | b == 0 = a
         | otherwise = gcd' b (a `rem` b)

lcm' :: Integer -> Integer -> Integer
lcm' a b = (a * b) `div` (gcd' a b)

{-
We just have to find a Least Common Multiple (lcm) of 1, 2, ..., 20.
By definition lcm(1, 2, ..., 20) is divisible by all numbers through 1 to 20.

lcm(a, b) = | a * b | / gcd(a, b), where gcd is a Greatest Common Divisor
To find a a Greatest Common Divisor, use Euclidean algorithm:

so, lcm(x_1, x_2, x_3, ..., x_n) = lcm(lcm(x_1, x_2, x_3, ..., x_{n-1}, x_n) = ... = lcm(lcm(lcm(...), x_{n - 1}), x_n)
-}

main :: IO()
main = do
    print (foldl lcm' 1 [1..20])
