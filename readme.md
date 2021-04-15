# 此工程为学习cmake所用
## 下载工程，创建build文件夹
下载此工程后
'''Bash
mkdir build
cd build
'''
## 使用cmake
如果是windows，使用如下指令
'''Bash
cmake -G"Unix Makefiles" ../
'''
如果是linux，使用如下指令
'''Bash
cmake ..
'''
## 编译
'''Bash
make
'''
## 运行
可执行文件在bin文件夹中
'''Bash
cd bin
./main
'''