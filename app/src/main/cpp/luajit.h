//
// Created by Administrator on 2018/9/28.
//

#ifndef LUANDROID_LUAJIT_H
#define LUANDROID_LUAJIT_H

#include <jni.h>
#include <stdio.h>
#include "lua.h"

JNIEXPORT jstring JNICALL Java_app_zhix_luandroid_MainActivity_test(JNIEnv *jniEnv, jobject jobj);

#endif //LUANDROID_LUAJIT_H
