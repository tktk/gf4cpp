# -*- coding: utf-8 -*-

from . import common

import os.path

GF_HEADERS = 'gfheaders'
_GF_DIR = 'gf'

GF4CPP_HEADERS = 'gf4cppheaders'
_GF4CPP_DIR = 'gf4cpp'

SUCROSE_LIBPATH = 'sucroselibpath'
_SUCROSE_DIR = 'sucrose'

BUILD = 'build'
BUILD_DEBUG = 'debug'
BUILD_RELEASE = 'release'

OS = 'os'

CXX = 'cxx'
CXX_CLANGXX = 'clang++'
CXX_MSVC = 'msvc'

FLAGS_BASE = 'flagsbase'
CXXFLAGS = 'cxxflags'
LINKFLAGS = 'linkflags'

TYPE = 'type'
_TYPE_STRING = 'string'

VALUE = 'value'

OPTIONS = {
    GF_HEADERS : {
        TYPE : _TYPE_STRING,
        VALUE : os.path.join(
            '..',
            _GF_DIR,
            common.INCLUDE_DIR,
        ),
    },
    GF4CPP_HEADERS : {
        TYPE : _TYPE_STRING,
        VALUE : os.path.join(
            '..',
            _GF4CPP_DIR,
            common.INCLUDE_DIR,
        ),
    },
    SUCROSE_LIBPATH : {
        TYPE : _TYPE_STRING,
        VALUE : os.path.join(
            '..',
            _SUCROSE_DIR,
            common.BUILD_DIR,
        ),
    },

    OS : {
        TYPE : _TYPE_STRING,
        VALUE : common.OS_LINUX,
    },
    BUILD : {
        TYPE : _TYPE_STRING,
        VALUE : BUILD_DEBUG,
    },

    CXX : {
        TYPE : _TYPE_STRING,
        VALUE : None,
    },
    FLAGS_BASE : {
        TYPE : _TYPE_STRING,
        VALUE : None,
    },
    CXXFLAGS : {
        TYPE : _TYPE_STRING,
        VALUE : None,
    },
    LINKFLAGS : {
        TYPE : _TYPE_STRING,
        VALUE : None,
    },
}
