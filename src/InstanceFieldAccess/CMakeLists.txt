SET(SRC InstanceFieldAccess_TestInstanceFieldAccess.c)
ADD_LIBRARY(TestInstanceFieldAccess SHARED ${SRC})

INSTALL(TARGETS TestInstanceFieldAccess DESTINATION InstanceFieldAccess)
