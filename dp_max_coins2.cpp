#include<iostream>

using namespace std;


int b[5][5]={0};


void mina(int a[5][5]){

    for(int i=0;i<5;i++){

    for(int j=0;j<5;j++){

        if(i==0 && j==0)
        b[i][j]=a[i][j]+b[i][j-1];

        else if(i==0)
        b[i][j]=a[i][j]+b[i][j-1];

        else if(j==0)
        b[i][j]=a[i][j]+b[i][j-1];

        else
        b[i][j]=a[i][j]+min(b[i-1][j],b[i][j-1]);

    }

    }


}
void mx(int a[5][5]){

for(int i=0;i<5;i++){

    for(int j=0;j<5;j++){

        if(i==0 && j==0)
        b[i][j]=a[i][j]+b[i][j-1];

        else if(i==0)
        b[i][j]=a[i][j]+b[i][j-1];

        else if(j==0)
        b[i][j]=a[i][j]+b[i-1][j];

        else
        b[i][j]=a[i][j]+max(b[i-1][j],b[i][j-1]);

    }

    }

}


int main(){

int c[5][5]={{1,2,3,4,5},{1,3,2,3,1},{2,3,4,1,3},{4,5,1,2,3},{5,6,3,4,2}};

mx(c);

for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){

        cout<<b[i][k]<<" ";

    }
cout<<endl;
}




    return 0;
}
