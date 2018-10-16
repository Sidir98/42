#!/bin/bash
find . -type d -print -o -type f -print | wc -l | bc
