# new
Git global setup
git config --global user.name "xianzheng"
git config --global user.email "xianzheng@mxic.com.cn"

Create a new repository
git clone gitXXX
cd test
git switch -c main
touch README.md
git add README.md
git commit -m "add README"
git push -u origin main

Push an existing folder
cd existing_folder
git init --initial-branch=main
git remote add origin git@192.168.162.5:xianzheng/test.git
git add .
git commit -m "Initial commit"
git push -u origin main
