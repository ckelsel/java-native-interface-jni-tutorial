/**
*  Copyright (C) 2015 ckelsel@hotmail.com
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*  
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <jni.h>
#include <stdio.h>
#include "InstanceFieldAccess_TestInstanceFieldAccess.h"

JNIEXPORT void JNICALL 
Java_InstanceFieldAccess_TestInstanceFieldAccess_accessField (JNIEnv *env, jobject obj)
{
    jfieldID fid;
    jstring jstr;
    const char *str;

    jclass cls = (*env)->GetObjectClass(env, obj);

    /* look for String s */
    fid = (*env)->GetFieldID(env, cls, "s", "Ljava/lang/String;");
    if (fid == NULL) {
        return;
    }

    jstr = (*env)->GetObjectField(env, obj, fid);
    str = (*env)->GetStringUTFChars(env, jstr, NULL);
    if (str == NULL) {
        return; /* out of memory */
    }

    printf("In C: %s [receive from java]\n", str);

    /* free memory */ 
    (*env)->ReleaseStringUTFChars(env, jstr, str);

    /* String s2 = "123" */
    jstr = (*env)->NewStringUTF(env, "123");
    if (jstr == NULL) {
        return; /* out of memory */
    }
    printf ("In C: Reset s = 123\n");

    /* s = s2 */
    (*env)->SetObjectField(env, obj, fid, jstr);

    return;
}
