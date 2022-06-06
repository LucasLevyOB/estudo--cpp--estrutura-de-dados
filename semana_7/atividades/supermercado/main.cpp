#include <bits/stdc++.h>
#include <iostream>
#include "Product.cpp"

using namespace std;

int main()
{
  int n, m, p, q;
  cin >> n >> m >> p >> q;
  vector<Product> produtosN;
  vector<Product> produtosM;
  vector<Product> carrinho;
  produtosN.reserve(n + m);
  produtosM.reserve(m);
  carrinho.reserve(p + q);

  for (int i = 0; i < n; i++)
  {
    string nome;
    int preco;
    cin >> nome >> preco;
    produtosN.push_back(Product(nome, preco));
  }

  for (int i = 0; i < m; i++)
  {
    string nome;
    int preco;
    cin >> nome >> preco;
    produtosM.push_back(Product(nome, preco));
  }

  sort(produtosN.begin(), produtosN.end());
  sort(produtosM.begin(), produtosM.end());

  for (int i = 0; i < p; i++)
  {
    carrinho.push_back(produtosN[i]);
  }

  for (int i = 0; i < q; i++)
  {
    carrinho.push_back(produtosM[i]);
  }

  sort(carrinho.begin(), carrinho.end());

  for (int i = 0; i < p + q; i++)
  {
    cout << carrinho[i].getName();
    if (i != p + q - 1)
    {
      cout << " ";
    }
  }
  cout << endl;
}