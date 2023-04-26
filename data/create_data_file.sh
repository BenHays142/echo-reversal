#!/bin/bash

_main () {
  # copy and rename refs
  echo "Copying file, renaming user-specific references..."
  cp "$1" .
  sed -i "s,$USER,some_user,g" "$1"

  # compress and remove raw version
  echo "Compressing file, removing non-compressed version when done..."
  tar -czf "${1}.tar.gz" "$1"
  rm "$1"

  # all done :3
  echo "All done!"
}

_main "$1"
