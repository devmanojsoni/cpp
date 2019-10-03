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
git add . // GIT ADD DOT // dot is also the wildcard to add all files
git rm --cached *.* // wild card to remove all files from SA

git commit // 
// termial shall show this message
// hint: Waiting for your editor to close the file...

// and a new window with some messages will open in vscode
// write some notes there, like what changes you made 
// (very short description) and save and close the file

// after you successfully close the editor, u should see msg
// like this:
/*
[master (root-commit) f2d60c5] <YOUR MSG THAT YOU WROTE THERE>
 2 files changed, 8 insertions(+)
 create mode 100644 app.js
 create mode 100644 index.html
*/

// CONGRATULATIONS!, YOU COMMITED THE CHANGES

// try git status again and u shall see this
/* git status
On branch master
nothing to commit, working tree clean*/

git commit -m 'changed app.js' // skip the editor opening thing
// commit here with a short description