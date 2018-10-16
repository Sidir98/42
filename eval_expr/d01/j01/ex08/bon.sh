#!/bin/bash
ldapsearch -Q -LLL "(sn=*BON*)" cn | grep '^cn:' | wc -l | bc
