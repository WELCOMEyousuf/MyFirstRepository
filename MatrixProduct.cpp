///Multiple of matrix Dynamic

#include <iostream>
using namespace std;

void yousuf()
{
int m,n,M,N,p,q,P,Q, sum = 0;
    cout<<"Enter Row for First Matrix A :";
    cin>>M;
    cout<<"Enter Coloumn for First Matrix A :";
    cin>>N;
    int A[M][N];///First matrix
    cout<<"Enter 1st Matrix Elements in ["<<M<<"x"<<N<<"] Type Below..."<<endl;
    for(int m = 0; m<M; m++)
    {
        for(n = 0; n<N; n++)
        {
            cin>>A[m][n];
        }
    }
    cout<<"\nMatrix A : "<<endl;
    for(int m = 0; m<M; m++)
    {
        for(n = 0; n<N; n++)
        {
            cout<<A[m][n]<<"\t";
        }

        cout<<endl;
    }

    cout<<"\nEnter Row for Second Matrix A :";
    cin>>P;
    cout<<"Enter Coloumn for Second Matrix A :";
    cin>>Q;

    int B[P][Q];///Second Matrix
    cout<<"Enter 2nd Matrix Elements in ["<<P<<"x"<<Q<<"] Type Below..."<<endl;

    for( p = 0; p<P; p++)
    {
        for(q = 0; q<Q; q++)
        {
            cin>>B[p][q];
        }
    }

    cout<<"\nMatrix B : "<<endl;
    for( p = 0; p<P; p++)
    {
        for(q = 0; q<Q; q++)
        {
            cout<<B[p][q]<<"\t";
        }

        cout<<endl;
    }

    //cout<<"\nM = "<<M<<"\tQ = "<<Q<<endl;
    int MultMat[M][Q];
    if(N == P)
    {
    cout<<"\nN = "<<N<<"\tP = "<<P<<endl;
        for(m = 0 ; m<M; m++)
        {
            for(q = 0; q<Q; q++)
            {

                for(p = 0 ; p<P; p++)
                {
                    sum = sum + A[m][p]*B[p][q];
                }

                MultMat[m][q] = sum;
                sum = 0;
            }

        }

        cout<<"\nProduct of Matrix A.B :"<<endl;
        cout<<"And Size of Matrix :- ["<<M<<"x"<<Q<<"]"<<endl;
        for(m= 0; m<M; m++)
        {
            for(q = 0; q<Q; q++)
            {
                cout<<MultMat[m][q]<<"\t";
                //MultMat[m][q] = A[m][q]+B[m][q];
                //cout<<MultMat[m][q]<<"\t";

            }

            cout<<endl;
        }

    }

    else
    {

        cout<<"\n\nNot Possible???"<<endl;
        cout<<"A Matrix's Column Equale to B Matrix's Row is Requred...!!!"<<endl;


    }

}

int main()
{
    int option;
    do
    {
        cout<<"\n\n*-*-*-*-*-*-*-*-*-*-*-*-*///$_Main Menu_$\\\*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
        cout<<"Press 1 for Enter the your program ???"<<endl;
        cout<<"Press 0 for EXIT.....!!!"<<endl;
        cin>>option;
        switch(option)
        {
        case 1:
        cout<<"\n********<Y>-WeLcOmE-<Y>********"<<endl;
        yousuf();
        break;
        case 0:
        cout<<"\nExxxIT!!!"<<endl;
        break;
        default:
        cout<<"Enter the Right Number...Sir"<<endl;

        }

    }while(option !=0);

}
