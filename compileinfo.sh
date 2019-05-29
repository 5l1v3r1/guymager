#!/bin/bash

echo '// Automatically generated file. See project file and compileinfo.sh for further information.'
date --utc '+const char *pCompileInfoTimestamp = "%Y-%m-%d-%H.%M.%S";'
head -qn 1 changelog debian/changelog 2>/dev/null | awk '{
                                    Version = $2
                                    gsub ("\\(", "", Version)
                                    gsub ("\\)", "", Version)
                                    print "const char *pCompileInfoVersion   = \"" Version "\";"}'


