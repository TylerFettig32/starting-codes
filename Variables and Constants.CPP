/******************************************************************************
name: Tyler Fettig
Problem: Variables and Constants
Pseudocode: i didnt have an agarithm
notes: this is confusing but easy once learned
maintaince log:
Date 9/22/2020       Done: the entire thing

*******************************************************************************/
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    printf("Hello World \n");
    bool tf=false;
    int t=32,u=20,v=18;
    char r='r', q='q', h=32;
    string name="Tyler";
    string middle="James";
    string last="Fettig";
    double p=1.2,e=3.7,i=6.4;
    const double c=3.0e8;
    const float g=9.8;
    const double z=3.14159;
    const float x=5.3266;
    
    printf("tf=%i \n");
    printf("t=%d u=%d v=%d \n",t,u,v);
    printf("r=%c q=%c h=%cd \n",r,q,h);
    printf("name=%s \n",name.c_str());
    printf("middle=%s \n",middle.c_str());
    printf("last=%s \n",last.c_str());
    printf("p=%lf e=%lf i=%lf \n",p);
    printf("c=%lf \n",c);
    printf("c=%e \n",c);
    printf("g=%f \n",g);
    printf("z=%lf \n",z);
    printf("x=%f \n",x);

    return 0;
}
