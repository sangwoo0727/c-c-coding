/*1065 �Ѽ� ���� ����ϴ� ����
�Ѽ��� ���ڸ����� ���������� �̷�� ���� �ǹ��Ѵ�
1000�̸��� ���� �Է¹޾Ƽ�, �� ������ ���� �ڿ����� �Ѽ��� ������ ����ϴ� ����
2�ڸ��� , �� 99������ ���� �Ѽ��̴�.
100���� 999������ ���� �迭�� �ɰ���,
����° �ڸ��� - �ι�°�ڸ�����
�ι�° �ڸ���- ù��° �ڸ����� ���� ���� ��쿡 ī��Ʈ�� ���ִ� �ܼ��� ����*/

#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int arr[3] = {};
	int cnt = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (i <= 99)
			cnt++;
		if (i >=100) {
			arr[2] = i % 10;
			arr[1] = (i / 10) % 10;
			arr[0] = i / 100;
			if (arr[0] - arr[1] == arr[1] - arr[2])
				cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}