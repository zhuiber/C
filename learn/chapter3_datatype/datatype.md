## 1. 变量和常量

- **变量**: 存储在内存中并且值可以改变的存储单元。
- **常量**: 存储在内存中且值不能改变的存储单元。

## 2. 数据类型及其内存存放形式

- **整型**: `int`, `short`, `long`, `long long`
- **字符型**: `char`
- **浮点型**: `float`, `double`
- **布尔型**: `bool` (C99标准)

不同类型数据在内存中的存放形式取决于其类型和平台。

## 3. 常量的使用方法

- **整型常量**: `10`, `-20`
- **字符常量**: `'a'`, `'1'`
- **浮点型常量**: `3.14`, `-0.001`
- **字符串常量**: `"hello"`, `"world"`

## 4. 变量的定义和引用

- **整型变量**: `int a;`
- **字符型变量**: `char ch;`
- **浮点型变量**: `float f;`

引用方法：直接使用变量名，如`a = 5;`, `ch = 'A';`, `f = 3.14;`

## 5. 调用printf函数输出各种类型数据的方法

- **整型**: `printf("%d", a);`
- **字符型**: `printf("%c", ch);`
- **浮点型**: `printf("%f", f);`
- **字符串**: `printf("%s", str);`

格式化字符串中常用的占位符包括 `%d`, `%c`, `%f`, `%s` 等。

## 6. 数据类型转换

- **隐式类型转换**: 由编译器自动完成。
- **显式类型转换**: 使用强制类型转换运算符，如 `(int)3.14`。

## 7. 运算符的使用方法

- **赋值运算符**: `=`
- **算术运算符**: `+`, `-`, `*`, `/`, `%`
- **位运算符**: `&`, `|`, `^`, `~`, `<<`, `>>`
- **逗号运算符**: `,`
- **sizeof运算符**: `sizeof(type)`

