#!/bin/bash
cat /etc/passwd | grep "_" | sed -n 'n;p' | cut -d ":" -f1 | rev | sort -rf | sed -n "$FT_LINE1,$FT_LINE2 p"  | tr '\n' ',' | sed "s/,/, /g" | rev | sed "s/ ,/./" | rev