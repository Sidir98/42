#!/bin/bash
echo $(groups $(env | grep "FT_USER"|cut -c 9-))| tr " " "," | tr -d "\n"
