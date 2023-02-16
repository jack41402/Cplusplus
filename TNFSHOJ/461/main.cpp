#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<vector<double>> matrix(11) ;
    vector<vector<double>> out(11) ;
    string line ;
    int i=0 ;
    ifstream file("D:\\table.csv" , ios::in) ;
    while (getline(file , line , '\n') )
    {
        istringstream templine(line) ; // string 轉換成 stream
        string data ;
        while (getline(templine , data , ',') )
        {
            matrix[i].push_back(atof(data.c_str())) ;
        }
        ++i ;
    }
    for (int i=0 ; i<11 ; ++i)
    {
        for (int j=0 ; j<4 ; ++j)
        {
            out[i].emplace_back() ;
        }
    }    file.close();
    for (int i=1 ; i<10 ; ++i)
    {
        for (int j=0 ; j<4 ; ++j)
        {
            out[i][j] = matrix[i][j] - matrix[i-1][j] ;
        }
    }
    out[0][0] = matrix[0][0] , out[0][1] = matrix[0][1] , out[0][2] = matrix[0][2] , out[0][3] = matrix[0][3] ;
    //writefile
    ofstream ofs ;
    ofs.open("D:\\table1.csv");
    for (int i=0 ; i<10 ; ++i)
    {
        for (int j=0 ; j<4 ; ++j)
        {
            ofs << out[i][j] <<"," ;
            cout << i << ' ' << j << ' ' << out[i][j] << endl ;
        }
        ofs << endl ;
    }
    ofs.close();
    return 0;
}
