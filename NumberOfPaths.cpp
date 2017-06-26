#include<iostream>

using namespace std;

int b[4][5];

/*int mxe(int a,int b,int c){

int mx;

a<b?b<c?mx=c:mx=b:mx=a;

return mx;

}*/

void mi(int a[4][5]){

for(int i=0;i<4;i++){

    for(int j=0;j<5;j++){

      //  if(i==0 && j==0)
       // b[i][j]=a[i][j]+b[i][j-1];

        if(i==0)
        b[i][j]=1;

       // else if(j==0)
        //b[i][j]=a[i][j]+b[i-1][j];

        else if(j==0)
        b[i][j]=1;

       // else if(j==4)
        //b[j][i]=a[i][j]+max(b[j][i-1],b[j-1][i-1]);

        else
        b[i][j]=b[i][j-1]+b[i-1][j];

    }

    }


}


int main(){



mi(b);

for(int i=0;i<4;i++){
    for(int k=0;k<5;k++){

        cout<<b[i][k]<<" ";

    }
cout<<endl;
}

}
