# -*- coding: utf-8 -*-

from . import common

from waflib import Utils

import os.path

FG_HEADERS = 'fgheaders'
_FG_DIR = 'fg'

FGPP_HEADERS = 'fgppheaders'
_FGPP_DIR = 'fgpp'

BUILD = 'build'
BUILD_DEBUG = 'debug'
BUILD_RELEASE = 'release'

CXXFLAGS_BASE = 'cxxflagsbase'
CXXFLAGS_BASE_GXX = 'g++'
CXXFLAGS_BASE_MSVC = 'msvc'

LINKFLAGS_BASE = 'linkflagsbase'
LINKFLAGS_BASE_LD = 'ld'
LINKFLAGS_BASE_MSVC = 'msvc'

TYPE = 'type'
_TYPE_STRING = 'string'

VALUE = 'value'

def _defaultValue( _values ):
    PLATFORM = Utils.unversioned_sys_platform()
    if PLATFORM in _values:
        return _values[ PLATFORM ]
    else:
        return None

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

    BUILD : {
        TYPE : _TYPE_STRING,
        VALUE : BUILD_DEBUG,
    },

    CXXFLAGS_BASE : {
        TYPE : _TYPE_STRING,
        VALUE : _defaultValue(
            {
                common.OS_LINUX : CXXFLAGS_BASE_GXX,
                common.OS_WINDOWS : CXXFLAGS_BASE_MSVC,
            },
        ),
    },
    LINKFLAGS_BASE : {
        TYPE : _TYPE_STRING,
        VALUE : _defaultValue(
            {
                common.OS_LINUX : LINKFLAGS_BASE_LD,
                common.OS_WINDOWS : LINKFLAGS_BASE_MSVC,
            },
        ),
    },
}
