# -*- coding: utf-8 -*-

from ..builder import buildShlib

def build( _context ):
    osSources = {
        'stringconverter',
    }

    libraries = {
        'sucrose_common',
    }

    buildShlib(
        _context,
        'common',
        osSources = osSources,
        libraries = libraries,
    )
