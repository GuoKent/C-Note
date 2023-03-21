#### stack容器

在c++ 中,stack的头文件是 `#include<stack>`

```c++
stack<int> q;	// 以int型为例
int x;
q.push(x);		// 将x压入栈顶
q.top();		// 返回栈顶的元素
q.pop();		// 删除栈顶的元素,不返回任何值
q.size();		// 返回栈中元素的个数
q.empty();		// 检查栈是否为空,若为空返回true,否则返回false
```

