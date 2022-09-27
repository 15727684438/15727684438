////程序思路--将计算结果倒序存入数组中,然后顺序输出
//#include <stdio.h>
//#define length 32
//int main(void) {
//	int array[length]={0};//二进制位数量
//	int test;
//	scanf("%d",&test);
//	int index = 1;//作为区分是否是第一位二进制计算过程
//	int result;
//	int temp=test;//储存一次计算后的临时值,供下一次计算使用
//	for (int i = length -1;i >0;i--)//以i作为控制变量,将计算结果放入array[i]中
//	{
//
//		if (index == 1) {
//			result = test%2;
//			array[i] = result;
//			index = 0;
//			continue;
//		}
//		if (index == 0) {
//			temp = temp / 2;//小数点截断
//			result = temp % 2;
//			array[i] = result;
//			continue;
//		}
//	}
//	for (size_t i = 0; i < length; i++)
//	{
//		printf("%d",array[i]);
//	}
//	getchar();
//	getchar();
//	return 0;
//}