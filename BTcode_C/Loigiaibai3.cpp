#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

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
                *(a+i)= min;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%6d",*(a+i));
    }
    
}

//liet ke cac phan tu la so nguyen to trong day
bool KTNT(int n){
    if(n<2){
        return  false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void nguyento(int n,int *a,FILE *f){
    for(int i=0;i<n;i++){
        if(KTNT(*(a+i))){
            fprintf(f,"%5d",*(a+i));
        }
    }
}

//tong cac so gnuyen to trong day
int tongnt(int n,int *a){
    int x=0;
    for(int i=0;i<n;i++){
        if(KTNT(*(a+i))){
            x+=*(a+i);
        }
    }
    return x;
}

//in vi tri cac phan tu nguyen to lon hon x
void vitrint(int n,int x,int *a,FILE *f){
    for(int i=0;i<n;i++){
        if(KTNT(*(a+i))&&*(a+i)>x){
            fprintf(f,"%d",i+1);
        }
    }
}

//sap sep day so tang dan
void hoandoi(int &a,int &b){
    int cho =a;
    a = b;
    b = cho;
}
void tangdan(int n,int *a){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+i)>*(a+j)){
                hoandoi(*(a+i),*(a+j));
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

// xep xep cac phan tu le tang dan
void letangdan(int n,int *a){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+j)%2!=0&&*(a+i)%2!=0&&*(a+i)>*(a+j)){
                hoandoi(*(a+i),*(a+j));
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

// xap xep cac so chia het cho 3len dau day
void chia3lendau(int n,int *a){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+j)%3==0&&*(a+i)%3!=0){
                hoandoi(*(a+i),*(a+j));
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

// xap xep cac so chan len dau day va cac so chan xep xep tho tnag dan
void chanlendautang(int n,int *a){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+j)%2==0&&*(a+i)%2!=0){
                hoandoi(*(a+i),*(a+j));
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

//dao nguoc day so
void daonguoc(int n,int *a){
    int i,j;
    for(i=0,j=n-1;i<n/2,j>n/2;i++,j--){
        hoandoi(*(a+i),*(a+j));
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

// nhap 1 vi tri roi nhap 1 gia tri thay gia tri avao vi tri da nhap|
void chen(int &n,int *a,int x, int k){
    int i;
    for(i=n;i>=k;i--){
        *(a+i)=*(a+(i-1));
    }
    *(a+(k-1)) = x;
    n++;

    for(i=0;i<n;i++){
        printf("%6d",*(a+i));
    }
}

// chen 1 so vao dy tang dan ma k lam mat di tinh tang dan cua no
int vitrichen(int n,int *a,int x){
    int i, k;
    if(x<*a){
       return k=0;
    }else{
        if(x>*(a+(n-1))){
            return k=n;
        }
    }

    for(i=1;i<n-1;i++){
        if(*(a+i)<x&&*(a+(i+1))>x){
            return k =i+1;
        }
    }
    return 0;
}
void themx(int &n,int *a,int x){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(a+i)>*(a+j)){
                hoandoi(*(a+i),*(a+j));
            }
        }
    }
    int k = vitrichen(n,a,x);
    chen(n,a,x,k);
    
}

//xoa 1 vi tri duoc chi dinh o trong day
void xoavitri(int &n,int *a,int k){
    for(int i=k-1;i<n;i++){
        *(a+i)=*(a+(i+1));
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%5d",*(a+i));
    }
}

//nhap 1 gia tri xoa gia tri dau tien trong mang bang voi gia tri da nhap
void xoavitridau(int &n,int *a,int x){
    int k = -1;
    for(int i=0;i<n;i++){
        if(*(a+i)==x){
            k=i;
        }
    }
    if(k!=-1){
        for(int i=k;i<n;i++){
        *(a+i)=*(a+(i+1));
        }
        n--;
        for(int i=0;i<n;i++){
            printf("%5d",*(a+i));
        }
    }
}

// nhap vao 1 gia tri xoa tat ca gia tri bang gia tri da nhap vao o trong mang
void xoaneubang(int &n,int *a,int x){
    int i,j;
    for(i=0;i<n;i++){
        if(*(a+i)==x){
            for(j=i;j<n;j++){
                *(a+j)=*(a+(j+1));
            }
            n--;
        }
    }
    for(i=0;i<n;i++){
        printf("%5d",*(a+i));
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
    //fprintf(f,"%d",tongnt(n,a));
    letangdan(n,a);
    fclose(f);

    free(a);
    return 0;
}
