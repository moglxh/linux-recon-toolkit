#!/bin/bash

file "$1"

echo

readelf -h "$1"

echo

readelf -S "$1"
