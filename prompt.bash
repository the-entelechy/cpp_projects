#!/bin/bash
PINK="$(tput setaf 213)"
PROMPT_COMMAND='PS1_CMD1=$(git branch --show-current 2>/dev/null)'; 
PS1='${PINK}\u@\h: \n    \w ${PS1_CMD1} > '

