#include<stdio.h>
#include<conio.h>

#define max 100

void nhapkichthuoc(int &n){
    do{
        printf("nhap kich thuoc cua mang: "); scanf("%d",&n);
    }while(n<=0||n>100);
}

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d] = ",i); scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}

int vitriam(int a[],int n){
	for(int i=0;i<n;i++)
		if(a[i]<0)
			return i;
		return -1;
}




int main(){
    int a[max],n;
    nhapkichthuoc(n);
    nhapmang(a,n);
    printf("\ncac phan tu cua mang: ");
    xuatmang(a,n);

    int x=vitriam(a,n);
    if(x==-1){
        printf("\n -1");
    }else{
        printf("\nvi tri phan tu am dau tien trong mang a[%d]",x);
        
    }
    

    return 0;
}