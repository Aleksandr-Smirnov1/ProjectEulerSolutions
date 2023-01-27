bruteForceIsPrime :: Int -> Bool
bruteForceIsPrime n =
    n == 2 ||
    all (\d -> n `mod` d /= 0) (2:[3,5..floor(sqrt (fromIntegral n))])

bruteForcePrime :: [Int]
bruteForcePrime = 2:[c | c <- [3,5..], bruteForceIsPrime c]

main :: IO()
main = do
    print $ bruteForcePrime !! 10000

 