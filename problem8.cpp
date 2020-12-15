#include <iostream>
#include <string>

int main()
{
 
    unsigned int length;
    unsigned int span;
    std::string number;
    std::cin >> length >> span >> number;
    unsigned long long best = 0;
    for (int start = 0; start + span < length; start++)
    {
      unsigned long long current = 1;
      // convert digits from ASCII to numbers and multiply
      for (unsigned int i = 0; i < span; i++)
        current *= number[start + i] - '0';

      // better than before ?
      if (best < current)
        best = current;
    }

    std::cout << best << std::endl;
  
  return 0;
}
