a) In order to run an executable regardless of working directory, the executable must
   either be invoked by absolute path, such as `$ /home/foouser/myfoo/foo "hello"`, or by
   the usage of the `$PATH` environment variable. This is much more convenient, as it
   allows the user to invoke the executable using `$ myfooexecutable "hello"`. In order to
   add an executable to the `$PATH`, append a line in the form of 
   ```sh
   export PATH=$PATH:"/home/foouser/myfoo/foo" 
   ```
   to `~/.bashrc`, and run `. ~/.bashrc` to load the changes into the current bash
   instance.

b) An example of a setting that is important to how I interact with the shell in my 
   `./bashrc` is `alias ll='ls -alF'`. I almost exclusively use this alias `ll`, as I find
   it easier to read and more informative. My `~/.bashrc` has been included in this
   repository. It is nearly the default (that comes with ubuntu/debian), but I've modified
   the `$PS1` variable to only show the working directory's name instead of its path, as
   full paths are often quite long when dealing with WSL. for example, the path of this
   file on my local machine is:  
   `/mnt/c/Users/School Dylan King/Documents/Reed/Cs 221/Shell-and-Debugging-Assignment/1-Shell.md`
   which, at 96 characters long, wraps the line in my 80 char wide terminal.
