#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//tong phan tu am
int tongam(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
            m+=*(a+i);
        }
    }
    return m;
}

//tong phan tu duong
int tongduong(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)>0){
            m+=*(a+i);
        }
    }
    return m;
}

//tong cac phan tu le trong day
int tongle(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)%2!=0){
            m+=*(a+i);
        }
    }
    return m;
}

//tong cac phan tu chan co trong day
int tongchan(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)%2==0){
            m+=*(a+i);
        }
    }
    return m;
}

//tong cac phan tu la boi cua 3 va 5
int tongboi(int n,int *a){
    int m=0;
    for(int i=0;i<n;i++){
        if(*(a+i)%3==0&&*(a+i)%5==0){
            m+=*(a+i);
        }
    }
    return m;
}

//tong cac so hang lon hon tb cong cua cac so trong day
int tonglonhontb(int n,int *a){
    int i,tong=0;
    float tb=0;
    for(i=0;i<n;i++){
        tb+=*(a+i);
    }
    tb/=(float)n;

    for(i=0;i<n;i++){
        if(*(a+i)>tb){
            tong+=*(a+i);
        }
    }
    return tong;
}

//dem ca so am trong day
int demam(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
            m++;
        }
    }
    return m;
}

//dem cac phan tu duong co trong day
int demduong(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)>0){
            m++;
        }
    }
    return m;
}

//dem cac phan tu chan co trong day
int demchan(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)%2==0){
            m++;
        }
    }
    return m;
}

//dem cac phan tu le co trong day
int demle(int n,int *a){
    int m = 0;
    for(int i=0;i<n;i++){
        if(*(a+i)%2!=0){
            m++;
        }
    }
    return m;
}

//tim phan tu am dau tien trong day khong co thi tra ve -1
int vitriam(int n,int *a){
    for(int i=0;i<n;i++){
        if(*(a+i)<0){
            return i+1;
        }
    }
    return -1;
}

//nhap 1 so tim vi tri cua so do trong day neu khong co thi tra ve -1
int timx(int n,int x,int *a){
    for(int i=0;i<n;i++){
        if(*(a+i)==x){
            return i+1;
        }
    }
    return -1;
}

//tim so cuoi cung trong day lon hon tb cong cua cac so trong day
int lonhontbcuoi(int n,int *a){
    int i;
    float tb=0;
    for(i=0;i<n;i++){
        tb+=*(a+i);
    }
    tb/=(float)n;

    for(i=n-1;i>=0;i--){
        if(*(a+i)>tb){
            return *(a+i);
        }
    }
    return 0;
}

//tim vi tri phan tu lon nhat trong day
void vitrimax(int n,int *a,FILE *f){
    int i, m=*a;
    for(i=1;i<n;i++){
        if(*(a+i)>m){
            m=*(a+i);
        }
    }
    for(i=0;i<n;i++){
        if(*(a+i)==m){
            fprintf(f,"%6d",i+1);
        }
    }
}

 //vi tri phan tu nho nhat trong day
void vitrimin(int n,int *a,FILE *f){
    int i, m=*a;
    for(i=1;i<n;i++){
        if(*(a+i)<m){
            m=*(a+i);
        }
    }
    for(i=0;i<n;i++){
        if(*(a+i)==m){
            fprintf(f,"%6d",i+1);
        }
    }
}

//vi tri phan tu am trong day
void vitriamlon(int n,int *a,FILE *f){
    int i, m =0;
    for(i=0;i<n;i++){
        if(*(a+i)<m){
            m=*(a+i);
        }
    } 
    if(m==0){
        fprintf(f,"%d",-1);
    }else{
        for(i=0;i<n;i++){
            if(*(a+i)==m){
                fprintf(f,"%6d",i+1);
            }
        }
    }
}
 
//hoan doi vi tri lon be trong day
void hoandoilonbe(int n,int *a){
    int i, min=*a, max=*a;
    for(i=1;i<n;i++){
        if(*(a+i)<min){
            min=*(a+i);
        }else{
            if(*(a+i)>max){
                max=*(a+i);
            }
        }
    }
    for(i=0;i<n;i++){
        if(*(a+i)==min){
            *(a+i) = max;
        }else{
            if(*(a+i)==max){
                *(a+i)==min;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%6d",*(a+i));
    }
    
}

int main(){
    int n, x, *a;
    FILE *f;

    a = (int *)malloc(100);

    f=fopen("BAI3.IN","rt");
    if(f==NULL){
        printf("loi mo tep");
        exit(0);
    }
    fscanf(f,"%d",&n);
    if(n<=0||n>=100){
        printf("loi dinh dan du lieu");
    }
    for(int i=0;i<n;i++){
        fscanf(f,"%d",a+i);
    }
    fclose(f);

    f=fopen("BAI3.OUT","wt");
    // fprintf(f,"%d",vitriamlon(n,a,f));
    hoandoilonbe(n,a);
    fclose(f);

    free(a);
    return 0;
}
