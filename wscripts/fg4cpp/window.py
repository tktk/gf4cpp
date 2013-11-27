# -*- coding: utf-8 -*-

from .. import common
from ..builder import buildShlib

MODULE_NAME = 'window'
TARGET = common.FG4CPP + '-' + MODULE_NAME

def build( _context ):
    sources = {
        common.SOURCE_DIR : {
            common.FG4CPP : {
                MODULE_NAME : {
                    'eventhandlers.cpp',
                },
            },
        },
    }

    buildShlib(
        _context,
        TARGET,
        sources = sources,
    )
