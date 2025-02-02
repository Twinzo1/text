#!/bin/ksh

FullShellName=$(whence "$0")

# To get the name of the current script
ShellName=${FullShellName##*/}

# To get the name of the containing directory
ShellDir=${FullShellName%/*}

# To give the list of e-mail target guys. You can give a list of email.
export MAIL_ADDR_LIST="ygd@soleil"

# To launch the data transfer
whence adl_compare_workspaces.sh 2>&1 >/dev/null
if [ $? -ne 0 ]
then
  echo "adl_compare_workspaces.sh script file has not been found. Execute the AdeleMultiSite_profile before start the data transfer" 1>&2
  exit 2
fi 

echo "### DEBUG $(whence adl_compare_workspaces.sh)"
#adl_compare_workspaces.sh -tid YGD_T1 \
adl_compare_workspaces.sh \
  -rl 5 -rp /u/env/isl/tck_init -rw YGDROOT -rb USER_adls1 \
  -fw Fw1 Fw2 Fw3 Fw31 Fw4 \
  -ll 5 -lp /u/env/isl/tck_init -lw YGDINT2 -limage UNIX -lb USER_adls1 \
  2>&1 | tee /u/users/ygd/YGDTREE2/YGDINT2/ToolsData/MultiSite/YGD_T2/adl_compare_workspaces.sh.out

rc=$?

exit $rc
