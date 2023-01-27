minus :: Ord a => [a] -> [a] -> [a]
minus lx@(x:xs) ly@(y:ys) = case compare x y of 
  LT -> x : minus xs ly
  EQ ->     minus xs ys 
  GT ->     minus lx ys
minus xs _ = xs

primesTo :: Integral a => a -> [a]
primesTo m = 2 : sieve [3,5..m]  where
  sieve (p:xs) 
    | p*p > m   = p : xs
    | otherwise = p : sieve (xs `minus` [p*p, p*p+2*p..])

main :: IO()
main = do
    print $ sum $ primesTo 2000000