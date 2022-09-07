#!/usr/bin/env sh

set -e

# uses access permissions as simplification of executable detection
if command -v 'fd' &> /dev/null; then
  fd -E clean.sh -t x -x rm {}
  fd -I -e o -t f -x rm {}
  fd -I -t d zig-cache -x rm -fr {}
  exit 0
fi

echo 'could not find `fd`, please use `git status` and `git clean -f`'
echo '.git dir may have hooks and find does not understand gitignore'
exit 1
