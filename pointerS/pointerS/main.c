#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
void MemoryDump(int start, int length);

char buf[100];

int main(int argc, char* argv[]) {	// >PointerSample 10000 500 : //Command Line ��ɾ�
									// 10000 : Start memory �ּ�
									// 500 : Dump�� �޸� ũ��

	int start = 0x09000000;
	int length = 500;

	//�ȳ� ���� �����̾�

	MemoryDump((int)buf, length);

	/*void* p = malloc(100);
	printf("p = %8f [0x%08x]\n", * (double*)p, p);

	printf("HelloWold! \n");
	printf("argc = %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}*/

	return 0;

}

void MemoryDump(int start,int length) {
	char* cp = buf;
	//void* vp = (void*)start;
	int i = 0;	// index ���� �ʱⰪ

	while (i < length) {	//�������� : i<length
		char c = *((char*)cp + i);  
		printf("0x%02x\n", c);
		i++;
	}

}