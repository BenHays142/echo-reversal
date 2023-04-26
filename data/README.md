# Data
This directory contains a pre-annotated `rzdb` file so you don't need to manually add each function in `../notes/functions.md` to Cutter. The `rzdb` file is `./echovr.exe.rzdb.tar.gz`, compressed with `gnu tar` to bypass GitHub file size limits. Note that because of a [design flaw](https://github.com/rizinorg/rizin/issues/3296) in Rizin, you'll have to manually change some paths: see below for additional details. Also note that this flaw in Rizin means you will not be able to import this RZDB file in Cutter on Windows systems due to there being some hardcoded Linux-specific values. It's possible to change these, but it's generally more effort than it's worth unless you *really need* to work on Windows for some reason.

## Fixing the RZDB file
There are some hardcoded paths that you need to change before attempting to import the RZDB file in Cutter. Because this will only work on a Linux system, you can use the below line to automatically fix the paths without opening up an editor (make sure to replace the variable with the actual file path!). Also, this automatically extracts the `*.tar.gz` file.
```
export echovr_exe_path="/full/path/to/echovr.exe"; [ -f "./echovr.exe.rzdb" ] || { echo "The echovr.exe.rzdb file must be in the current directory for this to work."; return } && { tar -xf echovr.exe.rzdb.tar.gz; rm echovr.exe.rzdb.tar.gz; sed -i "s,/home/some_user,$HOME,g; s,$HOME/echovr.exe,${echovr_exe_path},g; s,$HOME/echovr.exe.rzdb,$(pwd)/echovr.exe.rzdb,g" ./echovr.exe.rzdb }
```
Note that this will set the current directory as the path for the project file which means you *cannot move it*, as we're changing the previous values to point here instead, but they're still harcoded. The same goes for the Echo VR executable file (it shouldn't be moved).

## Importing the RZDB file
- Launch Cutter
- Navigate to the "Projects" tab at the top
- Click the "Select" button on the right of the text input area
- In the file picker, select the RZDB file you just fixed
- Wait for Cutter to load it, and you're ready to start reversing!
