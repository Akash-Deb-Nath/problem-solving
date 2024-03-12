#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> v;
    double E;
    double constant = 0.0284;
    double amplitude = -0.0092;
    double phase = 0.818;
    double sd = 0.079;

    // Set the seed for random number generation
    srand(time(0));

    for (int i = 0; i < 24; i++)
    {
        constant = constant + constant * 0.1;
        amplitude = amplitude + amplitude * 0.1;
        phase = phase + phase * 0.1;
        sd = sd + sd * 0.1;

        // cout << i << ". " << constant << " " << amplitude << " " << phase << " " << sd << endl;

        // Corrected sinusoidal function
        E = constant + amplitude * sin(2 * M_PI * (i / 12.0) + phase) + (rand() % (int)((sd - (-sd)) * 100) + (-sd * 100)) / 100.0;

        // cout << "E = " << E << endl;
        v.push_back(abs(E));
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " , ";
    }

    return 0;
}