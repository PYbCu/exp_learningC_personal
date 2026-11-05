#include<stdio.h>
void main()
{
	int i = 0, j = 0, k = 0, m, count=0, arr[60] = { 0 };
	int total;
	double sum = 0, average, fail, good, bad;

	printf("请分别输入班级学生成绩(不在 0~100 之间则结束)：");
	while (i < 60)
	{
		scanf_s("%d", &arr[i]);//数组里的数是整数
		if (arr[i] < 0 || arr[i]>100)
			break;
		sum += arr[i];
	//	total = i;（不用写这）
		if (arr[i] < 60)
			j++;
		if (arr[i] > 90)
			k++;
		i++;
	}
	total = i;//等于i而不是其他，因为若数据成立，输出结果次数为实，而若数据不成立，则截断后，输出次数仍为实
	average =(double)sum / total;
	fail = (double)j / total * 100;
	good = (double)k / total * 100;
	for (m = 0;m < total;m++)
	{
		if (arr[m] < average)
			count++;
	}
	bad =(double) count / total * 100;
	printf("这次考试的班级平均成绩、总人数、不及格率以及 90 分以上学生的百分比和低于平均分的学生的百分比分别为%.2f、%d、%.2f%%、%.2f%%、%.2f%%", average, total, fail,good, bad);
}
/*
	#include <stdio.h>

void main()
{
    int arr[60] = { 0 };
    int i = 0; // 记录有效输入人数
    int score;
    double sum = 0, average;
    int fail_cnt = 0, good_cnt = 0, bad_cnt = 0;

    printf("请输入成绩(不在0~100间则结束)：\n");

    // 1. 读入数据并统计及格/不及格/优秀
    while (i < 60) {
        scanf_s("%d", &score); // 用%d读入
        if (score < 0 || score > 100) {
            break; // 输入不合法，结束输入
        }
        
        arr[i] = score; // 存入数组
        sum += score;   // 累加总分
        
        // 顺便统计
        if (score < 60) fail_cnt++;
        if (score > 90) good_cnt++;
        
        i++; // 有效人数+1
    }

    // 2. 判断是否有人输入，防止除以 0
    if (i == 0) {
        printf("没有输入有效成绩！\n");【保障所有人参与】
        return;
    }

    // 3. 计算平均分
    average = sum / i; 

    // 4. 统计低于平均分的人数
    for (int m = 0; m < i; m++)
    {
        if (arr[m] < average) 
        {
            bad_cnt++; // 用专门的人数变量去记
        }
    }

    // 5. 输出结果（注意强转 double 防止整数除法变 0）//要注意此处数据类型改变
    printf("总人数: %d\n", i);
    printf("平均成绩: %.2f\n", average);
    printf("不及格率: %.2f%%\n", (double)fail_cnt / i * 100);
    printf("90分以上百分比: %.2f%%\n", (double)good_cnt / i * 100);
    printf("低于平均分学生的百分比: %.2f%%\n", (double)bad_cnt / i * 100);
}
*/