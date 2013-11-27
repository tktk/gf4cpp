# -*- coding: utf-8 -*-

from . import common

import os.path

FG_HEADERS = 'fgheaders'
_FG_DIR = 'fg'

FGPP_HEADERS = 'fgppheaders'
_FGPP_DIR = 'fgpp'

OS = 'os'

BUILD = 'build'
BUILD_DEBUG = 'debug'
BUILD_RELEASE = 'release'

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
    FG_HEADERS : {
        TYPE : _TYPE_STRING,
        VALUE : os.path.join(
            '..',
            _FG_DIR,
            common.INCLUDE_DIR,
        ),
    },
    FGPP_HEADERS : {
        TYPE : _TYPE_STRING,
        VALUE : os.path.join(
            '..',
            _FGPP_DIR,
            common.INCLUDE_DIR,
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
