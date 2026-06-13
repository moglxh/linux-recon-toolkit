# Syscall Observations

## Hello World Program

Observed using:

```bash
strace ./hello
```

Key observations:

* Process starts through execve()
* Dynamic linker loads libraries
* Program writes output using write()
* Program exits through exit_group()

Learning goal:

Understand the path:

Program
↓
libc
↓
syscall
↓
kernel
