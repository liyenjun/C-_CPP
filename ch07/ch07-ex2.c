#include <stdio.h>
#include <stdlib.h>
int Hanoi(int,int,int,int); //�禡�쫬�ŧi
int Hanoi(int n,int s,int m,int d)
{
    static int count = 0;
    
    count++;
	if ( n == 1 ) // �פ����
		printf("�N��%2d �Ӷ�L�q��%2d �h���%2d\n",n,s,d);
	else {
		Hanoi(n-1,s,d,m); // �N�W���� n-1 �ӱq�� s �h��� m
		printf("�N��%2d �Ӷ�L�q��%2d �h���%2d\n",n,s,d);
		Hanoi(n-1,m,s,d); // �N�W���� n-1 �ӱq�� m �h��� d
	}
    return count;
}
int main(void)
{
	int n, count;

	printf("���h�ֶ�L�n�h: ");
	scanf("%d",&n);
	count = Hanoi(n,1,2,3); 
    printf("�`�@�h�� %4d ��\n", count);
	system("pause"); return(0);
}