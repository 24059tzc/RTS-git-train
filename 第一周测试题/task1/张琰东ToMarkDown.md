# 基本命令

1. cd + 目录名       改变目录
2. cd..     回到上一级目录 
3. pwd 显示当前所在的路径
4. clear（Linux）/cls（Windows） 清屏操作
5. ls  列出当前文件下的所有文件
6. touch 新建一个文件，例如touch index.js 则会在当前目录下新建一个index.js文件
7. rm（remove） 删除一个文件
8. mkdir 新建一个目录，即新建一个文件夹
9. rm-r 删除一个文件夹，rm-r src 即删除src目录
10. rm-rf/直接一删到底
11. mv 移动一个文件，例如 mv index.html test，将index.html文件移动到test中
12. reset 重新初始化终端/清屏
13. history查看历史命令

# GIt配置（本质文本文件）

1.git config -l 查看git配置

2.git config --system --list 查看系统配置

3.git config --global --list查看用户自己的配置

4.git config --global user.name "名字" 配置自己的信息

5.git config--global user.email "邮箱" 配置自己的相关信息

# Git的基础理论-分布式版本控制

Git有三个工作区域，分为工作目录（Working Direction）、暂存区（Stage/Index）、资源库（Repository)

从Working Direction通过git add files命令提交到Stage，再由git commit提交到History（本地仓库），由本地仓库git push提交到远程仓库返乡操作

workspace：工作区，平时用来存放项目代码的地方

Index/Stage：暂存区，用来临时存放改动，事实上是一个文件，保存即将提交到文件列表的信息

Repository：仓库区，就是安全存放数据的位置，这里面有提交的所有版本的数据。其中的HEAD指向最新放入仓库的版本

Remote：远程仓库，托管代码的服务器，可以简单的认为是项目组中的一台电脑用于远程数据狡交换

自己主要操作的是工作区与远程仓库

# 工作流程

1.在工作目录中添加与修改文件；

2.将需要进行版本管理的文件放入暂存区域；

3.将暂存区域的文件提交到git仓库

git管理的文件有三种状态：已修改，已暂存，已提交