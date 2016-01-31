/*Member functions
Overload the insertion and extraction operators to display and read the matrix objects.
operators
 operator overloaded function to do the following on matrix object
Matrix cMatrix;
cMatrix(0, 2) = 5; // Initialize the first row third column element of cMatrix objectto 5
cMatrix(); // erase the elements of cMatrix object.
cout << cMatrix(0 2);// display the element of cMatrix object*/

#include <iostream>

using namespace std;

class matrix
{
    short int rows;
    short int col;
    int i,j;
    int arr[20][20];
    public:
        friend ostream& operator<<(ostream & out ,matrix & b);
        friend istream& operator>>(istream &a,matrix &);
};
ostream& operator<<(ostream & out ,matrix & b)
{
    out<<"Enter the elements";
    return out;
}
istream& operator>>(istream & a ,matrix & c)
{
    for(i.c=1;cmatrix.i<=rows;cmatrix.i++)
    {
        for(cmatrix.j=1;cmatrix.j<=col;cmatrix.j++)
        {
            a>>arr[20][20];
        }
    }
    return a;
}
int main()
{
    matrix cmatrix;
    cout<<cmatrix;
    cmatrix(0, 2) = 5;
    cmatrix();
    cout << cmatrix(0,2);
    return 0;
}
