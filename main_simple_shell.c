.TH man 1 "16 Dec 2023" "0.1" "simple_shell man page"

.SH NAME
.B simple_shell
- Simple shell create in C to interact with a linux operating system.

.SH SYNOPSIS
 hsh [options] [file]

.SH DESCRIPTION
Shell is a UNIX term for the interactive user interface with an operating system. The shell is the layer of programming that understands
and executes the commands a user enters. In some systems, the shell is called a command interpreter. A shell usually implies an interface
with a command syntax 

.B Overview

The simple shell is a command that reads lines from either a file or the terminal, interprets them, and generally executes other commands. It is the program that is started when a user logs into the system. It incorporates many features to aid interactive use and has the advantage that the interpretative language is common to both interactive and non-interactive use (shell scripts). That is, commands can be typed directly to the running simple shell or can be put into a file, which can be executed directly by the simple shell.
.SH Return Value

Always 0 for success, other number means failure.

.SH PATH

It will look inside al directions in PATH env variable for executable.

.SH

.SH OPTIONS
.B simple_shell
Command options will be typed after the main command followed by a space and a
 '-' symbol.

.SH EXAMPLE

[command] [options]
$ ls -l

.SH BUGS
Single space required after argument.


.SH AUTHOR
Clinton Okoth
