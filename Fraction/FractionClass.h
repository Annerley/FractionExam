#pragma once
#include <iostream>
using namespace std;




class FractionClass
{
public:
    FractionClass()
    {
        numenator = NULL;
        denominator = NULL;
    }
    FractionClass(int a, int b)
    {
        numenator = a;
        denominator = b;
        this->reduce();
    }

	void reduce()
	{
        int nod = evklid(numenator, denominator);
        if (nod > 1)
        {
            numenator /= nod;
            denominator /= nod;
        }
	}

    void print()
    {
        cout << numenator << "/" << denominator << endl;

        cout << double(numenator) / double(denominator) << endl;
    }

    const FractionClass operator+(const FractionClass& rv) const 
    {
        FractionClass tmp;
        if (rv.denominator != this->denominator)
        {
            tmp.numenator = this->numenator * rv.denominator + rv.numenator * this->denominator;
            tmp.denominator = this->denominator * rv.denominator;
        }
        else
        {
            tmp.numenator = this->numenator + rv.numenator;
            tmp.denominator = this->denominator;
        }

        tmp.reduce();
        return tmp;
    }


    const FractionClass operator-(const FractionClass& rv) const
    {
        FractionClass tmp;
        if (rv.denominator != this->denominator)
        {
            tmp.numenator = this->numenator * rv.denominator - rv.numenator * this->denominator;
            tmp.denominator = this->denominator * rv.denominator;
        }
        else if((rv.denominator == this->denominator)&&(rv.numenator == this->numenator))
        {
            tmp.numenator = 0;
            tmp.denominator = this->denominator;
            return tmp;
        }
        else
        {
            tmp.numenator = this->numenator - rv.numenator;
            tmp.denominator = this->denominator;
        }

        tmp.reduce();
        return tmp;
    }

private:
    int numenator;
    int denominator;

    int evklid(int a, int b)
    {
        while (a != b) {
            if (a > b) {
                long tmp = a;
                a = b;
                b = tmp;
            }
            b = b - a;
        }
        return a;
    }
};



