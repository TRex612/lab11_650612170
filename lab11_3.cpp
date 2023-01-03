#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double x[5000];
    double y,z ;
    int i = 0;
    string textline ;
    ifstream score("score.txt");
    cout << setprecision(3);
    while (getline(score,textline))
    {
        x[i] = atof(textline.c_str());
        i++;
    }
    
    cout << "Number of data = "<<i<<'\n';
    for (int u = 0; u <= i; u++)
    {
        y += x[u];
    }
    y=y/i;
    cout << "Mean = "<<y<<'\n';

    for (int p = 0; p < i; p++)
    {
        z += pow(x[p]-y,2) ;
    }
    z = sqrt(z/i);

    cout << "Standard deviation = "<< z <<'\n';
    

    
    

    




    return 0 ;
}