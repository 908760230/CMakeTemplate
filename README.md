# CMakeTemplate
<font size = 3>
这是一个CMake工程的范例!<br>
${CMAKE_BINARY_DIR}/bin - 保存程序的可执行文件<br>
${CMAKE_BINARY_DIR}/lib - 保存编译完成后的链接库文件  
</font>

## 一、依赖库
+ [CppCheck](http://cppcheck.net)
+ [llvm](https://llvm.org/)

## 二、功能
目前支持的模块如下：

- [X] CppCheck
- [ ] ninjia
- [ ] vld
- [ ] valgrind
- [X] CPack
- [X] gTest
- [x] clang-format

## 三、执行CTest
+ 运行CTest的指令
```bash
ctest -C debug
```

+ 点击VsCode下方状态栏中的RunCTest