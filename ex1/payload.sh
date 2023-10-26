#!/bin/bash
# https://www.xmodulo.com/embed-binary-file-bash-script.html

# line number where payload starts
PAYLOAD_LINE=$(awk '/^__PAYLOAD_BEGINS__/ { print NR + 1; exit 0; }' $0)

# directory where a binary executable is to be saved
WORK_DIR=/tmp
# name of an embedded binary executable
EXE_NAME=hello

# extract the embedded binary executable
tail -n +${PAYLOAD_LINE} $0 | base64 -d | cat > ${WORK_DIR}/${EXE_NAME}
chmod +x ${WORK_DIR}/${EXE_NAME}

# run the executable as needed
${WORK_DIR}/${EXE_NAME}

exit 0
__PAYLOAD_BEGINS__
