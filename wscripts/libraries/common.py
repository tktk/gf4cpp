# -*- coding: utf-8 -*-

from ..builder import buildShlib

def build( _context ):
    osSources = {
        'common_setup',
        'stringconverter',
    }

    buildShlib(
        _context,
        'common',
        osSources = osSources,
    )
