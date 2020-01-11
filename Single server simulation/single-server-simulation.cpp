#include <iostream>

using namespace std;

int main()
{
    int n=8;
    int m,i,dif,j,nat,ndt,clock,cdt[n]={0},cat[n]={0},idt[n] = {0},ql[n] = {0};
    int AT[] = {0,10,15,35,30,10,5,5};
    int ST[] = {20,15,10,5,15,15,10,10};
    cat[0]=0;
    for(m=1;m<n;m++)
    {
        cat[m] = cat[m-1]+AT[m];
    }

    //initializing
    i=1,j=0;
    nat= cat[1];
    ndt = ST[0];
    cdt[0] = ST[0];

    for(i = 1,j=0;j<n;)
    {
        if(i>n)
        {
            clock = ndt;
            cdt[j+1]= cdt[j]+ST[j+1];
            ndt = cdt[j+1];
            j = j+1;
        }
        else
        {

            dif = nat-ndt;
            if(dif<0)
            {
                clock= nat;
                nat = cat[i+1];
                ql[i] = i-j;
                i=i+1;
            }
            else if(dif>0)
            {
                if((i-j)>1)
                {
                    clock = ndt;
                    cdt[j+1]= cdt[j]+ST[j+1];
                    ndt = cdt[j+1];
                    j = j+1;
                }
                else
                {
                    idt[i] = dif;
                    clock = nat;
                    nat= cat[i+1];
                    cdt[j+1]= cat[i]+ST[j+1];
                    ndt = cdt[j+1];
                    j = j+1;
                    i = i+1;

                }
            }
            else
            {
                ql[i] = ql[i-1];
                clock = nat;
                nat= cat[i+1];
                cdt[j+1]= cat[i]+ST[j+1];
                ndt= cdt[j+1];
                j = j+1;
                i = i+1;

            }
        }

    }
    cout<<"AT\t"<<"ST\t"<<"CAT\t"<<"CDT\t"<<"QL\t"<<"IDT\t"<<endl;
    for(i=0;i<n;i++)
    {

        cout<<AT[i]<<"\t"<<ST[i]<<"\t"<<cat[i]<<"\t"<<cdt[i]<<"\t"<<ql[i]<<"\t"<<idt[i]<<"\t"<<endl;
    }



    return 0;
}
