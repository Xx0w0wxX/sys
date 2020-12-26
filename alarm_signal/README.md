
```bash
╰─❯ sudo dtruss ./a.out

or

╰─❯ strace ./a.out
```


```bash
╰─❯ man alarm
...
The alarm() function sets a timer to deliver the signal SIGALRM to the calling process after the specified number of seconds.
...
```

```bash
╰─❯ kill -l
HUP INT QUIT ILL TRAP ABRT EMT FPE KILL BUS SEGV SYS PIPE ALRM TERM URG STOP TSTP CONT CHLD TTIN TTOU IO XCPU XFSZ VTALRM PROF WINCH INFO USR1 USR2
```



- https://unix.stackexchange.com/questions/10231/when-does-the-system-send-a-sigterm-to-a-process
- https://www.atmarkit.co.jp/ait/articles/1708/04/news015.html
- https://stackoverflow.com/questions/31045575/how-to-trace-system-calls-of-a-program-in-mac-os-x

