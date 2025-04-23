#!/bin/bash

find . -name '*.sh' | sed 's/\.sh$//' | xargs -n1 basename
