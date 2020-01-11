#include<bits/stdc++.h>
using namespace std;

int main()
{
    double k1=0.008, k2=0.002, n, T=5,dt=0.1, a[100],b[100],c[100],t=0.0;
    a[0]=100.0;
    b[0]=50.0;
    c[0]=0.0;
    n=(double)(T/dt);
    cout<<n<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Time\t\t"<<"A(I)"<<"\t\tB(I)"<<"\t\tC(I)"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    for(int i=0; i<n;i++)
    {
        t=t+dt;
        a[i+1]=a[i]+(k2*c[i]-k1*a[i]*b[i]*dt);
        b[i+1]=b[i]+(k2*c[i]-k1*a[i]*b[i]*dt);
        c[i+1]=c[i]+2*(k1*a[i]*b[i]-k2*c[i])*dt;
        cout<<t<<"\t\t"<<a[i]<<"\t\t"<<b[i]<<"\t\t"<<c[i]<<endl;
    }

    return 0;
}
