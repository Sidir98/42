#!/bin/bash
find . -type f -name "*.sh"| xargs -n 1 basename| rev | cut -c 4- | rev