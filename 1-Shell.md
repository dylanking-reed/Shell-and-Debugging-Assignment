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
   
