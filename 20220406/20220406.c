#include <stdio.h>
#include <stdlib.h>
#include "20220406.h"
#include <time.h>
#include <string.h> 

int main()
{

	//�޸� �����Լ�
	
		const char* s = "Count";
		char d[] = "nickname";

		memcpy(d, s, sizeof(char) * 7);
		printf("%s\n", d);
	//�޸� �ʱ�ȭ �Լ�
	//3byte GGGgeumsoo
	char name[11] = { "Kimgeumsoo" };

	memset(name, 'G', 3);

	printf("%s\n", name);

	double arr[5];

	memset(arr, 0, sizeof(long long)*5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	/*
	//�ߺ��� ���� �ʴ� �����Լ�
	// 1~10���� ������ ���� ������ּ���

	int ran = 0;

	int arr[101] = {0};

	srand(time(NULL));

	printf("\n�ߺ����� �����Լ�\n");
	for (int i = 0; i < 100; i++){
		ran = rand() % 100+1;
		arr[ran] += 1;

		if (arr[ran] == 1){
			printf("%d ", ran);
		}

		else{
			i -= 1;
		}
	}
	printf("\n\n");


	//��� ������ 

	// ���� ptr -> �� ������ �޸𸮸� ����ŵ�ϴ�. 

	// a���� ������ ����˴ϴ�.
	// p -> ���� ������ �ִ� a�� �����ּҸ� ����Ű�� �ֽ��ϴ�.

	int a = 10;
	int* p = &a;

	*p = 20;

	printf("�������� �Ҵ��� �޸��� �� : %d\n", *p);

	// ���� ptr -> �������� �޸𸮸� ����ŵ�ϴ�.
	//		ptr -> [] [] [] []
	int* ptr = (int*)malloc(sizeof(int));

	*ptr = 10;
	printf("�������� �Ҵ��� �޸��� �� : %d\n", *ptr);

	free(ptr);
	//
	//ptr�� �̹� ������ �޸� �̱⶧���� null�̶�� ������ �����Ѽ� ����ó���� �ؾ���.
	// ����ó���� �ϴ�����?
	*ptr = NULL;

	printf("�������� �Ҵ��� �޸��� �� : %d\n", *ptr);
	
	//c���� c++����� ������
	//C�� �������� ���α׷��� ���.
	//C++,C#�� ��ü���� ���α׷��� ���.

	//C++ ���� C#����� ������ 
	//C++ �������� �޸𸮸� �����ؾ� ��.
	//C#  �Ҵ��� �޸𸮰� ���� ������ �÷��Ϳ� ���� �ڵ����� �޸𸮰� ������.
	//
	*/
	return 0;
}