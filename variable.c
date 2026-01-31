#include<stdio.h>
// int x=10;//global variable
// void function1(){printf("function 1:%d\n",x);}
// void function2(){printf("function 2:%d\n",x);}
// int main(){
//     function1();
//     function2();
//     return 0;
// }

// void function(){
//     int x=20;//local variable
//     static int y=20;
//     x=x+10;
//     y=y+10;
//     printf("\tlocal:%d\n\tStatic:%d\n",x,y);

// }
// int main(){
//     printf("first call\n");
//     function();
//     printf("second call\n");
//     function();
//     printf("third call\n");
//     function();
// }

// void function(){
//     int x;
//     auto int y;
//     printf("auto variable:%d\n",y);
//     printf("local variable:%d\n",x);
// }
// int main(){
//     function();
//     return 0;
// }

// int main(){
//     int not_constant=1;
//     const int constant_var=20;
//     const char char_const='A';//single quotes
//     const int int_const=12;
//     const float float_const=12.44;

//     not_constant=40;//changing value

//     // constant_var=22;//generate error
//     printf("not const : %d\n",not_constant);
//     printf("int const : %d\n",int_const);
//     printf("float const : %f\n",float_const);
//     printf("char const: %c\n",char_const);
//     printf("constant const: %c\n",constant_var);
    
//     return 0;
// }

// int main(){
//     char a='a';
//     char c;
//     printf("value of a:%c\n",a);
//     a++;
//     printf("value of a after increment:%c\n",a);
//     c=99;
//     printf("value of c:%c",c);
//     return 0;
// }

// int main(){
//     char a='a';
//     int i;
//     for(i=1;i<=26;i++){
//         printf("value  :%c\n",a);
//         a++;
//     }
// }

