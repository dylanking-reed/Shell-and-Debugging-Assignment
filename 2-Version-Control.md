b) In order to revert to a previous repository state, `git revert` can be used. Find the
   most recent commit which you'd like to keep using `git log`, and note its commit hash.
   Then, the command `git revert --no-commit <hash>..HEAD` can be used to revert all
   commits succeeding the commit with hash &lt;hash&gt;. Then, commit the reversion.

c) In version control, branches are (separated) series of commits. Multiple branches are 
   often useful for organizing repositories. For example, there may be an `experimental` 
   branch which holds implementations of experimental features. This is helpful because 
   the `main` branch remains easily accessible and maintainable. To create a new branch, 
   `git branch <branch_name>` can be used. This creates a new branch without switching
   the current working branch. To create and switch to a new branch, 
   `git checkout -b <branch_name>` can be used.
