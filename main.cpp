#include <iostream>
using namespace std;

float calcolaArea(float raggio)
{
    float area;

    area = 3.14159*raggio*raggio;

    return area;
}
float calcolaCirconferenza(float raggio)
{
    float circonferenza;

    circonferenza = 2*3.14159*raggio;

    return circonferenza;
}
int main()
{
    float r1, r2;

    cout << "Qual'è il raggio del primo cerchio?" << endl;

    cin >> r1;

    cout << "Qual'è il raggio del secondo cerchio?" << endl;

    cin >> r2;

    float area1, area2, circ1, circ2;

    area1=calcolaArea(r1);
    area2=calcolaArea(r2);
    circ1=calcolaCirconferenza(r1);
    circ2=calcolaCirconferenza(r2);

    cout << "L'area del primo cerchio è " << area1 << " cm e la circonferenza è " << circ1 << " cm." << endl;

    cout << "L'area del secondo cerchio è " << area2 << " cm e la circonferenza è " << circ2 << " cm." << endl;

    return 0;
}

