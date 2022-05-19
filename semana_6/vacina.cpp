using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

bool vefiricar(vector<int> &ForcaVacinas, vector<int> &Pacientes) {
  bool todosSalvos = true;
  sort(ForcaVacinas.begin(), ForcaVacinas.end());
  sort(Pacientes.begin(), Pacientes.end());

  for (int i = 0; i < ForcaVacinas.size(); i++) {
    bool salvou = false;
    for (int j = i; j < Pacientes.size(); j++)
    {
      if (Pacientes[j] != -1 && ForcaVacinas[i] > Pacientes[j]) {
        salvou = true;
        Pacientes[j] = -1;
        break;
      }
    }
    if (salvou == false) {
      todosSalvos = false;
      break;
    }
  }

    return todosSalvos;
}

int main() {
  int n;
  cin >> n;
  vector<int> forcaVacinas;
  forcaVacinas.resize(n);
  vector<int> pacientes;
  pacientes.resize(n);

  for (int i = 0; i < n; i++)
  {
    cin >> forcaVacinas[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> pacientes[i];
  }

  bool todosSalvos = vefiricar(forcaVacinas, pacientes);
  if (todosSalvos) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}