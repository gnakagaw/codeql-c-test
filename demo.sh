#!/bin/bash

# update codeql queries
git submodule update

rm -rf codeql_db
codeql database create codeql_db --language=cpp --command="cc target.c"
codeql database analyze codeql_db codeql/cpp/ql/src/Critical/MemoryNeverFreed.ql codeql/cpp/ql/src/Documentation/TodoComments.ql --format=csv --output=result.csv

cat result.csv

