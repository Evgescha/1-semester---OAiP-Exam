cd
git config --global user.email "Yauheni.maslau@yandex.by"
git config --global user.name "Evgescha"
git init
git add .
git commit -m "first commit"
set /P var="Paste repository: "
git remote add origin %var%
git push -u origin master
pause