#include <stdio.h>
#include <stdlib.h>
#include "20220406.h"
#include <time.h>
#include <string.h> 

int main()
{

	//메모리 복사함수
	
		const char* s = "Count";
		char d[] = "nickname";

		memcpy(d, s, sizeof(char) * 7);
		printf("%s\n", d);
	//메모리 초기화 함수
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
	//중복이 되지 않는 랜덤함수
	// 1~10까지 랜덤한 수를 출력해주세요

	int ran = 0;

	int arr[101] = {0};

	srand(time(NULL));

	printf("\n중복제거 랜덤함수\n");
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


	//허상 포인터 

	// 스택 ptr -> 힙 영역의 메모리를 가리킵니다. 

	// a스택 영역에 저장됩니다.
	// p -> 스택 영역에 있는 a의 시작주소를 가리키고 있습니다.

	int a = 10;
	int* p = &a;

	*p = 20;

	printf("정적으로 할당한 메모리의 값 : %d\n", *p);

	// 스택 ptr -> 힙영역의 메모리를 가리킵니다.
	//		ptr -> [] [] [] []
	int* ptr = (int*)malloc(sizeof(int));

	*ptr = 10;
	printf("동적으로 할당한 메모리의 값 : %d\n", *ptr);

	free(ptr);
	//
	//ptr은 이미 해제된 메모리 이기때문에 null이라는 곳으로 가리켜서 예외처리를 해야함.
	// 예외처리를 하는이유?
	*ptr = NULL;

	printf("동적으로 할당한 메모리의 값 : %d\n", *ptr);
	
	//c언어와 c++언어의 차이점
	//C는 절차지향 프로그래밍 언어.
	//C++,C#은 객체지향 프로그래밍 언어.

	//C++ 언어와 C#언어의 차이점 
	//C++ 수동으로 메모리를 해제해야 함.
	//C#  할당한 메모리가 다음 가비지 컬렉터에 의해 자동으로 메모리가 관리됨.
	//
	*/
	return 0;
}