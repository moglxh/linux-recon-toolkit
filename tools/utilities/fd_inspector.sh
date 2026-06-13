#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <PID>"
    exit 1
fi

PID=$1

if [ ! -d "/proc/$PID" ]; then
    echo "Process $PID does not exist"
    exit 1
fi

echo "FD    TARGET"

for fd in /proc/$PID/fd/*; do
    FD_NUM=$(basename "$fd")
    TARGET=$(readlink "$fd")

    printf "%-5s %s\n" "$FD_NUM" "$TARGET"
done
