findProductOfTriplet :: [Integer]
findProductOfTriplet = [a * b * c | a <- [1..333], let b = (1000 * (500 - a)) `div` (1000 - a), let c = 1000 - a - b, a < b, a^2 + b^2 == c^2]

main :: IO()
main = do
    print $ head findProductOfTriplet