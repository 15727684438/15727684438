////����˼·--���������������������,Ȼ��˳�����
//#include <stdio.h>
//#define length 32
//int main(void) {
//	int array[length]={0};//������λ����
//	int test;
//	scanf("%d",&test);
//	int index = 1;//��Ϊ�����Ƿ��ǵ�һλ�����Ƽ������
//	int result;
//	int temp=test;//����һ�μ�������ʱֵ,����һ�μ���ʹ��
//	for (int i = length -1;i >0;i--)//��i��Ϊ���Ʊ���,������������array[i]��
//	{
//
//		if (index == 1) {
//			result = test%2;
//			array[i] = result;
//			index = 0;
//			continue;
//		}
//		if (index == 0) {
//			temp = temp / 2;//С����ض�
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