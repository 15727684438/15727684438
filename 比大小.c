//#include <stdio.h>
//int main(void)
//{
//    int a, b, c, temp=0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b)
//    {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a > c)
//    {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b > c)
//    {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}
//
////#define LENGTH 3
////#include <stdio.h>
////void swap_int(int*);//定义了一个交换数组元素的函数--(冒泡排序)?//从小到大
////int main(void){
////	int a[LENGTH];
////	scanf("%d %d %d",&a[0], &a[1], &a[2]);
////	swap_int(a);
////	printf("%d %d %d", a[0], a[1], a[2]);
////	getchar(); 
////	getchar();
////	return 0;
////}
////void swap_int(int a[]) {//传入数组首地址
////	int temp = *a;
////	int times=1;
////	int* b = a + 1;
////	int i = 1;
////	for (int correct=1; correct<LENGTH;) {
////		if ((*a > *b) && times < LENGTH) { *a = *b; *b = temp; times++; a++, b++; correct = 1; }
////		else a++, b++,correct++;
////	}
////}