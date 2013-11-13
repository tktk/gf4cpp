# -*- coding: utf-8 -*-

from .. import common
from .. import cmdoption
from ..builder import buildShlib

MODULE_NAME = 'common'
TARGET = common.APPNAME + '_' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.APPNAME : {
                MODULE_NAME : {
                    _context.env[ cmdoption.OS ] : {
                        'string.cpp',
                    },
                },
            },
        },
    }

    libraries = {
        'sucrose_common',
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
        libraries = libraries,
    )
