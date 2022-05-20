using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

bool verificarIgualdade(vector<int> &figurinhas1, vector<int> &figurinhas2) {
  sort(figurinhas1.begin(), figurinhas1.end());
  sort(figurinhas2.begin(), figurinhas2.end());
  bool saoIguais = true;
  for (int i = 0; i < figurinhas1.size(); i++) {
    if (figurinhas1[i] != figurinhas2[i]) {
      saoIguais = false;
      break;
    }
  }
  return saoIguais;
}

int main() {
  int n;
  cin >> n;
  vector<int> figurinhas1;
  figurinhas1.resize(n);
  vector<int> figurinhas2;
  figurinhas2.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> figurinhas1[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> figurinhas2[i];
  }

  bool saoIguais = verificarIgualdade(figurinhas1, figurinhas2);
  if (saoIguais) {
    cout << "1" << endl;
  } else {
    cout << "0" << endl;
  }
  return 0;
}