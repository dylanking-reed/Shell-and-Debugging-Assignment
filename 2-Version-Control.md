b) In order to revert to a previous repository state, `git revert` can be used. Find the
   most recent commit which you'd like to keep using `git log`, and note its commit hash.
   Then, the command `git revert --no-commit <hash>..HEAD` can be used to revert all
   commits succeeding the commit with hash &lt;hash&gt;. Then, commit the reversion.
