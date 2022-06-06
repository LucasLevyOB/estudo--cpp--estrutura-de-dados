#include <bits/stdc++.h>

using namespace std;

class Product
{
private:
  string name;
  int price;

public:
  Product(string n, int p)
  {
    name = n;
    price = p;
  }
  string getName()
  {
    return name;
  }
  bool operator<(const Product &a)
  {
    if (price != a.price)
    {
      return price < a.price;
    }
    else
    {
      return name < a.name;
    }
  }
  friend ostream &operator<<(ostream &os, const Product &p);
};

ostream &operator<<(ostream &os, const Product &p)
{
  os << "(" << p.name << "," << p.price << ")";
  return os;
}