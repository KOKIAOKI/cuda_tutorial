#include <iostream>
#include <vector>

int main(void)
{
  int vector_size = 100;
  std::vector<int> a;
  a.reserve(vector_size);
  std::cout << "a size" << a.size() << std::endl;
  int count = 0;
  while (count != 10)
  {
    for (int i = 0; i < vector_size; i++)
    {
      a.emplace_back(10);
    }
    std::cout << "a size before clear" << a.size() << std::endl;
    a.clear();
    std::cout << "a size after clear" << a.size() << std::endl;

    count++;
  }

  return 0;
}