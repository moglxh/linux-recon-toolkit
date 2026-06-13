# Linux Recon Toolkit

A collection of small Linux systems programming and process inspection tools built while studying Linux internals, systems programming, and binary analysis.

## Goals

* Understand Linux internals
* Learn Linux systems programming in C
* Explore process and file descriptor behavior
* Build foundations for reverse engineering and malware analysis

## Current Tools

### fd_inspector.sh

Displays open file descriptors for a specified process using the `/proc` filesystem.

Usage:

```bash
./fd_inspector.sh <PID>
```

### file_reader.c

Reads file contents using Linux file I/O system calls.

Concepts explored:

* open()
* read()
* write()
* close()

Compile:

```bash
gcc file_reader.c -o file_reader
```

Run:

```bash
./file_reader test.txt
```

## Learning Progress

Current Topics:

* Linux file descriptors
* System calls
* Process inspection
* Basic C programming
* Linux file I/O
