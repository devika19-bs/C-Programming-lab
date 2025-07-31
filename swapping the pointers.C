#include<stdio.h>
//function for call by value_type
void swapValue(int a,int b){
int temp;
temp=a;
b=temp;
printf("inside swapValue-a:%d,b:%d\n",a,b);
}
//function for call by reference
void swapRef(int*a,int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;
//swap actual variables using pointers
}
int main(){
int x,y;
printf("Enter two number:");
scanf("%d %d",&x,&y);
printf("\n---Before swap---\n");
printf("x: %d,y:%d\n",x,y);
//call-by-value:values won't actually swap in main
swapValue(x,y);
printf("after swapValue (call-by-value):x:%d:y:%d\n",x,y);
//call-by-reference:values will swap in mian
swapRef(&x,&y);
printf("after sawpRef(call-by-reference:x:%d,y:%d\n",x,y);
return 0;
}
