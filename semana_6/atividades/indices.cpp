using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void ordena(vector<int> &Numeros, vector<int> &Indices) {
  vector<pair<int, int>> copiaNumeros;
  for (int i = 0; i < Numeros.size(); i++) {
    copiaNumeros.push_back(make_pair(Numeros[i], i));
  }

  sort(copiaNumeros.begin(), copiaNumeros.end());

  for (int i = 0; i < Numeros.size(); i++) {
    Numeros[i] = copiaNumeros[i].first;
    Indices[i] = copiaNumeros[i].second;
  }
}


int main() {
  int n;
  cin >> n;
  vector<int> numeros;
  numeros.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> numeros[i];
  }

  vector<int> indices;
  indices.resize(n);

  ordena(numeros, indices);

  for (int i = 0; i < n; i++)
  {
    cout << indices[i];
    if (i < n-1)
      cout << " ";
  }

  cout << endl;

  return 0;
}