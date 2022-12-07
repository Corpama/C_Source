#include <stdio.h>·
#include <math.h>
#define PI acos(-1)

int main()
{
    int main_length;
    double result;
    void interval(double inter_array[]);
    int math_array(double main_array[],double inter_array[],double start,double end,double Sheet);
    double math_integral(double main_array[],double GSize,int main_length);
    double inter_array[4];
    interval(inter_array);
    int p1=inter_array[2];
    double main_array[p1];
    main_length=math_array(main_array,inter_array,inter_array[0],inter_array[1],inter_array[2]);
    //for (int i=0;i<main_length;i++)
    //{
    //    printf("%f,",main_array[i]);
    //}
    //printf("\n");
    result=math_integral(main_array,inter_array[3],main_length);
    printf("%f\n",result);
    return 0;
}

void interval(double inter_array[])
{
    double *p2=inter_array;
    printf("Please input the start and end of the interval you want:\n");
    for (int i=0;i<2;i++)
    {
        scanf("%lf",p2);
        p2++;
    }
    printf("Please input the sheets quantity of this interval:\n");
    scanf("%lf",p2);
}

int math_array(double main_array[],double inter_array[],double start,double end,double Sheet)
{
    double *p3=main_array;
    double GSize=(end-start)/Sheet;
    inter_array[3]=GSize;
    int counter=0;
    for (double i=0;i<=end;i=i+GSize)
    {
        *p3=start;
        start=start+GSize;
        p3++;
        counter++;
    }
    *--p3=end;
    return counter;
}

double math_integral(double main_array[],double GSize,int main_length)
{
    double area=0,cos();
    
    for (int i=0;i<main_length-1;i++)
    {
        area=((GSize * cos(main_array[i])) + ((GSize * (cos(main_array[i+1])-cos(main_array[i]))) / 2))+area;
    }
    return area;
}