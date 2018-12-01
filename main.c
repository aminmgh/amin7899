#include <stdio.h>
#include <stdlib.h>
double x,y,x1=0,y1=0,x2=500,x3=1000,y3=0,y2=500*1.732050808;
void Koch(int n, double x1, double x2, double x3, double y1, double y2, double y3){
        if(n==1){
            x=(x1+x2+x3)/3;
            y=(y1+y2+y3)/3;
            printf("%lf %lf\n%lf %lf\n%lf %lf\n",2*x-x1,2*y-y1,2*x-x2,2*y-y2,2*x-x3,2*y-y3);
            return;
        }
        Koch(n-1,(2*x1+x2)/3,(2*x2+x1)/3,2*(x1+x2+x3)/3-x3,(2*y1+y2)/3,(2*y2+y1)/3,2*(y1+y2+y3)/3-y3);
        Koch(n-1,(2*x1+x3)/3,(2*x3+x1)/3,2*(x1+x2+x3)/3-x2,(2*y1+y3)/3,(2*y3+y1)/3,2*(y1+y2+y3)/3-y2);
        Koch(n-1,(2*x2+x3)/3,(2*x3+x2)/3,2*(x1+x2+x3)/3-x1,(2*y2+y3)/3,(2*y3+y2)/3,2*(y1+y2+y3)/3-y1);
    }

int main()
{
    int n;
    scanf("%d",&n);
    Koch(n,x1,x2,x3,y1,y2,y3);
    return 0;
}
