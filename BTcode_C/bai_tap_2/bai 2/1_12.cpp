#include<stdio.h>
#include<stdlib.h>

// chu so dau tien cua n
int sodau(int n){
    int i, x;
    while(n!=0){
        x = n%10;
        n /=10;
    }
    return x;
}

// dem so chu so cua n
int demn(int n){
    int i, x = 0;
    while(n!=0){
        n /=10;
        x++;
    }
    return x;
}

// dao nguoc n
int daonguoc(int n){
    int du ,x=0;
    while(n!=0){
        du = n%10;
        x = x*10+du;
        n/=10;
    }
    return x;
}

// tinh tong cac chu so cau n
int tongn(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        x+=du;
        n /=10;
    }
    return x;
}

// tich cac chu so cua n
int tichn(int n){
    int du, x=1;
    while(n!=0){
        du = n%10;
        x*=du;
        n /=10;
    }
    return x;
}

// dem chu so le cua n
int demle(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        if(du%2!=0){
            x++;
        }
        n/=10;
    }
    return x;
}

// tong chu so le cua n
int tongle(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        if(du%2!=0){
            x+=du;
        }
        n/=10;
    }
    return x;
}

// tich cac chu so le cua n
int tichle(int n){
    int du, x=1;
    while(n!=0){
        du = n%10;
        if(du%2!=0){
            x*=du;
        }
        n/=10;
    }
    return x;
}

// dem cac chu so chan cua n
int demchan(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        if(du%2==0){
            x++;
        }
        n/=10;
    }
    return x;
}

// tong cac chu sochan cua n
int tongchan(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        if(du%2==0){
            x+=du;
        }
        n/=10;
    }
    return x;
}

// tim chu so lon nhat cua n
int solon(int n){
    int du, x=0;
    while(n!=0){
        du = n%10;
        if(du>x){
            x=du;
        }
        n/=10;
    }
    return x;
}

// tim chu so nho nhat cua n
int sonho(int n){
    int du, x = 9;
    if(n==0){
        return n;
    }
    while(n!=0){
        du = n%10;
        if(du<x){
            x=du;
        }
        n/=10;
    }
    return x;
}


int main(){
    int n;
    FILE *f;
    f = fopen("BAI2.IN","rt");
    if(f==NULL){
        printf("loi mo tep");
        exit(0);
    }
    fscanf(f,"%d",&n);
    fclose(f);
    if(n<=0||n>99999){
        printf("loi dinh dang du lieu");
        return 0;
    }

    f = fopen("BAI2.OUT","wt");
    fprintf(f,"%d",solon(n));
    fclose(f);

    printf("%d",solon(n));
    
    return 0;
}