//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main(void) {
//	int num;
//	int dealy;
//	A:printf("����num,delay��ֵ:");
//	if (scanf("%d %d", &num,&dealy)&&getchar()) {
//		SetCursorPos(1895, 500);
//		for (long i = 0; i < num; i++){
//			Sleep(dealy);
//			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
//			printf("��ǰ����:%%%d\n", (int)(i/num)*1000);
//		}
//	}
//	printf("q to quit:\n");
//	if ('q' != getchar()) goto A;
//	return 0;
//}