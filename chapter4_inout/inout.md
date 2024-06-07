# C语言知识点总结

## 格式化输出 - printf

`printf` 函数用于格式化输出到标准输出（通常是屏幕）。

### 常用占位符
- `%d` 或 `%i`：整型
- `%u`：无符号整型
- `%f`：浮点型
- `%lf`：双精度浮点型
- `%c`：字符
- `%s`：字符串
- `%x`：十六进制整型（小写）
- `%X`：十六进制整型（大写）
- `%p`：指针
- `%%`：百分号
- `%e`或 `%E`：以指数形式输出一个浮点型数据

### 使用示例
```c
int a = 10;
float b = 3.14;
char c = 'A';
char str[] = "Hello, World!";

printf("整数：%d\n", a);
printf("浮点数：%f\n", b);
printf("字符：%c\n", c);
printf("字符串：%s\n", str);
```

## 格式化输入 - scanf

`scanf` 函数用于从标准输入（通常是键盘）获取格式化输入。

### 常用占位符
- `%d`：整型
- `%u`：无符号整型
- `%f`：浮点型
- `%lf`：双精度浮点型
- `%c`：字符
- `%s`：字符串

### 使用示例
```c
int a;
float b;
char c;
char str[100];

scanf("%d", &a);
scanf("%f", &b);
scanf(" %c", &c); // 注意：字符前面的空格用于忽略前面的空白字符
scanf("%s", str); // 字符串不需要取地址符号

printf("整数：%d\n", a);
printf("浮点数：%f\n", b);
printf("字符：%c\n", c);
printf("字符串：%s\n", str);
```

## 字符数据的非格式化输入、输出

### 非格式化输入 - getchar 和 gets
- `getchar()`: 从标准输入读取一个字符
- `gets()`: 从标准输入读取一行字符串

### 非格式化输出 - putchar 和 puts
- `putchar()`: 向标准输出写入一个字符
- `puts()`: 向标准输出写入一个字符串，并在末尾加上换行符

### 使用示例
```c
char ch;
char str[100];

// 非格式化输入
ch = getchar();
gets(str);

// 非格式化输出
putchar(ch);
puts(str);
```

## 程序的控制结构

### 顺序结构
程序按照从上到下的顺序依次执行。

### 选择结构
- **if 语句**
  ```c
  if (condition) {
      // 当 condition 为真时执行
  } else {
      // 当 condition 为假时执行
  }
  ```

- **switch 语句**
  ```c
  switch (expression) {
      case constant1:
          // 执行语句
          break;
      case constant2:
          // 执行语句
          break;
      default:
          // 执行语句
  }
  ```

### 循环结构
- **for 循环**
  ```c
  for (initialization; condition; increment) {
      // 循环体
  }
  ```

- **while 循环**
  ```c
  while (condition) {
      // 循环体
  }
  ```

- **do-while 循环**
  ```c
  do {
      // 循环体
  } while (condition);
  ```

### 跳转结构
- **break 语句**：终止最内层循环或 switch 语句。
- **continue 语句**：跳过当前循环的剩余部分，并继续下一次循环。
- **return 语句**：退出函数并返回一个值。

### 使用示例
```c
// if 语句
if (a > b) {
    printf("a 大于 b\n");
} else {
    printf("a 不大于 b\n");
}

// switch 语句
switch (a) {
    case 1:
        printf("a 等于 1\n");
        break;
    case 2:
        printf("a 等于 2\n");
        break;
    default:
        printf("a 不等于 1 或 2\n");
}

// for 循环
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
printf("\n");

// while 循环
int i = 0;
while (i < 10) {
    printf("%d ", i);
    i++;
}
printf("\n");

// do-while 循环
i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 10);
printf("\n");
```

