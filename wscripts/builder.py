# -*- coding: utf-8 -*-

from . import common
from . import cmdoption

import os.path

def buildShlib(
    _context,
    _target,
    sources = set(),
    osSources = set(),
    useModules = set(),
    libraries = set(),
):
    _build(
        _context.shlib,
        _context,
        _target,
        sources,
        osSources,
        useModules,
        libraries,
    )

def _build(
    _buildFunc,
    _context,
    _target,
    _sources,
    _osSources,
    _useModules,
    _libraries,
):
    _buildFunc(
        target = _generateTarget( _target ),
        source = _generateSources(
            _target,
            _sources,
        ) | _generateOsSources(
            _context.env[ cmdoption.OS ],
            _target,
            _osSources,
        ),
        use = _useModules,
        lib = _libraries,
    )

def _generateTarget(
    _target,
):
    return common.APPNAME + '_' + _target

def _generateSources(
    _target,
    _sources,
):
    return {
        _generateSource(
            os.path.join(
                _target,
                i,
            )
        )
        for i in _sources
    }

def _generateOsSources(
    _OS,
    _target,
    _sources,
):
    return {
        _generateSource(
            os.path.join(
                _target,
                _OS,
                i,
            )
        )
        for i in _sources
    }

def _generateSource(
    _source,
):
    return os.path.join(
        common.SOURCE_DIR,
        common.APPNAME,
        _source + '.cpp',
    )
