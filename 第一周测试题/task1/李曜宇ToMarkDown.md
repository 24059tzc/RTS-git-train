### git是一个分布式版本控制系统，主要包括如下几个部分。

- Directory：使用Git管理的一个目录，也就是一个仓库，包含我们的工作空间和Git的管理空间。
- WorkSpace：需要通过Git进行版本控制的目录和文件，这些目录和文件组成了工作空间，除了.git之外的都属于工作区。
- .git：存放Git管理信息的目录，初始化仓库的时候自动创建。
- Index/Stage：暂存区，或者叫待提交更新区，在提交进入repo之前，我们可以把所有的更新放在暂存区。
- Local Repo：本地仓库，一个存放在本地的版本库；HEAD会只是当前的开发分支（branch）。
- Stash：是一个工作状态保存栈，用于保存/恢复WorkSpace中的临时状态。

### 常见命令

1. git init 初始化

2. git add：将文件提交到暂存区

3. git commit -m：将暂存区文件提交到仓库（单引号内为注释）

4. git status：检查当前文件状态

5. git diff：查看文件修改的内容

6. git log：获得历史修改记录

7. git log --pretty=oneline：使记录只显示主要的内容，一行显示

8. cat：查看文件内容

9. git reset --hard HEAD^：回退到上一个版本

10. git reflog：获取历史版本号

11. git reset --hard 版本号：回退到该版本号对应的版本

12. git push origin master进行文件推送。

    

