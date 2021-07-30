#include<iostream>
using namespace std;
int main()
{
int row, col, ma[2][2], mat[2][2];

cout<<"Enter the number of rows:";
cin>>row;
cout<<"Enter the number of column : ";
cin>>col;
cout <<"Enter the elements of first 1st matrix: ";
for (int i = 0;i<row;i++ ) {
for (int j = 0;j < col;j++ ) {
cin>>ma[i][j];
}
}
cout <<"Enter the elements of first 2st matrix: ";
for (int i = 0;i<row;i++ ) {
for (int j = 0;j<col;j++ ) {
cin>>mat[i][j];
}
}

int m1,m2,m3,m4,m5,m6,m7;
m1 = (ma[0][0]+ma[1][0])*(mat[0][0]+mat[0][1]);
m2 = (ma[0][1]+ma[1][1])*(mat[1][0]+mat[1][1]);
m3 = (ma[0][0]-ma[1][1])*(mat[0][0]+mat[1][1]);
m4 = (ma[0][0]) * (mat[0][1] - mat[1][1]);

m5=(ma[1][0] + ma[1][1]) * mat[0][0];
m6=(ma[0][0] + ma[0][1]) * mat[1][1];
m7 = (ma[1][1]) * (mat[1][0] - mat[0][0]);
cout<<"VALUE OF M1: "<<m1<<endl;
cout<<"VALUE OF M2: "<<m2<<endl;
cout<<"VALUE OF M3: "<<m3<<endl;
cout<<"VALUE OF M4: "<<m4<<endl;
cout<<"VALUE OF M5: "<<m5<<endl;
cout<<"VALUE OF M6: "<<m6<<endl;
cout<<"VALUE OF M7: "<<m7<<endl;
int I,J,K,L;
I=m2+m3-m6-m7;
J=m4+m6;
K=m5+m7;
L=m1-m3-m4-m5;
cout<<"value of I : "<<I<<endl;
cout<<"value of J : "<<J<<endl;
cout<<"value of K : "<<K<<endl;
cout<<"value of L : "<<L<<endl;
cout<<"Elements of New Matrix are :"<<I<<"\n"<<J<<"\n"<<K<<"\n"<<L <<endl;

return 0;
}
