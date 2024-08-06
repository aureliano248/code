#!/bin/bash
# g++ -g main.cpp -o main
# rm gdb.txt

# 指定要调试的程序
program="main"

# 指定输出文件名
output_file="1.txt"

# 创建 GDB 命令文件
gdb_commands="gdb_commands.txt"
# echo "set logging enabled on" > $gdb_commands
echo "disassemble /s main" >> $gdb_commands
# echo "disassemble /s F" >> $gdb_commands
# echo "disassemble /s test::test(int,int,int)" >> $gdb_commands
# echo "disassemble /s test::test(const test &)" >> $gdb_commands
# echo "set logging enabled off" >> $gdb_commands
echo "quit" >> $gdb_commands

# 运行 GDB 并执行命令文件
gdb --batch -x $gdb_commands $program

# 删除临时的 GDB 命令文件
rm $gdb_commands

echo "汇编代码已保存到文件: $output_file"