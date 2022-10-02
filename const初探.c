////指针修改了const数组(雾)
//#include <stdio.h>
//int main(void) {
//	 const int ar[3] = { 1,2,3 };
//	int* pt1 = &ar, *pt2=&ar, *pt3=&ar;
//	printf("*pt1++=%d\n",*pt1++);
//	printf("(*pt2)=%d\n", (*pt2)++);
//	printf("*(pt3++)=%d\n",*(pt3++));
//	for (size_t i = 0; i < 3; i++)
//	{
//		printf("%d\n", ar[i]);
//	}
//}