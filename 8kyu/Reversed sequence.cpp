// DESCRIPTION:
// Build a function that returns an array of integers from n to 1 where n>0.

// Example : n=5 --> [5,4,3,2,1]

std::vector<int> reverseSeq(int n)
{
    std::vector<int> res;
    for (int i = n; i > 0; i--)
    {
        res.push_back(i);
    }
    return res;
}