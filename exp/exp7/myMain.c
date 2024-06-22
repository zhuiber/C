/**
 *@author:2022300013 卫宏林
 *@description:中国与各国进出口数据的分析与显示：
 *@version:v0.01
 *@date:2024-05-10
 **/

#include <stdio.h>
#include <string.h>

// 定义国家名称
char country[50][12] = {
    "美国", "日本", "韩国", "德国", "越南", "澳大利亚", "马来西亚", "巴西", "俄罗斯", "泰国",
    "印度", "印度尼西亚", "荷兰", "英国", "新加坡", "沙特阿拉伯", "墨西哥", "法国", "菲律宾", "加拿大",
    "意大利", "阿联酋", "智利", "南非", "西班牙", "瑞士", "波兰", "比利时", "秘鲁", "伊拉克",
    "土耳其", "阿曼", "巴基斯坦", "尼日利亚", "哈萨克斯坦", "孟加拉国", "新西兰", "安哥拉", "爱尔兰",
    "以色列", "科威特", "捷克", "瑞典", "哥伦比亚", "埃及", "乌克兰", "缅甸", "丹麦", "阿根廷"};

// 定义进口和出口数据
int import[50] = {
    17970081, 20550277, 21344326, 11991430, 9231942, 16352908, 9830508, 11000670, 7960907, 6183263,
    2814551, 6392283, 1400494, 2567686, 3881973, 5696861, 1913928, 3910500, 2476131, 3048978,
    3032373, 2857327, 3957795, 3295561, 1228866, 3788005, 554183, 857188, 2423903, 2665311,
    504897, 2859710, 358448, 303163, 1129056, 104693, 1615598, 2102743, 1762666, 753454,
    1775554, 605328, 987409, 561778, 170358, 977446, 812208, 1052395, 697291, 712432};

int export[50] = {
    57607523, 16581426, 14880548, 11517540, 13789507, 6638009, 7865488, 5361123, 6755117, 6935458,
    9750751, 6064749, 10243171, 8702212, 5510346, 3032124, 6743974, 4593066, 5151026, 5151026,
    4362921, 4375166, 2629229, 2111525, 3612557, 623357, 3657787, 3038163, 1330132, 1068987,
    2915179, 356515, 2424040, 2263626, 1395926, 2409441, 856063, 249142, 532132, 1529400,
    436847, 1510814, 1103495, 1435442, 1826461, 940443, 812208, 1052395, 697291, 1087242,
    1068798};

// 定义进出口交换比率数组
float ieRatio[50];

// 计算进出口交换比率
void calculateIeRatio()
{
    for (int i = 0; i < 50; i++)
    {
        ieRatio[i] = (float)import[i] / export[i];
    }
}

// 打印柱状图
void printBarChart(float value, float maxValue)
{
    int stars = (int)(value * 40.0 / maxValue);
    for (int i = 0; i < stars; i++)
    {
        printf("*");
    }
    printf("\n");
}

// 打印进出口数据
void printData(int index, float value, char *country, int import, int export, char *order)
{
    if (strcmp(order, "import") == 0)
    {
        printf("%2d %10d %12s %10d %10.2f\n", index + 1, import, country, export, value);
    }
    else if (strcmp(order, "export") == 0)
    {
        printf("%2d %10d %12s %10d %10.2f\n", index + 1, export, country, import, value);
    }
    else if (strcmp(order, "ratio") == 0)
    {
        printf("%2d %10.2f %12s %10d %10d\n", index + 1, value, country, import, export);
    }
}

// 获取数组的最大值
int getMaxValue(int array[], int size)
{
    int maxValue = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}

float getMaxFloatValue(float array[], int size)
{
    float maxValue = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}

// 冒泡排序按进口额排序
void bubbleSortByImport()
{
    for (int i = 0; i < 50 - 1; i++)
    {
        for (int j = 0; j < 50 - i - 1; j++)
        {
            if (import[j] < import[j + 1])
            {
                int tempImp = import[j];
                import[j] = import[j + 1];
                import[j + 1] = tempImp;

                int tempExp = export[j];
                export[j] = export[j + 1];
                export[j + 1] = tempExp;

                float tempRatio = ieRatio[j];
                ieRatio[j] = ieRatio[j + 1];
                ieRatio[j + 1] = tempRatio;

                char tempCountry[12];
                memcpy(tempCountry, country[j], sizeof(tempCountry));
                memcpy(country[j], country[j + 1], sizeof(tempCountry));
                memcpy(country[j + 1], tempCountry, sizeof(tempCountry));
            }
        }
    }
}

// 选择排序按出口额排序
void selectionSortByExport()
{
    for (int i = 0; i < 50 - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < 50; j++)
        {
            if (export[j] > export[maxIndex])
            {
                maxIndex = j;
            }
        }
        int tempExp = export[i];
        export[i] = export[maxIndex];
        export[maxIndex] = tempExp;

        int tempImp = import[i];
        import[i] = import[maxIndex];
        import[maxIndex] = tempImp;

        float tempRatio = ieRatio[i];
        ieRatio[i] = ieRatio[maxIndex];
        ieRatio[maxIndex] = tempRatio;

        char tempCountry[12];
        memcpy(tempCountry, country[i], sizeof(tempCountry));
        memcpy(country[i], country[maxIndex], sizeof(tempCountry));
        memcpy(country[maxIndex], tempCountry, sizeof(tempCountry));
    }
}

// 选择排序按进出口交换比率排序
void selectionSortByRatio()
{
    for (int i = 0; i < 50 - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < 50; j++)
        {
            if (ieRatio[j] > ieRatio[maxIndex])
            {
                maxIndex = j;
            }
        }
        float tempRatio = ieRatio[i];
        ieRatio[i] = ieRatio[maxIndex];
        ieRatio[maxIndex] = tempRatio;

        int tempImp = import[i];
        import[i] = import[maxIndex];
        import[maxIndex] = tempImp;

        int tempExp = export[i];
        export[i] = export[maxIndex];
        export[maxIndex] = tempExp;

        char tempCountry[12];
        memcpy(tempCountry, country[i], sizeof(tempCountry));
        memcpy(country[i], country[maxIndex], sizeof(tempCountry));
        memcpy(country[maxIndex], tempCountry, sizeof(tempCountry));
    }
}

int main()
{
    calculateIeRatio();

    printf("进出口数据排序和棒图显示\n");

    // 冒泡排序按进口额排序并显示
    printf("\n按进口额排序和显示:\n");
    bubbleSortByImport();
    int maxImport = getMaxValue(import, 50);
    for (int i = 0; i < 50; i++)
    {
        printData(i, ieRatio[i], country[i], import[i], export[i], "import");
        printBarChart(import[i], maxImport);
    }

    // 选择排序按出口额排序并显示
    printf("\n按出口额排序和显示:\n");
    selectionSortByExport();
    int maxExport = getMaxValue(export, 50);
    for (int i = 0; i < 50; i++)
    {
        printData(i, ieRatio[i], country[i], import[i], export[i], "export");
        printBarChart(export[i], maxExport);
    }

    // 选择排序按进出口交换比率排序并显示
    printf("\n按进出口交换比率排序和显示:\n");
    selectionSortByRatio();
    float maxRatio = getMaxFloatValue(ieRatio, 50);
    for (int i = 0; i < 50; i++)
    {
        printData(i, ieRatio[i], country[i], import[i], export[i], "ratio");
        printBarChart(ieRatio[i], maxRatio);
    }

    return 0;
}
