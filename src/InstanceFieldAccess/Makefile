# your JDK path
JDK_INCLUDE=/home/johnny/xiekunming/jdk1.8.0_51/include

# -m32, enable -m32 flag in x64 environment
INCLUDE_DEPENDS=-I$(JDK_INCLUDE) -I$(JDK_INCLUDE)/linux
libTestInstanceFieldAccess.so:InstanceFieldAccess_TestInstanceFieldAccess.c
	gcc -m32 -fpic -shared $^ -o $@ $(INCLUDE_DEPENDS)
