//Convert number to reversed array of digits
//Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

//Example(Input => Output):
//35231 => [1,3,2,5,3]
//0 => [0]

using namespace std;
std::vector<int> digitize(unsigned long n)
{
    vector<int> numDigits;
    if (n == 0)
        return vector<int>({0});

    while (n > 0)
    {
        numDigits.push_back(n % 10);
        n /= 10;
    }
    return numDigits;
}
