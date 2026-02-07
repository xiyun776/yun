该项目为车载多媒体，使用qt6和cmake编译，需要注意的地方注释在代码和CMakeLists中。
运行直接执行car.sh即可，或者手动配置Makefile也行。

cmake -DCMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/cmake/Qt6 ..
分解说明：
cmake - CMake工具，用于生成Makefile
-D - 定义一个CMake变量
CMAKE_PREFIX_PATH=/usr/lib/x86_64-linux-gnu/cmake/Qt6 - 告诉CMake去哪里找Qt6
CMAKE_PREFIX_PATH 是CMake的搜索路径变量
/usr/lib/x86_64-linux-gnu/cmake/Qt6 是Ubuntu 22.04中Qt6的CMake配置文件位置
.. - 指向上一级目录（项目根目录，CMakeLists.txt所在位置）
作用：
读取 ../CMakeLists.txt 文件
在 /usr/lib/x86_64-linux-gnu/cmake/Qt6 中查找Qt6
检查依赖（Qt6::Widgets, Qt6::Network, Qt6::Multimedia等）
生成 Makefile 和其他构建文件
配置自动MOC、UIC、RCC工具

make -j$(nproc)
分解说明：
make - GNU Make工具，根据Makefile编译项目
-j - 并行编译选项（使用多个CPU核心）
$(nproc) - Shell命令替换，获取CPU核心数
nproc 命令返回可用的CPU核心数（如：4、8、16）
$(...) 执行命令并替换为结果
例如：如果有8核CPU，相当于 make -j8
作用：
读取CMake生成的Makefile
使用所有CPU核心并行编译
编译顺序：
生成MOC文件（moc_*.cpp）
生成UI头文件（ui_*.h）
生成资源文件（qrc_*.cpp）
编译所有 .cpp 文件为 .o 对象文件
链接所有对象文件生成可执行文件 car
