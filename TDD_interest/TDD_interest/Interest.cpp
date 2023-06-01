#include <cmath>

using namespace std;

class Interest
{
public:
    explicit Interest(double _dAmount, double _dInterest)
        : dAmount(_dAmount), dInterest(_dInterest) {}

    double GetExpectMoneyAfterYears(int nYears)
    {
        double dExpectAmount = dAmount;

        for (int i = 0; i < nYears; i++)
        {
            dExpectAmount *= (100 + dInterest) / 100;
        }

        return floor(dExpectAmount);
    }
    
    void ApplyInterst()
    {
        dAmount *= (100 + dInterest) / 100;
    }

    void SetInterest(double _dInterest)
    {
        dInterest = _dInterest;
    }

    double GetAmount()
    {
        return floor(dAmount);
    }
private:
    double dAmount;
    double dInterest;
};