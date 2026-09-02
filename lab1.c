#include <stdio.h>

int main() {
    int a[10]={1,2,3,4,5,6,7};
    int val=4;
    
    //1.traversal
    for(int i=0;i<=9;i++) {
        printf("%d,",a[i]);
    }
    
	//2.linear search 
	
	for(int i=0;i<=9;i++) {
	    if(a[i]==val)
	    {
	        printf("\nElement %d found at index %d",val,i);
	    }
	}
	
	//3.maximum and minimum
	int max=a[0];
	for(int i=1;i<10;i++){
	    if(a[i]>max) {
	        max=a[i];
	    }
	}
	printf("\nMaximum value is %d",max);
	
	
	int min=a[0];
	for(int i=1;i<10;i++){
	    if(a[i]<min) {
	        min=a[i];
	    }
	}
	printf("\nMinimum value is %d",min);
	
	
	//4.Insertion
	int val_ins=99;
	int pos=2;
	int last=10;
	for(int i=last;i>=pos;i--){
	    a[i]=a[i-1];
	}
	a[pos]=val_ins;
	last++;
	printf("\nArray after insertion:");
	for(int i=0;i<=9;i++){
	    printf("%d,",a[i]);
	}
	
	//5. deletion
	
	int pos_del=2;
	int llast=10;
	for(int i=pos_del;i<=llast;i++){
	    a[i]=a[i+1];
	}
	
	llast--;
	printf("\nArray after deletion:");
	for(int i=0;i<=9;i++){
	    printf("%d,",a[i]);
	}
	
	
	
	
	

}

