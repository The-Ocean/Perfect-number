//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//
//��������count(int n), ���ڼ���n����(��n)��ȫ���ĸ��������㷶Χ, 0 < n <= 500000
//
//	����n������ȫ���ĸ����� �쳣������� - 1
#include<iostream>

int count(int n)
{
	int num = 0;
	int sum = 0;
	for (int i = 2; i <= n; i++)
	{
		sum = 0;
		int j = 1;
		int temp = 0;
		do 
		{
			if (i%j == 0)
			{
				temp = i / j;
				sum = sum + j + temp;
			}
			j++;

		} while (j < temp);
		sum = sum - i;
		if (sum == i)
		{
			num++;
		}
	}
	return num;
}

int main()
{
	int n;
	while (std::cin >> n)
	{
		if (n > 0 && n <= 500000)
		{
			std::cout << count(n) << std::endl;
		}
	}

	return 0;
}