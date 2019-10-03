/***********HOW TO USE GIT AND GITHUB**********/

open the entire folder with "open with vs code"

touch <filename>

git init // initialize the folder

// before you start anything you should provide ur name
// and email-id

// git config --global user.name '<name>'
// git config --global user.email '<email>'

git config --global user.name 'Manoj Soni'

git config --global user.email 'er.manojsoni@hotmail.com'

git add index.html //git add <filename>

//staging area -SA
git status // see tracked and untracked files
// and also the changes to be committed
use "git rm --cached <file>..." to unstage

git add *.html// adds all html files to the staging area
git add *.c // adds all c files to the staging area
git add *.* // wild card to add all files to the staging area
git add . // GIT ADD DOT // dot is also the wildcard to 
// add all files
git rm --cached *.* // wild card to remove all files from SA

git commit // 
// termial shall show this message
// hint: Waiting for your editor to close the file...

// and a new window with some messages will open in vscode
// write some notes there, like what changes you made 
// (very short description) and save and close the file











// after you successfully close the editor, u should see msg
// like this:
[master (root-commit) f2d60c5] <YOUR MSG THAT YOU WROTE THERE>
 2 files changed, 8 insertions(+)
 create mode 100644 app.js
 create mode 100644 index.html
// CONGRATULATIONS!, YOU COMMITED THE CHANGES
// try git status again and u shall see this
git status
On branch master
nothing to commit, working tree clean

git commit -m 'changed app.js' // skip the editor opening thing
// commit here with a short description

// u should see this success msg on the terminal
[master 95cd864] changed app.js
 1 file changed, 1 insertion(+)

// gitignore file ".gitignore"
// create using
touch .gitignore
// u may open that file with notepad
// and add the files to be ignored
// e.g create a file named "log.txt", using 
touch log.txt
// , usually people don't like to include log files 
// no wopen the .gitignore file and add
// log.txt
// save and close

git add .
git status
// you should see this, "Did you notice there is no log.txt?"
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   .gitignore



// Don't want to include a directory?
// Create two directories named dir1 and dir2
// add some files inside them
// let say, "app1.js" inside dir1, "app2.js" inside dir2
// want to exclude the entire dir2?
// just add "/dir2" to .gitignore file and save & exit

// check
git add .
git status
// you should not see dir2
On branch master
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        new file:   .gitignore
        new file:   dir1/app1.js


// adding *.txt, *.html, *.ABCD to the gitignore file will
// exclude all files with those extensions

// branching and merging
// commit all changes before proceeding
git commit -m 'another change'

// create new branch say "branch2" branch
git branch branch2

// enter a new branch
git checkout <name_of_the_branch>

// enter branch2
git checkout branch2 // example

// enter this branch, make some changes, like add new file,
// edit some files and come back to to the master branch
// to see the changes, 

// Viola!!., you won't find any changes,
// BECAUSE YOU MADE CHANGES IN THE branch2 BRANCH!!

// Merging two branches - master+branch2 in this case, example
git merge branch2 // branch2 will merge with the master branch
// and you and see the changes


// REMOTE REPOSITORY - LIKE GITHUB
// First login to github and create a repository
// a repository named "cpp"

git remote add origin https://github.com/<USER>/<REPOSITORY-NAME>.git
git remote add origin https://github.com/devmanojsoni/cpp.git

PUSH
git push -u origin master

// when you add a file or edit a file
// do this
git add . // to add all files
git add <filename> // to add a specific file
// and then immidiately commit,"what exact changes you made"
git commit -m 'added new file -max element in an array' // example

git push //can also be used now

// To clone the entire repository to another folder
git clone https://github.com/USER/REPOSITORY-NAME.git
git clone https://github.com/devmanojsoni/cpp.git

