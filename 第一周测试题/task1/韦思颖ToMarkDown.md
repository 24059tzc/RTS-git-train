### git组成：

​		git是一个开源分布式版本控制系统，主要由工作区（workspace)、暂存区（staging area)和版本库（repository)组成。

​		其中，工作区就是在电脑中能看到的目录；暂存区一般存放在.git目录下的index文件（.git/index）中，有时也叫作索引（index）；版本库是工作区的一个隐藏目录.git。

![image-20230717230621599](C:\Users\DELL\AppData\Roaming\Typora\typora-user-images\image-20230717230621599.png)

### git常见命令使用原理：

1.cd：进入某个目录；

2.mkdir：创建一个文件；

3.pwd：显示当前的目录路径；

4.git init：初始化仓库；执行完成该命令后，Git 仓库会生成一个 .git 目录，该目录包含了资源的所有元数据，其他的项目目录保持不变。

5.git add：添加文件到暂存区；当对工作区修改（或新增）的文件执行git add命令时，暂存区的目录树被更新，同时工作区修改（或新增）的文件内容被写入到对象库中的一个新的对象中，而该对象的ID被记录在暂存区的文件索引中。

6.git commit -m：将暂存区文件提交到仓库；执行提交操作时，暂存区的目录树写到版本库（对象库）中，master 分支会做相应的更新。即 master 指向的目录树就是提交时暂存区的目录树。

7.git status：检查当前文件状态；通过查看仓库当前的状态，显示有变更的文件；

8.git diff：查看文件修改的内容；通过比较暂存区和工作区的差异，得到修改的内容；

9.git log：获得历史修改记录，git log --pretty=oneline可使记录只一行显示主要内容；

10.cat：查看文件内容；

11.git reset --hard HEAD^：回退到上一个版本；

12.git reflog：获取历史版本号；

13.git reset --hard 版本号：回退到该版本号对应的版本，git reset --hard HEAD~n可以回退到n个版本之前；

14.git clone：拷贝一份远程仓库；也就是下载一个项目，执行该命令后，会在当前目录下创建一个名为grit的目录，其中包含一个 .git 的目录，用于保存下载下来的所有版本记录。

15.git rm：将文件从暂存区和工作区中删除；当执行git rm --cached<file>命令时，暂存区删除文件，工作区则不做出改变；

16.git mv：移动或重命名工作区文件；

17.git blame <file>：以列表形式查看指定文件的历史修改记录；

18.git remote：远程仓库操作；

19.git fetch：从远程获取代码库；

20.git pull：下载远程代码并合并；

21.git push：上传远程代码并合并；

22.git config：设置git，git config --list可显示当前git的配置信息，编辑git配置文件时，git config -e针对当前仓库，git config -e --global针对系统上所有仓库。