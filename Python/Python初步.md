# Python初步

## print函数

```python
print(520)#可以直接输出数字
print('helloworld')
print(1+3)
#输出在控制台上

#若要输出在文件中
fp=open('Users/guoanqi/Desktop/Test.txt','a+')
print('Hello, python', file=fp)
fp.close()

#不换行输出
print('hello','world','python')//用逗号隔开


```

## 转义字符

\n 换行

\r 回车

\t 水平制表

\b 退格

```python
print('hello\nworld')#换行
print('hello\tworld')#水平制表，每四个一个制表位（\t）
print('hello\bworld')#退格，输出的时候o会变没了
print('hello\rworld')#world会把hello覆盖掉

print('http:\\\\www.baidu.com')#输出的是http:\\www.baidu.com
#如果不希望字符串中的转义字符起效果，则在字符串前加上r
#不能以反斜线结尾


```

## 变量

```python
name = 'Maria' #无需声明变量类型
print(name)
print('标识',id(name))  #内存地址
print('类型',type(name))
print('value',name)
#内存分析
```

## 整数不同进制输出

```python
print('十进制',118)
print('二进制',0b10101111)#0b代表二进制
print('八进制',0o176)#0o代表八进制
print('十六进制',0x1EAF)
```

## Float

浮点的运算会出现偏差，比如

```python
print(1.1+2.2)#输出的结果是3.30000000000000000003
from decimal import Decimal
print(Decimal('1.1')+Decimal('2.2'))#输出3.3
```

## 类型转化

```python
name = '张三'
age = 20
print(type(name),type(age))
print('我叫'+name+'今年,'+age+'岁')
```

```python
a = 10
b = 198.8
c = False
print(type(a),type(b),type(c))
#转化
print(str(a),str(b),str(c))
#这样以后，类型就转化了
s1 = '128128'
f1 = 98.1
s2 = '76'
ff = True
print(int(s1),tyoe(s1))
#转化为int
print(int(f1))#截取整数
print(int(ff))#输出的为1

print(float(s2),type(s2))
#若变量不是数字串，则不允许转化
```

## Input函数

```python
pre = input('想要什么礼物？')#input相当于一个提示语
print(present, type(present))在程序里输入答案

a = int(input('输入数字a'))
b = int(input('输入数字b'))
print(a+b)
```

## 算术运算符

```python
print(11//2)#输出5，//为整除运算
print(11%2) #1
print(2**2)#2的2次方
print(2**3)#2的3次方
print(9//4)
print(-9//-4)
print(9//-4)#-3
print(-9//4)#-3向下取整
print(-9%4)#-3  公式  余数=被除数-除数*商
```

## 赋值运算符

从右向左执行

```python
a = 20
a += 30
print(a)#输出50
# /=    //=    

#解包赋值
a,b,c = 20,30,40
print(a,b,c)
a,b = b,a #交换值
print(a,b)
```

## 比较运算符

```python
a,b=10,20
print(a>b)# False
#比较运算符的结果为布尔值

#is判断的是对象的标识
print(a is b)#False,说明a与b的标识不一样    is not
```

## 布尔运算符

```python
#and
a,b = 1,2
print(a==1 and b<=2)#True
#or
#not 对bool值取反
#in
s='Helloworld'
print('l'in s)#True
print('l'not in s)#False
```

## 位运算符

按位：$| << >>

对应数位

向左移位相当于*2

```python
print(4<<1)#2
print(4>>2)#8
```

## 运算符的优先级

先算数运算，再位运算，再比较运算，再and，再or