//
//  main.c
//  cmath
//
//  Created by lyt1987 on 15/4/12.
//  Copyright (c) 2015年 lyt1987. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct c_comp{
    double rmz;
    double imz;
}c_comp;

int c_comp_product(a1,a2,c) struct c_comp *a1,*a2,*c;

{
    printf("a1=%f+%fi\n",a1->rmz,a1->imz);
    printf("a2=%f+%fi\n",a2->rmz,a2->imz);
    
    double p,q,s;
    p=a1->rmz*a2->rmz;
    q=a1->imz*a2->imz;
    s=(a1->rmz+a1->imz)*(a2->rmz+a2->imz);
    
    c->rmz=p-q;
    c->imz=s-p-q;
    printf("c=%f+%fi\n",c->rmz,c->imz);
    
    return 0;
    
}


struct c_comp  c_comp_divide(a1,a2,c) struct c_comp a1,a2,c;

{
    printf("a1=%f+%fi\n",a1.rmz,a1.imz);
    printf("a2=%f+%fi\n",a2.rmz,a2.imz);
    
    double r2;
    r2=a2.rmz*a2.rmz+a2.imz+a2.imz;
    
    c_comp_product(&a1, &a2, &c);
    c.rmz=c.rmz/r2;
    c.imz=c.imz/r2;
    printf("c=%f+%fi\n",c.rmz,c.imz);
    
    return c;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    struct c_comp a1,a2,c;
    
    
    a1.rmz=0;
    a1.imz=1;
    a2.rmz=0;
    a2.imz=-1;
    
    c_comp_product(&a1,&a2,&c);
    
    printf("c=%f+%fi\n",c.rmz,c.imz);
    
    
    c=c_comp_divide(a1,a2,c);
    
    printf("c=%f+%fi\n",c.rmz,c.imz);
    
    return 0;
}
