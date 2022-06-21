#ifndef DISJUNTOS_HPP
#define DISJUNTOS_HPP
#include <vector>
#include <algorithm>

#include <bits/stdc++.h>

using namespace std;

class Disjuntos
{

private:
    int n;
    vector<int> p; // p[i] = parent of i

public:
    Disjuntos(int n)
    {
        this->n = n;
        p.resize(n);
        for (int i = 0; i < n; i++)
        {
            p[i] = i + 1;
        }
    }
    void une(int x, int y)
    {
        // cout << "une" << endl;
        // cout << x << " - " << this->p[x] << " | " << y << " - " << this->p[y] << endl;
        if (this->p[x] != this->p[y])
        {
            this->p[y] = this->p[x];
        }
        // cout << "unidos" << endl;
        // cout << x << " - " << this->p[x] << " | " << y << " - " << this->p[y] << endl;
    }
    int mesmo(int x, int y)
    {
        // cout << "mesmo" << endl;
        // cout << x << " - " << this->p[x] << " | " << y << " - " << this->p[y] << endl;
        return this->p[x] == this->p[y];
    }
};

#endif