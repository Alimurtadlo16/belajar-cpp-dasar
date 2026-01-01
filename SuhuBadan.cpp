#include <iostream>

using namespace std;

int main() 
{
    float suhu_badan=78;

    int status_demam = (suhu_badan>37 && suhu_badan<39 && suhu_badan!=0 );
    cout << "status demam ringan =" << status_demam << endl;

    return 0;
}