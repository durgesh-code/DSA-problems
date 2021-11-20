#include<bits/stdc++.h>
#include<limits>
#include <algorithm>
#include<bitset>
using namespace std;

std::string BinaryAdd(std::string First, std::string Second)
{
    int Carry = 0;
    std::string Result;

    while(Second.size() > First.size())
        First.insert(0, "0");

    while(First.size() > Second.size())
        Second.insert(0, "0");

    for (int I = First.size() - 1; I >= 0; --I)
    {
        int FirstBit = First[I] - 0x30;
        int SecondBit = Second[I] - 0x30;
        Result += static_cast<char>((FirstBit ^ SecondBit ^ Carry) + 0x30);
        Carry = (FirstBit & SecondBit) | (SecondBit & Carry) | (FirstBit & Carry);
    }

    if (Carry)
        Result += 0x31;

    std::reverse(Result.begin(), Result.end());
    return Result;
}

std::string BinaryMulDec(std::string value, int amount)
{
    if (amount == 0)
    {
        for (auto &s : value)
        {
            s = 0x30;
        }
        return value;
    }

    std::string result = value;
    for (int I = 0; I < amount - 1; ++I)
        result = BinaryAdd(result, value);

    return result;
}

std::int64_t CalcPowers(std::int64_t value)
{
    std::int64_t t = 1;
    while(t < value)
        t *= 10;

    return t;
}

std::string ToBinary(const std::string &value)
{
    std::vector<std::string> sets;
    std::vector<int> multipliers;

    int Len = 0;
    int Rem = value.size() % 4;

    for (auto it = value.end(), jt = value.end(); it != value.begin() - 1; --it)
    {
        if (Len++ == 4)
        {
            std::string t = std::string(it, jt);
            sets.push_back(std::bitset<16>(std::stoull(t)).to_string());
            multipliers.push_back(CalcPowers(std::stoull(t)));
            jt = it;
            Len = 1;
        }
    }

    if (Rem != 0 && Rem != value.size())
    {
        sets.push_back(std::bitset<16>(std::stoull(std::string(value.begin(), value.begin() + Rem))).to_string());
    }

    auto formula = [](std::string a, std::string b, int mul) -> std::string
    {
        return BinaryAdd(BinaryMulDec(a, mul), b);
    };

    std::reverse(sets.begin(), sets.end());
    std::reverse(multipliers.begin(), multipliers.end());
    std::string result = sets[0];

    for (std::size_t i = 1; i < sets.size(); ++i)
    {
        result = formula(result, sets[i], multipliers[i]);
    }

    return result;
}

void ConcatenateDecimals(std::int64_t* arr, int size)
{
    auto formula = [](std::int64_t a, std::int64_t b) -> std::int64_t
    {
        return (a * CalcPowers(b)) + b;
    };

    std::int64_t val = arr[0];

    for (int i = 1; i < size; ++i)
    {
        val = formula(val, arr[i]);
    }

    std::cout<<val;
}
int main(){
    long long t; 
    cin>>t;
    while(t--){
        long long c;
        cin>>c;
        string s = ToBinary(c);
        cout<<"s = "<<s<<endl;
        string a = "1" , b = "0";
        for(int i = 1 ; i<s.length();i++)
        {
            if(s[i] == '1')
            {
                a+='0';
                b+'1';
            }
            if(s[i] == '0')
            {
                a+='1';
                b+='1';
            }
        }
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
        
        long long A = stoi(a , 0 ,2) , B = stoi(b , 0 , 2);
        cout<<(A*B)<<endl;

    }
}