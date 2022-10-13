[toc]



###  C语言程序设计基础

​			作者：kerwin

​			版本：QF1.0

​			版权：千锋教研院

​     

#### 前言

##### 1.初识程序

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220719114130072.png" alt="image-20220719114130072" style="zoom:50%;float:left;" />

 <img src="%E7%AC%94%E8%AE%B0.assets/image-20220719114748067.png" alt="image-20220719114748067" style="zoom: 67%;float:left" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220719114647675.png" alt="image-20220719114647675" style="zoom:50%;float:left;" />

##### 2.编程语言的演变

###### 2-1.计算机语言

计算机语言（Computer Language）指用于人与计算机之间通讯的语言。计算机语言是人与计算机之间传递信息的媒介。计算机系统最大特征是指令通过一种语言传达给机器。为了使电子计算机进行各种工作，就需要有一套用以编写计算机程序的数字、字符和语法规划，由这些[字符](https://baike.baidu.com/item/字符/4768913)和[语法规则](https://baike.baidu.com/item/语法规则/1095093)组成计算机各种指令（或各种语句）。这些就是计算机能接受的语言。

###### 2-2.分类

<img src="../../JS/%25E7%25AC%2594%25E8%25AE%25B0/%25E7%25AC%2594%25E8%25AE%25B0.assets/image-20220510141309000.png" alt="image-20220510141309000" style="zoom:50%;float:left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220719144602336.png" alt="image-20220719144602336" style="zoom:67%;float:left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220510141952652.png" alt="image-20220510141952652" style="zoom:67%;float:left;" />

###### 2-3 解释型vs编译型

> 解释型语言：解释性语言编写的程序不进行预先编译，以文本方式存储程序代码。执行时才翻译执行。程序每执行一次就要翻译一遍。
>
> 优缺点：跨平台能力强，易于调，执行速度慢。

> 编译型语言：编译型语言在执行之前要先经过编译过程，编译成为一个可执行的机器语言的文件，比如exe。因为翻译只做一遍，以后都不需要翻译，所以执行效率高。
>
>
> 编译型语言的优缺点：执行效率高，缺点是跨平台能力弱，不便调试。

#### 一. VisualStudio安装

> https://visualstudio.microsoft.com/zh-hans/



##### 1.Visual Studio 2022 产品系列系统要求

https://docs.microsoft.com/zh-cn/visualstudio/releases/2022/system-requirements

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718170043627.png" alt="image-20220718170043627" style="zoom: 67%; float: left;" />

##### 2.具体安装过程

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718163931409.png" alt="image-20220718163931409" style="zoom:50%;float:left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718164021591.png" alt="image-20220718164021591" style="zoom: 67%; float: left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718170303976.png" alt="image-20220718170303976" style="zoom:50%;float:left;" />



##### 3.配置

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718181148628.png" alt="image-20220718181148628" style="zoom: 50%; float: left;" />
<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718185506220.png" alt="image-20220718185506220" style="zoom: 67%;float:left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220718190604741.png" alt="image-20220718190604741" style="zoom:67%;float:left;" />

#### 二. C语言之Hello

```c
#include<stdio.h> //头文件

//入口函数
int main()
{
	printf("Hello World!\n"); //打印输出
}
//注释

```

#### 三. C语言基础

##### 1.关键字

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220720155510890.png" alt="image-20220720155510890" style="zoom:50%;float:left;" />

##### 2.数据类型

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220720162255640.png" alt="image-20220720162255640" style="zoom: 67%;float:left;" />

###### 2-1 整型数据

```c
#include<stdio.h> // 注释，引入头文件

//入口
int main() {
	//常量：在程序运行过程中，其值不可以改变的量
    	//整型常量  10 -10  
	//变量: 其值可以改变的量被称为变量
	int age = 100;
	printf("年龄是%d", age);
}

```

![image-20220720163732622](%E7%AC%94%E8%AE%B0.assets/image-20220720163732622.png)

###### 2-2 浮点型数据

```c
#include<stdio.h> // 注释，引入头文件

//入口
int main() {
	//常量：在程序运行过程中，其值不可以改变的量
		//实型(浮点型)常量  10.1 -10.1

	//变量: 其值可以改变的量被称为变量
	float price = 100.0f;
	printf("价格是%f", price);
}

```

| 关键字       | 字节  | 数值范围             |
| ------------ | ----- | -------------------- |
| float单精度  | 4字节 | 3.4E-38 到 3.4E+38   |
| double双精度 | 8字节 | 1.7E-308 到 1.7E+308 |



###### 2-3 字符型数据

- ![](%E7%AC%94%E8%AE%B0.assets/ASCII%E6%8E%A7%E5%88%B6%E5%AD%97%E7%AC%A6.png)

- ![](%E7%AC%94%E8%AE%B0.assets/ASCII%E6%98%BE%E7%A4%BA%E5%AD%97%E7%AC%A6.png)

  

```c
#include<stdio.h> // 注释，引入头文件

//入口
int main() {
	//常量：在程序运行过程中，其值不可以改变的量
		//字符型常量 'k' 
		//字符串	"kerwin"
	//变量: 其值可以改变的量被称为变量
	char alias = 'K';
	printf("年龄是%c", alias);
}


```

![image-20220720163459132](%E7%AC%94%E8%AE%B0.assets/image-20220720163459132.png)



 ##### 3.运算符

**运算符**

用算术运算符将运算对象(也称操作数）连接起来的、符合Ｃ语法规则的式子，称为Ｃ算术表达式运算对象包括常量、变量、函数等

```c
a * b / c + 5
```

运算符的分类：

1、双目运算符：即参加运算的操作数有两个 

```c
 a + b
```

2、单目运算符：参加运算的操作数只有一个 **++**自增运算符 , 给变量值+1 

```c
a++
```

3、三目运算符:即参加运算的操作数有 3 个 ()?():()

```c
int x = a>b?10:20
```



###### 3-1 算数运算符

> \+, -, *, /, % ,+= ,-=, *=, /=, %=



```c
	int time = 1000;
	int hours = 1000 / 60;
	int minutes = 1000 % 60;
```

复合运算符：

a += 1 相当于 a=a+1



###### 3-2 关系运算符

> ＞、＜、= =、>=、<=、!=



```c
	if (gender==0 && age<30) {
		printf("OK");
	}
```





###### 3-3 逻辑运算符

1、&& 逻辑与

两个条件都为真，则结果为真

```c
(b>a) && (b<c)
```

2、|| 逻辑或

两个条件至少有一个为真，则结果为真

```c
(b>a) || (b<c)
```

3、! 逻辑非

```c
!(a>b)
```

###### 3-4 三目运算符

- 语法： `条件 ? 条件为 true 的时候执行 : 条件为 false 的时候执行`

```c
#include<stdio.h>

int main() {
	int sum = 250;
	sum = sum > 200 ? sum * 0.7 : sum;

	int gender = 1;
	gender == 0 ? printf("女") : printf("男");
}
```



###### 3-5 逗号运算符

int  a =  (1,2)  逗号运算符的结果是,后边表达式的结果

```c
int a = 1;
int x = (a+=2, a*a);
printf("%d", x);
```



###### 3-6 自增自减运算符

1. `++`

   - 进行自增运算

   - 分成两种，**前置++** 和 **后置++**

   - 前置++，会先把值自动 +1，在返回

   - 后置++，会先把值返回，在自动+1

2. `--`

   - 进行自减运算
   - 分成两种，**前置--** 和 **后置--**
   - 和 `++` 运算符道理一样

###### 3-7 运算符的优先级

**运算符优先级**

- 在表达式中按照优先级先后进行运算,优先级高的先于优先级低的先运算。
- 优先级一样的按结合性来运算

**运算符结合性**

左结合性：从左向右运算

```c
sum = x + y + z;
```

右结合性:从右向左运算

```c
int a,b,c;
int d = 100;
a = b = c = d += 100;
```



<img src="%E7%AC%94%E8%AE%B0.assets/image-20220723112914963.png" alt="image-20220723112914963" style="zoom:67%;float:left;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220723112927318.png" alt="image-20220723112927318" style="zoom:67%;float:left" />

##### 4. 分支结构

- 我们的 C 代码都是顺序执行的（从上到下）
- 逻辑分支就是根据我们设定好的条件来决定要不要执行某些代码

###### 4-1 if分支结构

**if 语句**

- 通过一个 `if` 语句来决定代码是否执行

- 语法： `if (条件) { 要执行的代码 }`

- 通过 `()` 里面的条件是否成立来决定 `{}` 里面的代码是否执行

**if else 语句**

- 通过 `if` 条件来决定，执行哪一个 `{}` 里面的代码

- 语法： `if (条件) { 条件为 true 的时候执行 } else { 条件为 false 的时候执行 }`

- 两个 `{}` 内的代码一定有一个会执行

**if else if ... 语句**

- 可以通过 `if` 和 `else if` 来设置多个条件进行判断
- 语法：`if (条件1) { 条件1为 true 的时候执行 } else if (条件2) { 条件2为 true 的时候执行 }`
- 会从头开始依次判断条件

  - 如果第一个条件为 `true` 了，那么就会执行后面的 `{}` 里面的内容
  - 如果第一个条件为 `false`，那么就会判断第二个条件，依次类推
- 多个 `{}` ，只会有一个被执行，一旦有一个条件为 `true` 了，后面的就不在判断了

**if else if … else 语句**

- 和之前的 `if else if ...` 基本一致，只不过是在所有条件都不满足的时候，执行最后 `else` 后面的 `{}`

###### 4-2 SWITCH 条件分支结构

- 也是条件判断语句的一种

- 是对于某一个变量的判断

- 语法：

  ```c
  switch (要判断的变量) {
    case 情况1:
      情况1要执行的代码
      break
    case 情况2:
      情况2要执行的代码
      break
    case 情况3:
      情况3要执行的代码
      break
    default:
      上述情况都不满足的时候执行的代码
  }
  ```

  - 要判断某一个变量 **等于** 某一个值得时候使用


##### 5. 循环结构

- 循环结构，就是根据某些给出的条件，重复的执行同一段代码
- 循环必须要有某些固定的内容组成
  1. 初始化
  2. 条件判断
  3. 要执行的代码
  4. 自身改变



###### 5-1 WHILE 循环

- `while`，中文叫 当…时，其实就是当条件满足时就执行代码，一旦不满足了就不执行了

- 语法 `while (条件) { 满足条件就执行 }`

- 因为满足条件就执行，所以我们写的时候一定要注意，就是设定一个边界值，不然就一直循环下去了

  ```c
  // 1. 初始化条件
  int n = 0;
  // 2. 条件判断
  while (n<3) {
    // 3. 要执行的代码
   printf("%d\n",n);
    // 4. 自身改变
    n++;
  }
  ```

  - 如果没有自身改变，那么就会一直循环不停了

###### 5-2 DO WHILE 循环

- 是一个和 `while` 循环类似的循环

- `while` 会先进行条件判断，满足就执行，不满足直接就不执行了

- 但是 `do while` 循环是，先不管条件，先执行一回，然后在开始进行条件判断

- 语法： `do { 要执行的代码 } while (条件)`

  ```c
  // 下面这个代码，条件一开始就不满足，但是依旧会执行一次 do 后面 {} 内部的代码
   int num = 10;
      do {
          num += 1;
      } while (num < 10);
  
      printf("%d", num);
  ```

  

###### 5-3 FOR 循环

- 和 `while` 和 `do while` 循环都不太一样的一种循环结构

- 道理是和其他两种一样的，都是循环执行代码的

- 语法： `for (int i = 0; i < 10; i++) { 要执行的代码 }`

  ```c
  // 把初始化，条件判断，自身改变，写在了一起
  for (int i = 0; i < 10; i++) {
    // 这里写的是要执行的代码
    
  }
  
  // 控制台会依次输出 1 ~ 10 
  ```

- 这个只是看起来不太舒服，但是用起来比较好用



###### 5-4 BREAK 终止循环

- 在循环没有进行完毕的时候，因为我设置的条件满足，提前终止循环

- 比如：我要吃五个包子，吃到三个的时候，不能在吃了，我就停止吃包子这个事情

- 要终止循环，就可以直接使用 `break` 关键字

  ```c
  for (int i = 1; i <= 5; i++) {
  		// 没循环一次，吃一个包子
  
  		// 当 i 的值为 3 的时候，条件为 true，执行 {} 里面的代码终止循环
  		// 循环就不会继续向下执行了，也就没有 4 和 5 了
  		if (i == 3) {
  			break;
  		}
  		printf("%d", i);
  	}
  ```



###### 5-5 CONTINUE 结束本次循环

- 在循环中，把循环的本次跳过去，继续执行后续的循环

- 比如：吃五个包子，到第三个的时候，第三个掉地下了，不吃了，跳过第三个，继续吃第四个和第五个

- 跳过本次循环，就可以使用 `continue` 关键字

  ```c
  for (int i = 1; i <= 5; i++) {
    // 当 i 的值为 3 的时候，执行 {} 里面的代码
    // {} 里面有 continue，那么本次循环后面的代码就都不执行了
    // 自动算作 i 为 3 的这一次结束了，去继续执行 i = 4 的那次循环了
    if (i == 3) {
  			continue;
    }
     printf("%d", i);
  }
  ```

![image-20220727091011480](%E7%AC%94%E8%AE%B0.assets/image-20220727091011480.png)

##### 6. 函数

###### 6-1 函数的概念

- 函数就是把任意一段代码放在一个 **盒子** 里面

- 在我想要让这段代码执行的时候，直接执行这个 **盒子** 里面的代码就行

- 先看一段代码

- 

  ```c
  // 这个是我们以前写的一段代码
  for (int i = 0; i < 10; i++) {
          printf("%d", i);
      }
  
  // 函数，这个 {} 就是那个 “盒子”
  void fn() {
      // 这个函数我们以前写的代码
      for (int i = 0; i < 10; i++) {
          printf("%d", i);
      }
  }
  ```

###### 6-2 函数的参数

- 我们在定义函数和调用函数的时候都出现过 `()`

- 现在我们就来说一下这个 `()` 的作用

- 就是用来放参数的位置

- 参数分为两种 **形参** 和 **实参**

  ```c
  void fn(行参写在这里) {
    // 一段代码
  }
  
  fn(实参写在这里)
  
  ```



**形参和实参的作用**

1. 形参

   - 就是在函数内部可以使用的变量，在函数外部不能使用

   - 每写一个单词，就相当于在函数内部定义了一个可以使用的变量（遵循变量名的命名规则和命名规范）

   - 多个单词之间以 `,` 分隔

     ```c
     // 书写一个参数
     void fn(num) {
       // 在函数内部就可以使用 num 这个变量
     }
     
     // 书写两个参数
     void fun(num1, num2) {
       // 在函数内部就可以使用 num1 和 num2 这两个变量
     }
     
     ```

   - **行参的值是在函数调用的时候由实参决定的**

2. 实参

   - 在函数调用的时候给行参赋值的

   - 也就是说，在调用的时候是给一个实际的内容的

     ```c
     void fn(num) {
       // 函数内部可以使用 num 
     }
     
     // 这个函数的本次调用，书写的实参是 100
     // 那么本次调用的时候函数内部的 num 就是 100
     fn(100) 
     
     // 这个函数的本次调用，书写的实参是 200
     // 那么本次调用的时候函数内部的 num 就是 200
     fn(200)
     ```

   - **函数内部的行参的值，由函数调用的时候传递的实参决定**

   - **多个参数的时候，是按照顺序一一对应的**

     ```c
     void fn(num1, num2) {
       // 函数内部可以使用 num1 和 num2
     }
     
     // 函数本次调用的时候，书写的参数是 100 和 200
     // 那么本次调用的时候，函数内部的 num1 就是 100，num2 就是 200
     fn(100, 200)
     ```

     



###### 6-3 函数的return

- `return` 返回的意思，其实就是给函数一个 **返回值** 和 **终断函数**



**返回值**

- 函数调用本身也是一个表达式，表达式就应该有一个值出现

- `return` 关键字就是可以给函数执行完毕一个结果

  ```c
  int fn() {
    // 执行代码
    return 100
  }
  
  // 此时，fn() 这个表达式执行完毕之后就有结果出现了
  ```

  - 我们可以在函数内部使用 `return` 关键把任何内容当作这个函数运行后的结果



**终断函数**

- 当我开始执行函数以后，函数内部的代码就会从上到下的依次执行

- 必须要等到函数内的代码执行完毕

- 而 `return` 关键字就是可以在函数中间的位置停掉，让后面的代码不在继续执行

  ```c
  void fn() {
      printf("11");
      printf("22");
      return; //后面不会执行了
      printf("33");
      printf("44");
  }
  
  
  // 函数调用
  fn()
  ```

###### 6-4 函数的声明

**为什么要声明?**

有些情况下，如果不对函数进行声明，编译器在编译的时候，可能不认识这个函数，因为编译器在编译 c 程序的时候，从上往下编译的。

**(1) 直接声明法**



```c
void func(void);
int main()
{
	func();
}
void func(void)
{
	printf("hello kerwin\n");
}
```

**(2)  间接声明法**

将函数的声明放在头文件中，.c 程序包含头文件即可

```c
main.c
#include”k.h”


k.h
extern void func(void);
```



> 使用函数的好处？ 
>
> 1、定义一次，可以多次调用，减少代码的冗余度。 
>
> 2、使咱们代码，模块化更好，方便调试程序，而且阅读方便。



###### 6-5 内存的分区

**1、内存：物理内存、虚拟内存**

- 物理内存：实实在在存在的存储设备

- 虚拟内存：操作系统虚拟出来的内存。

- 操作系统会在物理内存和虚拟内存之间做映射。

- 在写应用程序的，咱们看到的都是虚拟地址。

**2、在运行程序的时候，操作系统会将 虚拟内存进行分区。**

​	**1).堆** 

​			在动态申请内存的时候，在堆里开辟内存。

​	**2).栈** 

​			主要存放局部变量。

​	**3).静态全局区**

​		1：未初始化的静态全局区

​			静态变量（定义变量的时候，前面加 static 修饰），或全局变量，没有初始化的，存在此区

​		2：初始化的静态全局区

​			全局变量、静态变量，赋过初值的，存放在此区

​	**4).代码区**

​			存放咱们的程序代码

​	**5).文字常量区**

​			存放常量的。

###### 6-6 普通的全局变量

在函数外部定义的变量.

```c
int number=100;//number 就是一个全局变量
int main()
{
	return 0;
}
```

作用范围：

- 普通全局变量的作用范围，是程序的所有地方。
- 只不过用之前需要声明。声明方法 extern int number;
- 注意声明的时候，不要赋值。

生命周期：

- 程序运行的整个过程，一直存在，直到程序结束。

注意：

- 定义普通的全局变量的时候，如果不赋初值，它的值默认为 0

###### 6-7 静态全局变量 static

```c
定义全局变量的时候，前面用 static 修饰。
static int number=100;//number 就是一个静态全局变量
int main()
{
	return 0;
}
```

作用范围：

- 只能在它定义的.c（源文件）中有效

生命周期：

- 在程序的整个运行过程中，一直存在。

注意：

- 定义静态全局变量的时候，如果不赋初值，它的值默认为 0。

###### 6-8 普通的局部变量

在函数内部定义的，或者复合语句中定义的变量

```c
int main()
{
	int num;//普通局部变量
    if(1){
       int a;//普通局部变量
    }
}
```

作用范围：

- 在函数中定义的变量，在它的函数中有效
- 在复合语句中定义的，在它的复合语句中有效。

###### 6-9 静态的局部变量

定义局部变量的时候，前面加 static 修饰

作用范围： 

- 在它定义的函数或复合语句中有效。

生命周期：

- 第一次调用函数的时候，开辟空间赋值，函数结束后，不释放，以后再调用函数的时候，就不再为其开辟空间，也不赋初值，用的是以前的那个变量。

###### 6-10 静态函数

在定义函数的时候，返回值类型前面加 static 修饰。这样的函数 被称为静态函数。

static 限定了函数的作用范围，在定义的.c 中有效。



##### 7.数组

###### 7.1数组的概念

数组是若干个相同类型的变量在内存中有序存储的集合。

int a[5];//定义了一个整型的数组 a，a 是数组的名字，数组中有 5 个元素，每个元素的类型都是 int 类型，而且在内存中连续存储。

这十个元素分别是 a[0] a[1] a[2] a[3] a[4]

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220730112642632.png" alt="image-20220730112642632" style="zoom:67%;float:left;" />

###### 7.2 数组的分类

1）字符数组

`char s[10]; s[0],s[1]....s[9];`

2）短整型的数组

`short  a[10]; `

3）整型的数组

`int a[10]; `

4) 长整型的数组

`lont a[5];`

5）浮点型的数组（单、双）

`float a[6]; a[4]=3.14f;`

`double a[8]; a[7]=3.115926;`

6）指针数组

`char *a[10]`

7）结构体数组

`struct student a[10];`

###### 7.3 二维数组

数组名【行下标】【列下标】

int  a    [3] [3] 

| arr[0,0] | arr[0,1] | arr[0,2] |
| -------- | -------- | -------- |
| arr[1,0] | arr[1,1] | arr[1,2] |
| arr[2,0] | arr[2,1] | arr[2,2] |

###### 7-4 数组的排序

- 排序，就是把一个乱序的数组，通过我们的处理，让他变成一个有序的数组

  

**冒泡排序**

![](%E7%AC%94%E8%AE%B0.assets/%E5%86%92%E6%B3%A1.gif)

- 先遍历数组，让挨着的两个进行比较，如果前一个比后一个大，那么就把两个换个位置

- 数组遍历一遍以后，那么最后一个数字就是最大的那个了

- 然后进行第二遍的遍历，还是按照之前的规则，第二大的数字就会跑到倒数第二的位置

- 以此类推，最后就会按照顺序把数组排好了

**选择排序**

![](%E7%AC%94%E8%AE%B0.assets/%E9%80%89%E6%8B%A9.gif)

- 先假定数组中的第 0 个就是最小的数字的索引
- 然后遍历数组，只要有一个数字比我小，那么就替换之前记录的索引
- 知道数组遍历结束后，就能找到最小的那个索引，然后让最小的索引换到第 0 个的位置
- 再来第二趟遍历，假定第 1 个是最小的数字的索引
- 在遍历一次数组，找到比我小的那个数字的索引
- 遍历结束后换个位置
- 依次类推，也可以把数组排序好

##### 8.指针

###### 8-1 指针的概念

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220802101023536.png" alt="image-20220802101023536" style="zoom:67%;float:left;" />

`字符变量 char ch=‘b’; ch 占 1 个字节，它有一个地址编号，这个地址编号就是ch 的地址整型变量 int a=0x12 34 56 78; a 占 4 个字节，它占有 4 个字节的存储单元，有4 个地址编号。`

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220802101124817.png" alt="image-20220802101124817" style="zoom:67%;float:left;" />

###### 8-2 指针变量的定义

1.简单的指针变量

数据类型 * 指针变量名;

```c
int * p;//定义了一个指针变量 p 
```



在 定义指针变量的时候 * 是用来修饰变量的，说明变量 p 是个指针变量。

2.关于指针的运算符

& 取地址 、 *取值

```c
int a=0x1234abcd;
int *p;//在定义指针变量的时候*代表修饰的意思，修饰 p 是个指针变量。
 p=&a;//把 a 的地址给 p 赋值 ，&是取地址符，
```

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220802101453052.png" alt="image-20220802101453052" style="zoom:67%;float:left;" />

###### 8-3 指针的用处

**直接影响原数据**

```c
void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
```



```c
void sort(int *arr,int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
```

###### 8-4 指针和数组

```c
int a[5];
int *p;
p=&a[0];
指针变量 p 保存了数组 a 中第 0 个元素的地址，即 a[0]的地址
```

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220803101840802.png" alt="image-20220803101840802" style="zoom:67%;float:left;" />

`通过指针变量运算加取值的方法来引用数组的元素`

```c
int a[5];
int *p;
p=a; *(p+2)=100;//也是可以的，相当于 a[2]=100
解释：p 是第 0 个元素的地址，p+2 是 a[2]这个元素的地址。对第二个元素的地址取值，即 a[2]
```

###### 8-5 指针的分类

`按指针指向的数据的类型来分`

1:字符指针

字符型数据的地址 

```c
char *p;//定义了一个字符指针变量，只能存放字符型数据的地址编号
```

2：短整型指针

```c
short *p;//定义了一个短整型的指针变量 p，只能存放短整型变量的地址
```

3：整型指针

```c
int *p;//定义了一个整型的指针变量 p，只能存放整型变量的地址
```

4：长整型指针

```c
long *p;//定义了一个长整型的指针变量 p，只能存放长整型变量的地址
```

5：float 型的指针

```c
float *p;//定义了一个 float 型的指针变量 p，只能存放 float 型变量的地址
```

6：double 型的指针

```c
double *p;//定义了一个 double 型的指针变量 p，只能存放 double 型变量的地址
```

7：函数指针 

8、结构体指针 

9、指针的指针 

10、数组指针 

11、通用指针 void *p;

> 无论什么类型的指针变量，在 32 位系统下，都是 4 个字节。 
>
> 指针只能存放对应类型的变量的地址编号。

###### 8-6 字符串和指针

字符串就是以’\0’结尾的若干的字符的集合：比如“hello world”。

字符串的地址，是第一个字符的地址。如：字符串“hello world”的地址，其实是字符串中字符’h’的地址。

我们可以定义一个字符指针变量保存字符串的地址,比如：char *s =”hello world”;



**字符串的可修改性**

字符串内容是否可以修改，取决于字符串存放在哪里

1. 存放在数组中的字符串的内容是可修改的

   ```c
   char str[100]=”kerwin”;
   str[0]=‘y’;//正确可以修改的
   ```

   

2. 文字常量区里的内容是不可修改的

   ```c
   char *str=”kerwin”; 
   *str =’y’;//错误，存放在文字常量区，不可修改
   ```



###### 8-7 指针数组

`定义一个数组，数组中有若干个相同类型指针变量，这个数组被称为指针数组int *p[5]`

`指针数组本身是个数组，是个指针数组，是若干个相同类型的指针变量构成的集合`

```c
#include <stdio.h>
int main()
{
	char *name[3] = {"kerwin","tiechui","xiaoming"};
	int i;
    for(i=0;i<3;i++)
    {
    	printf("%s\n",name[i]);
    }
}
```



###### 8-8 指针的指针

`指针的指针，即指针的地址，`

```c
int a=0x12345678；
假如：a 的地址是 0x00002000
int *p;
p =&a;
则 p 中存放的是 a 的地址编号即 0x00002000
    
假如：指针变量 p 的地址编号是 0x00003000，这个地址编号就是指针的地址
int **q;
q=&p;//q 保存了 p 的地址，也可以说 q 指向了 p
则 q 里存放的就是 0x00003000
```
<img src="%E7%AC%94%E8%AE%B0.assets/image-20220804145952789.png" alt="image-20220804145952789" style="zoom:67%;float:left;" />

###### 8-9 数组指针

`本身是个指针，指向一个数组，加 1 跳一个数组，即指向下个数组。`

指向的数组的类型（*指针变量名）[指向的数组的元素个数] 

`int (*p)[5];`

//定义了一个数组指针变量 p，p 指向的是整型的有 5 个元素的数组p+1 往下指 5 个整型，跳过一个有 5 个整型元素的数组。



   <img src="%E7%AC%94%E8%AE%B0.assets/image-20220803203736931.png" alt="image-20220803203736931" style="zoom:67%;float:left;" />

   <img src="%E7%AC%94%E8%AE%B0.assets/image-20220803203746786.png" alt="image-20220803203746786" style="zoom:67%;" />

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220803200143055.png" alt="image-20220803200143055" style="zoom:67%;float:left;" />





###### 8-10 数组名字取地址

`变成 数组指针`

```c
#include<stdio.h>
int main()
{
    int a[10];
    printf("a=%p\n",a);
    printf("a+1=%p\n",a+1);
    printf("&a=%p\n",&a);
    printf("&a+1=%p\n",&a+1);
}
```

`a 和&a 所代表的地址编号是一样的，即他们指向同一个存储单元，但是a和&a 的指针类型不同。`

`a 是个 int *类型的指针，是 a[0]的地址。 &a 变成了数组指针，加 1 跳一个 10 个元素的整型一维数组`

###### 8-11 数组名字和指针变量的异同

```c
int a[5]= {1,2,3,4,5}
int *p;
p=a;
```



**相同点：**

a 是数组的名字，是 a[0]的地址，p=a 即 p 保存了 a[0]的地址，即 a 和 p 都指向a[0]，所以在引用数组元素的时候，a 和 p 等价 引用数组元素回顾： a[1]、**(a+1)、p[1]、* *(p+1) 都是对数组 a 中 a[1]元素的引用。

**不同点：**

1. a 是常量、p 是变量

2. 对 a 取地址，和对 p 取地址结果不同

因为 a 是数组的名字，所以对 a 取地址结果为数组指针。

p 是个指针变量，所以对 p 取地址（&p）结果为指针的指针。





###### 8-12 给函数传指针参数

`要想改变主调函数中变量的值，必须传变量的地址，而且还得通过*+地址去赋值。无论这个变量是什么类型的。`

```c
void fun(char **barr) {
	printf("%d\n", barr[0][0]);
	barr[0][0] = 2;
}
int main() {

	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int* arr[] = { arr1,arr2 };
	fun(arr);
	printf("%d\n", arr[0][0]);
}
```



###### 8-13 函数返回值是指针

```c
int* swap( int a,int b) {
	int temp = a; //临时变量先存其中一个值
	a = b;
	b = temp;
	static int arr[2]; //静态
	arr[0] = a;
	arr[1] = b;
	return arr;
} 

......
int *x = swap(myarr[j], myarr[j + 1]);
myarr[j] = x[0];
myarr[j + 1] = x[1];
......
```





###### 8-14 初识函数指针

> 咱们定义的函数，在运行程序的时候，会将函数的指令加载到内存 的代码段。所以函数也有起始地址。
>
>  c 语言规定：函数的名字就是函数的首地址，即函数的入口地址 咱们就可以定义一个指针变量，来存放函数的地址。 这个指针变量就是函数指针变量。

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220806134839960.png" alt="image-20220806134839960" style="zoom:67%;float:left;" />

###### 8-15 函数指针的定义和调用

定义：

```c
int max(int x,int y)
{
  ...
}

int(*p)(int,int);//定义了一个函数指针变量 p,p 指向的函数

p=max; 
```

调用：

```c
(*p)(30,50);
p(30,50);
```

###### 8-16 函数指针的用处

```c

void call_back(int current , int total){
    printf("压缩进度是：%d------%d" , current , total);  // 22------100
}


void compress(char* file_name  ,void(call_back)(int , int)){
    call_back(22 , 100);
}

void main(){

    compress("kerwin.jpg" , call_back);
}
```



###### 8-17 水煮易混淆指针

1、 int *a[5];

 这是个指针数组，数组 a 中有 5 个整型的指针变量

a[0]~a[4] ，每个元素都是 int *类型的指针变量

2、int (*a)[5];

数组指针变量，它是个指针变量。它占 8 个字节，存地址编号。

它指向一个数组，它加 1 的话，指向下一行。

3、 int **p;

这个是个指针的指针，保存指针变量的地址。

它经常用在保存指针的地址：

4、int *f(void);

注意：*f 没有用括号括起来

它是个函数的声明，声明的这个函数返回值为 int *类型的。

5、int (*f)(void);

注意*f 用括号括起来了，*修饰 f 说明，f 是个指针变量。

f 是个函数指针变量，存放函数的地址，它指向的函数，

必须有一个 int 型的返回值，没有参数。



###### 8-18 特殊指针

1. 空类型的指针（void *）

`void* 通用指针，任何类型的地址都可以给 void*类型的指针变量赋值。`

```c
void *memcpy(void *dest, const void *src, size_t n);

```

因为对于这种通用型接口，你不知道用户的数据类型是什么，但是你必须能够处理用户的各种类型数据，因而会使用void*。void*能包容地接受各种类型的指针。也就是说，如果你期望接口能够接受任何类型的参数，你可以使用void*类型。但是在具体使用的时候，你必须转换为具体的指针类型。例如，你传入接口的是int*，那么你在使用的时候就应该按照int*使用。

2. 空指针 NULL

```c
char *p=NULL;
```

p 哪里都不指向，也可以认为 p 指向内存编号为 0 的存储单位。



#### 四. 动态内存申请

##### 1.初识动态内存

`Ｃ语言提供了一些内存管理函数，这些内存管理函数可以按需要动态的分配内存空间，也可把不再使用的空间回收再次利用。`

**静态分配**

1、 在程序编译或运行过程中，按事先规定大小分配内存空间的分配方式。int a [10] 

2、 必须事先知道所需空间的大小。 

3、 分配在栈区或全局变量区，一般以数组的形式。 

4、 按计划分配。

**动态分配**

1、在程序运行过程中，根据需要大小自由分配所需空间。

2、按需分配。

3、分配在堆区，一般使用特定的函数进行分配。

##### 2.malloc 函数

void * malloc(int size )

在内存的动态存储区(堆区)中分配一块长度为 size 字节的连续区域，用来存放类型说明符指定的类型。函数原型返回 void*指针，使用时必须做相应的强制类型转换 .

返回值：

- 分配空间的起始地址 ( 分配成功 )

- NULL ( 分配失败 )

注意：

- 在调用 malloc 之后，一定要判断一下，是否申请内存成功。 
- 如果多次 malloc 申请的内存，第 1 次和第 2 次申请的内存不一定是连续的

##### 3. free 函数（释放内存函数）

free 函数释放 p 指向的内存。

```c
char *p=(char *)malloc(100);
free(p);
```

##### 4. calloc 函数

在内存的堆中，申请 n 块，每块的大小为 size 个字节的连续区域

函数的返回值： 

- 返回 申请的内存的首地址（申请成功） 
- 返回 NULL（申请失败）

注意：malloc 和 calloc 函数都是用来申请内存的。

区别：

​	 1) 函数的名字不一样 

​	 2) 参数的个数不一样 

​	 3) malloc 申请的内存，内存中存放的内容是随机的，不确定的，而calloc 函数申请的内存中的内容为 0

##### 5. realloc 函数

在原先 s 指向的内存基础上重新申请内存，新的内存的大小为 new_size 个字节，如果原先内存后面有足够大的空间，就追加，如果后边的内存不够用，则relloc 函数会在堆区找一个 newsize 个字节大小的内存申请，将原先内存中的内容拷贝过来，然后释放原先的内存，最后返回 新内存的地址。

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220807141500827.png" alt="image-20220807141500827" style="zoom:67%;float:left;" />

##### 6. 内存泄露

`申请的内存，首地址丢了，找不了，再也没法使用了，也没法释放了，这块内存就被泄露了。`

```c
int main()
{
	char *p;
	p=(char *)malloc(100);
	//接下来，可以用 p 指向的内存了
	p="kerwin";//p 指向别的地方了
	//从此以后，再也找不到你申请的 100 个字节了。则动态申请的 100 个字节就被泄露了
}
```

```c
void func()
{
	char *p;
	p=(char *)malloc(100);    
}
int main()
{
    func();
    func();
}
//每调用一次 fun 泄露 100 个字节
```

#### 五. 字符串处理函数

##### 1. 字符串拷贝函数strcpy_s

`拷贝 src 指向的字符串到 dest 指针指向的内存中，’\0’也会拷贝`

```c
#include<string.h>

char* p = (char*)malloc(100);
if (!p) return;
strcpy_s(p, 7,"kerwin");

printf("%s", p);
```

##### 2. 测字符串长度函数strlen

`测字符指针 s 指向的字符串中字符的个数，不包括’\0’`

```c
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20]="hello";
    char *str2 ="hello";
    printf("%d\n",sizeof(str1)); //20
    printf("%d\n",sizeof(str2));//8
    printf("%d\n",strlen(str1));//5
    printf("%d\n",strlen(str2));//5
    return 0;
}
```

##### 3. 字符串追加函数strcat_s

`strcat 函数追加 src 字符串到 dest 指向的字符串的后面。追加的时候会追加’\0’`

```c
char* str = (char*)malloc(100);
if (str == NULL) return;
scanf_s("%s", str, 100);
char *str2 = "先生/女士";
strcat_s(str, 100,str2);
printf("%s\n", str);
```

##### 4.字符串比较函数strcmp

`比较 s1 和 s2 指向的字符串的大小， 比较的方法：逐个字符去比较 ascII 码，一旦比较出大小返回。 如果所有字符都一样，则返回 0`

```c
	char* a = (char *)malloc(100);
	char* b = (char *)malloc(100);

	scanf_s("%s", a,100);
	scanf_s("%s", b,100);
	if (a == NULL || b == NULL) return;
	if (strcmp(a, b) == 0) {
		printf("输入正确");
	}
	else {
		printf("输入错误");
	}
```

##### 5.字符查找函数strchr

`在字符指针 s 指向的字符串中，找 ascii 码为 c 的字符 注意，是首次匹配，如果过说 s 指向的字符串中有多个 ASCII 为 c 的字符，则找的是第1 个字符`

```c
char* str[] = { "teichui","xiaoming","kerwin" };

char x;

scanf_s("%c", &x,1);
for (int i= 0; i < sizeof(str) / sizeof(char*); i++) {
	if (strchr(str[i], x) != NULL) {
		printf("%s\n", str[i]);
	}
}
```

##### 6. 字符串匹配函数strstr

`char *strstr(const char *haystack, const char *needle);`

`在 haystack 指向的字符串中查找 needle 指向的字符串，也是首次匹配`

```c
char* str[] = { "teichui","xiaoming","kerwin"};
char x[100];
scanf_s("%s", x,100);
for (int i= 0; i < sizeof(str) / sizeof(char*); i++) {
	if (strstr(str[i], x) != NULL) {
		printf("%s\n", str[i]);
	}
}
```

##### 7.字符串转换数值atoi

atoi/atol/atof 字符串转换功能

函数的声明：int atoi(const char *nptr);

```c
int num;
num=atoi(“12岁”);
则 num 的值为 12
```

##### 8.字符串切割函数strtok

函数声明：char *strtok(char *str, const char *delim);

字符串切割，按照 delim 指向的字符串中的字符，切割 str 指向的字符串。其实就是在 str 指向的字符串中发现了 delim 字符串中的字符，就将其变成’\0’, 调用一次 strtok 只切割一次，切割一次之后，再去切割的时候 strtok 的第一个参数传 NULL，意思是接着上次切割的位置继续切

```c
void split(char *p,char **myp) {
	char* buf = NULL;
	myp[0] = strtok_s(p,"|", &buf);
	int i = 0;

	while (myp[i]) {
		i++;
		myp[i] = strtok_s(NULL, "|", &buf);
	}
}
```

##### 9.空间设定函数memset

函数声明：void* memset(void *ptr,int value,size_t num);

memset 函数是将 ptr 指向的内存空间的 num 个字节全部赋值为 value

```c
int* str = (int*)malloc(100);
if (!str)return;
//memset(str, -1, 100);
memset(str, 0, 100);
for (int i = 0; i < 25; i++)
{ 
	printf("%d\n",str[i]);
} 
```

#### 六. 结构体

##### 1.初识结构体

`在程序开发的时候，有些时候我们需要将不同类型的数据组合成一个有机的整体`

```c
struct {
	char name[100];
	int score;
    int age;
}
```



> 结构体是一种构造类型的数据结构， 是一种或多种基本类型或构造类型的数据的集合。

##### 2.结构体初始化与访问

结构体变量，是个变量，这个变量是若干个相同或不同数据构成的集合注：

1. 在定义结构体变量之前首先得有结构体类型，然后再定义变量
2. 在定义结构体变量的时候，可以顺便给结构体变量赋初值，被称为结构体的初始化
3. 结构体变量初始化的时候，各个成员顺序初始化

```c
struct stu {
		char name[100];
		int score;
		int age;
	};

    struct stu student1= {"tiechui",100,18}; 
	struct stu student0;
	strcpy_s(student0.name, 100, "kerwin");
	student0.score = 100;
	student0.age = 100;
```

##### 3. 结构体数组

`结构体数组是个数组，由若干个相同类型的结构体变量构成的集合`

struct 结构体类型名 数组名[元素个数];

```c
struct student stu[3];
```

##### 4. 结构体指针

`即结构体的地址，结构体变量存放内存中，也有起始地址 咱们定义一个变量来存放这个地址，那这个变量就是结构体指针变量。 结构体指针变量也是个指针，既然是指针在 64 位环境下，指针变量的占 8 个字节，存放一个地址编号。`

struct 结构体类型名 * 结构体指针变量名;

```c
struct student *p;
struct student student1;

p  = &student1;
(*p).name
p->name

```

##### 5. 结构体与函数

`给函数传结构体变量的地址`

```c
void input(struct stu *student) {
	printf("请录入姓名，年龄， 成绩\n");
	scanf_s("%s%d%d", student->name, 100, &student->age, &student->score);
}

```

##### 6. 结构体内存分配

结构体变量大小是，它所有成员的大小之和。

###### 规则 1

**以多少个字节为单位开辟内存 给结构体变量分配内存的时候，会去结构体变量中找基本类型的成员哪个基本类型的成员占字节数多，就以它大大小为单位开辟内存。** 

 (1)：成员中只有 char 型数据 ，以 1 字节为单位开辟内存。

 (2)：成员中出现了 short int 类型数据，没有更大字节数的基本类型数据。以 2 字节为单位开辟内存 

 (3)：出现了 int float 没有更大字节的基本类型数据的时候以 4 字节为单位开辟内存。

 (4)：出现了 double 类型的数据， 以 8 字节为单位开辟内存。

###### 规则 2

(1)：char 1 字节对齐 ，即存放 char 型的变量，内存单元的编号是1 的倍数即可。

(2)：short int 2 字节对齐 ，即存放 short int 型的变量，起始内存单元的编号是2 的倍数即可。

(3)：int 4 字节对齐 ，即存放 int 型的变量，起始内存单元的编号是4 的倍数即可

(4)：long int 在 32 位平台下，4 字节对齐 ，即存放 long int 型的变量，起始内存单元的编号是4的倍数即可 

(5)：float 4 字节对齐 ，即存放 float 型的变量，起始内存单元的编号是4 的倍数即可

(6)：double 8 字节对齐，即存放 double 型变量的起始地址，必须是 8 的倍数，double 变量占8字节

###### 字节对齐的好处

用空间来换时间，提高 cpu 读取数据的效率

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220817114718562.png" alt="image-20220817114718562" style="zoom:67%;float:left;" />

##### 7.链表

`概念：链表是一种 物理存储结构上非连续 、非顺序的存储结构，数据元素的 逻辑顺序 是通过链表中的 指针链 接 次序实现的 。`

![image-20220818105810715](%E7%AC%94%E8%AE%B0.assets/image-20220818105810715.png)

```c

#include<stdio.h>
#include<stdlib.h>
struct student {
	char name[100];
	int iNumber;
	struct student* pNext;
};
int count = 0;
struct student* create() {
	struct student* pHead = NULL;
	struct student* pEnd, * pNew;


	pEnd = pNew = (struct student*)malloc(sizeof(struct student));
	if (!pNew) return;
	printf("请输入名字，和学号\n");
	scanf_s("%s", pNew->name, 100);
	scanf_s("%d", &pNew->iNumber);

	while (pNew->iNumber != 0) {
		count++;
		if (count == 1) {
			pNew->pNext = NULL;
			pEnd = pNew;
			pHead = pNew;
		}
		else {
			pNew->pNext = NULL;
			pEnd->pNext = pNew;
			pEnd = pNew;
		}

		pNew = (struct student*)malloc(sizeof(struct student));
		if (!pNew) return;
		scanf_s("%s", pNew->name, 100);
		scanf_s("%d", &pNew->iNumber);
	} 

	return pHead;
}
void print(struct student* pHead) {
	int index = 1;
	struct student *pTemp = pHead;
	while (pTemp != NULL) {
		printf("第%d个学生信息\n", index);
		printf("%s,%d\n", pTemp->name, pTemp->iNumber);
		pTemp = pTemp->pNext;
		index++;
	}
}

int main() {
	struct student* pHead = create();

	print(pHead);
}
```

#### 七. 共用体

共用体和结构体类似，也是一种构造类型的数据结构。把 struct 改成 union 就可以了。

`几个不同的变量共同占用一段内存的结构，在C语言中，被称作“共用体”类型结构共用体所有成员占有同一段地址空间 共用体的大小是其占内存长度最大的成员的大小`

```c
typedef struct {
    char name[100];
    int score;
}stu;

typedef struct {
    char name[100];
    int salary;
}tea;

typedef union 
{
    stu student;
    tea teacher;
} any;
```

共用体的特点： 

​	1、同一内存段可以用来存放几种不同类型的成员，但每一瞬时只有一种起作用

​	2、共用体变量中起作用的成员是最后一次存放的成员，在存入一个新的成员后原有的成员的值会被覆盖 

​	3、共用体变量的地址和它的各成员的地址都是同一地址

#### 八. 枚举

`将变量的值一一列举出来，变量的值只限于列举出来的值的范围内`

enum 枚举类型名  { 枚举值列表； }; 

在枚举值表中应列出所有可用值,也称为枚举元素

枚举元素是常量，默认是从 0 开始编号的。

```c
enum TYPE { STU = 1, TEA };

enum TYPE type;

if (type == STU) {
    //......
}
```

注意：

- 宏定义是一个值/表达式，不是一种类型

- 枚举是一种类型，可以定义枚举类型的一个变量

#### 九.位运算

##### 1. 原码反码补码

`正数在内存中以原码形式存放，负数在内存中以补码形式存放`

正数的 原码=反码=补码

原码：将一个整数，转换成二进制，就是其原码。 如单字节的 5 的原码为：0000 0101；-5 的原码为 1000 0101。

反码：正数的反码就是其原码；负数的反码是将原码中，除符号位以外，每一位取反。如单字节的 5 的反码为：0000 0101；-5 的反码为 1111 1010。

补码：正数的补码就是其原码；负数的反码+1 就是补码。 如单字节的 5 的补码为：0000 0101；-5 的补码为 1111 1011。

##### 2.位运算

`无论是正数还是负数，编译系统都是按照内存中存储的内容进行位运算。`

- &按位 与 

  任何值与 0 得 0，与 1 保持不变

- |按位 或

  任何值或 1 得 1，或 0 保持不变

- ~ 按位取反

  1 变 0，0 变 1

- ^ 按位异或

  相异得 1，相同得 0

- 位移

  \>>右移   << 左移

#### 十.预处理

1. 预编译  

​	将.c 中的头文件展开、宏展开 生成的文件是.i 文件 

2. 编译 

​	将预处理之后的.i 文件生成 .s 汇编文件 

3. 汇编

​	 将.s 汇编文件生成.o 目标文件 

4. 链接 

​	 将.o 文件链接成目标文件

5. 执行

##### 1.宏定义define

`定义宏用 define 去定义, 宏是在预编译的时候进行替换。`

(1) 不带参宏

\#define PI 3.1415

在预编译的时候如果代码中出现了 PI 就用 3.1415 去替换。

(2) 带参宏

#define  MAX(a,b)  (a>b?a:b)

`将来在预处理的时候替换成 实参替代字符串的形参，其他字符保留`

**带参宏和带参函数的区别** 

- 带参宏被调用多少次就会展开多少次，执行代码的时候没有函数调用的过程，不需要压栈弹栈。所以带参宏，是浪费了空间，因为被展开多次，节省时间。 

- 带参函数，代码只有一份，存在代码段，调用的时候去代码段取指令，调用的时候要，压栈弹栈。有个调用的过程。 所以说，带参函数是浪费了时间，节省了空间。 
- 带参函数的形参是有类型的，带参宏的形参没有类型名。



##### 2.选择性编译

（1）

```c
#ifdef KERWIN
	代码段一 
#else 
    代码段二
#endif
```

 (2)

```c
#ifndef KERWIN
	代码段一 
#else 
    代码段二
#endif
```

 (3)

```c
#if KERWIN==1
	代码段一 
#elif KERWIN==2
    代码段二
#else
    代码段三
#endif
```

**注意和 if else 语句的区别**

- if else 语句都会被编译，通过条件选择性执行代码

- 选择性编译，只有一块代码被编译

#### 十一.文件

##### 1.初识文件

文件用来存放程序、文档、音频、视频数据、图片等数据的。 

文件就是存放在磁盘上的，一些数据的集合。

**磁盘文件**： 指一组相关数据的有序集合,通常存储在外部介质(如磁盘)上，使用时才调入内存。

**设备文件**：在操作系统中把每一个与主机相连的输入、输出设备看作是一个文件，把它们的输入、输出等同于对磁盘文件的读和写。

键盘：标准输入文件 

屏幕：标准输出文件 

其它设备：打印机、触摸屏、摄像头、音箱等



##### 2.标准 io 库函数对磁盘文件的读取

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220824104049479.png" alt="image-20220824104049479" style="zoom:67%;float:left" />

文件缓冲区是库函数申请的一段内存，由库函数对其进行操作，程序员没有必要知道存放在哪里，只需要知道对文件操作的时候的一些缓冲特点即可。

##### 3.磁盘文件的分类

一个文件通常是磁盘上一段命名的存储区 ,计算机的存储在物理上是二进制的，所以物理上所有的磁盘文件本质上都是一样的：以字节为单位进行顺序存储.

从用户或者操作系统使用的角度

把文件分为： 

​	文本文件：基于字符编码的文件 

​	二进制文件：基于值编码的文件

**文本文件、二进制文件对比**

**译码**： 

​	文本文件编码基于字符定长，译码容易些； 

​	二进制文件编码是变长的，译码难一些（不同的二进制文件格式，有不同的译码方式，一般需要特定软件进行译码）。

**空间利用率**

二进制文件用一个比特来代表一个意思(位操作)； 

而文本文件任何一个意思至少是一个字符。 

所以二进制文件，空间利用率高。

**可读性：**

文本文件用通用的记事本工具就几乎可以浏览所有文本文件 

二进制文件需要一个具体的文件解码器

##### 4.文件指针

`文件指针在程序中用来标识（代表）一个文件的，在打开文件的时候得到文件指针，文件指针就用来代表咱们打开的文件。`

FILE * 指针变量标识符；

```c
typedef struct _iobuf {
    int cnt; // 剩余的字符，如果是输入缓冲区，那么就表示缓冲区中还有多少个字符未被读取
    char *ptr; // 下一个要被读取的字符的地址
    char *base; // 缓冲区基地址
    int flag; // 读写状态标志位
    int fd; // 文件描述符
    // 其他成员
} FILE;
```

> 在缓冲文件系统中,每个被使用的文件都要在内存中开辟一块 FILE 类型的区域,存放与操作文件相关的信息

<img src="%E7%AC%94%E8%AE%B0.assets/image-20220824104646521.png" alt="image-20220824104646521" style="zoom:67%;float:left;" />

对文件操作的步骤：

​	 1、对文件进行读写等操作之前要打开文件得到文件指针 

​	 2、可以通过文件指针对文件进行读写等操作 

​	 3、读写等操作完毕后，要关闭文件，关闭文件后，就不能再通过此文件指针操作文件了



##### 5.fopen

FILE *fopen(const char *path, const char *mode);

函数的参数：

- 参数 1:打开的文件的路径
- 参数 2：文件打开的方式，即以什么样的方式  r w a +



![image-20220824105245000](%E7%AC%94%E8%AE%B0.assets/image-20220824105245000.png)

返回值： 

- 成功：打开的文件对应的文件指针 
- 失败：返回 NULL 

##### 6.fclose

int fclose(FILE *fp);   

关闭 fp 所代表的文件

返回值： 

- 成功返回 0 
- 失败返回非 0

##### 7. fgetc 与 fputc

int fgetc(FILE *stream);

fgetc 从 stream 所标识的文件中读取一个字节，将字节值返回

**返回值**：  读到文件结尾返回 EOF

EOF 是在 stdio.h 文件中定义的符号常量，值为-1



int fputc(int c, FILE *stream)

fputc 将 c 的值写到 stream 所代表的文件中。

**返回值**： 

​	如果输出成功，则返回输出的字节值； 

​	如果输出失败，则返回一个 EOF。



```c
#include<stdio.h>
#pragma warning (disable:4996)
int main(void)
{
	FILE* fp1,*fp2;
	char ch;
	fp1 = fopen(".\\a.txt", "r+");
	
	if (fp1 == NULL)
	{
		printf("Cannot open the file\n");
		return 0;
	}
	fp2 = fopen(".\\b.txt", "w+");
	if (fp2 == NULL)
	{
		printf("Cannot open the file\n");
		return 0;
	}
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp2);
	}


	fclose(fp1);
	fclose(fp2);
}
```

##### 8. fgets 与 fputs

char *fgets(char *s, int size, FILE *stream);

从 stream 所代表的文件中读取字符，在读取的时候碰到换行符或者是碰到文件的末尾停止读取，或者是读取了 size-1 个字节停止读取，在读取的内容后面会加一个\0,作为字符串的结尾

int fputs(const char *s, FILE *stream);

将 s 指向的字符串，写到 stream 所代表的文件中

```CQL
#include<stdio.h>

int main() {
	FILE* fp1, * fp2;

	char str[100];

	int error1 = fopen_s(&fp1, "kerwin.txt", "r");
	if (error1 != 0) {
		printf("打开失败");
		return;
	}
	int error2 = fopen_s(&fp2, "copy.txt", "a");
	if (error2 != 0) {
		printf("打开失败");
		return;
	}
	fgets(str, 100, fp1);
	fputs(str, fp2);
	printf("|%s|\n", str);

	fclose(fp1);
	fclose(fp2);
}
```



##### 9.fread

size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

fread 函数从 stream 所标识的文件中读取数据，每块是 size 个字节，共nmemb 块，存放到ptr 指向的内存里

返回值： 实际读到的块数。

##### 10.fwrite

size_t fwrite(void *ptr, size_t size, size_t nmemb, FILE *stream);

fwrite 函数将 ptr 指向的内存里的数据，向 stream 所标识的文件中写入数据，每块是size 个字节，共nmemb 块。

##### 11.rewind

rewind 复位读写位置

void rewind(文件指针);

把文件内部的位置指针移到文件首

##### 12. fseek

int fseek(FILE *stream, long offset, int whence);

移动文件流的读写位置.

whence 起始位置 

- 文件开头 SEEK_SET 0 

- 文件当前位置 SEEK_CUR 1 

- 文件末尾 SEEK_END 2 

  

位移量: 以起始点为基点，向前、后移动的字节数，正数往文件末尾方向偏移，负数往文件开头方向偏移。

```c
	FILE* fp;

	int error = fopen_s(&fp, "kerwin.txt", "r+");
	if (error != 0) {
		return;
	}
	fseek(fp, 4, 0);
	
	char bir[100];
	fgets(bir,100,fp);

	printf("%s", bir);
```

##### 13.ftell

测文件读写位置距文件开始有多少个字节

long ftell(文件指针);

返回值： 返回当前读写位置(距离文件起始的字节数)，出错时返回-1.

```c
long int length;
length = ftell(fp)
```

#### 十二. 千锋图书管理借阅系统

```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct bookInfo
{
	char name[100];
	float price;
	int num;
};

struct Node {

	struct bookInfo data;
	struct Node* next;
};

struct Node* list = NULL;


struct Node* createHead() {
	struct Node* headNode = (struct Node *)malloc(sizeof(struct Node));

	if (headNode == NULL) return;
	headNode->next = NULL;

	return headNode;
}
struct Node* createNode(struct bookInfo data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	if (newNode == NULL) return;

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insertBook(struct Node *headNode,struct bookInfo data) {

	//根据 传来的data,创建一个新的Node 结构体，newNode
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

void readInfo(char* filename, struct Node* headNode) {
	//fscanf 返回EOF;
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fp = fopen(filename, "w");
		fclose(fp);
		return;
	}
	struct bookInfo temp;
	while (fscanf(fp, "%s %f %d\n",temp.name,&temp.price,&temp.num) != EOF) {
		insertBook(list, temp);
	}


	fclose(fp);
}

void saveInfo(char *filename,struct Node *headNode) {
	//打开文件
	FILE* fp = fopen(filename, "w");
	//写入文件 fwrite , fprintf
	if (fp == NULL) {
		return;
	}
	struct Node* move = headNode->next;
	while (move != NULL) {
		fprintf(fp, "%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

	//关闭文件
	fclose(fp);
}

void showlist(struct Node* headNode) {
	
	struct Node* move = headNode->next;
	while (move != NULL) {
		printf("%s %.1f %d\n", move->data.name, move->data.price, move->data.num);

		move = move->next;
	}

}

struct Node* searchByName(struct Node *headNode,char *name) {
	struct Node* move = headNode->next;

	while (move != NULL && strcmp(move->data.name,name)) {

		move = move->next;
	}
	return move;
}

void deleteByName(struct Node* headNode, char* name) {

	struct Node* move = headNode->next;
	struct Node* prev = headNode;
	while (move != NULL && strcmp(move->data.name, name)) {
		prev = move;
		move = move->next;
	}

	if (move == NULL) {
		return;
	}
	else {
	
		printf("删除成功");
		prev->next = move->next;
		free(move);
		move = NULL;
	}
}
void keyEvent() {
	int key = 0;
	scanf("%d", &key);
	struct bookInfo temp;
	struct Node* result;
	switch (key)
	{
	case 0:
		printf(" [录入] \n");
		printf(" 录入的书籍信息，名字，价格，数量\n");
		scanf("%s%f%d",temp.name,&temp.price,&temp.num);
		//printf("%s,%.1f,%d", temp.name, temp.price, temp.num);

		// 同步到链表
		insertBook(list,temp);
		// 同步文件
		saveInfo("kerwin.txt", list);
		break;
	case 1:
		printf(" [速览] \n");
		showlist(list);
		break;
	case 2:
		printf(" [借阅] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍，无法借阅\n");

		}
		else {
			//
			if (result->data.num > 0) {
				result->data.num--;
				printf("借阅成功\n");
				saveInfo("kerwin.txt", list);
			}
			else {
			
				printf("没有库存，无法借阅");
			}
		}
		break;
	case 3:
		printf(" [归还] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍，无法借阅\n");

		}
		else {
			result->data.num++;
			printf("归还成功\n");
			saveInfo("kerwin.txt", list);
		}
		break;
	case 4:
		printf(" [查找] \n");
		printf(" 查询的书名是：\n");
		scanf("%s", temp.name);

		result = searchByName(list, temp.name);
		if (result == NULL) {
			printf("未找到相关书籍\n");

		}
		else {
			printf("书名 价格 数量\n");
			printf("%s %.1f %d\n", result->data.name, result->data.price, result->data.num);

		}
		break;
	case 5:
		printf(" [删除] \n");
		printf(" 删除的书名是：\n");
		scanf("%s", temp.name);
		deleteByName(list,temp.name);
		saveInfo("kerwin.txt",list);
		break;
	case 6:
		printf(" [退出] \n");
		exit(0);//ctrl+c;
		break;
	default:
		break;
	}
}
void menu() {

	printf("----------------------------------\n");
	printf("千锋图书管理借阅系统\n");
	printf("0.录入书籍\n");
	printf("1.速览书籍\n");
	printf("2.借阅书籍\n");
	printf("3.归还书籍\n");
	printf("4.查找书籍\n");
	printf("5.删除书籍\n");
	printf("6.退出系统\n");
	printf("----------------------------------\n");
	printf("请输入(0~6):");

}
int main() {
	//初始化头部指针。
	list = createHead();
	// 读取原来文件的数据.
	readInfo("kerwin.txt", list);
	while (1) {
		menu();
		keyEvent();

		system("pause");
		system("cls");
	}
}
```

