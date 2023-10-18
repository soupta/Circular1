#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
// Generarea matricei de distanta intre 2 litere
void distanta(int mat[26][26])
{

    for (int i = 0; i < 26; i++)
        for (int j = 0; j < 26; j++)
            if (abs(j - i) < 13)
                mat[i][j] = abs(j - i); // Daca diferenta dintra o litera (j) si cealalta (i) este sub 13 se merge clockwise
            else
                mat[i][j] = 13 - abs(i - j) % 13; // Daca diferenta dintre o litera (j) si cealalta (i) este peste 13 se merge counterclockwise
}

int main()
{
    int dist[26][26];
    distanta(dist);

    ifstream in("circular.in");
    ofstream out("circular.out");
    string albastre;
    string rosii;
    int c;
    int timp = 0;
    in >> c >> albastre >> rosii;

    if (c == 1)
    {
        // Se aduna toaaate distantele intre litere 2 cate doua

        timp += dist[albastre[0] - 'A'][0]; // Totimpul se incepe cu acul pe 'A'
        for (int i = 0; i < albastre.size() - 1; i++)
        {
            timp += dist[albastre[i] - 'A'][albastre[i + 1] - 'A']; // Scadem codul ascii 'A' pentru a pune literele intra 0 si 25
        }
        out << timp;
    }
    else
    {
        int posibilitati = 1, pos_crt, litera_crt;
        timp += dist[albastre[0] - 'A'][0];
        string minim;
        minim.push_back(albastre[0]);
        int timp_crt = 1000;
        char lit_crt;
        for (int i = 0; i < albastre.size() - 1; i++)
        {
            timp_crt = 1000;
            pos_crt = 1;
            for (int j = 0; j < rosii.size(); j++)
            {

                if (dist[albastre[i] - 'A'][rosii[j] - 'A'] + dist[albastre[i + 1] - 'A'][rosii[j] - 'A'] < timp_crt)
                {
                    timp_crt = dist[albastre[i] - 'A'][rosii[j] - 'A'] + dist[albastre[i + 1] - 'A'][rosii[j] - 'A'];
                    pos_crt = 1;
                    lit_crt = rosii[j];
                }
                else if (dist[albastre[i] - 'A'][rosii[j] - 'A'] + dist[albastre[i + 1] - 'A'][rosii[j] - 'A'] == timp_crt)
                    pos_crt++;
            }
            timp += timp_crt;
            posibilitati *= pos_crt%666013;
            minim.push_back(lit_crt);
            minim.push_back(albastre[i + 1]);
        }
        out << timp << endl;
        out << posibilitati << endl;
        out << minim;

    }
}