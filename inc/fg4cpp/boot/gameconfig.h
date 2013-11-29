#ifndef FG4CPP_BOOT_GAMECONFIG_H
#define FG4CPP_BOOT_GAMECONFIG_H

#include "fgpp/boot/gameconfig.h"
#include "fg/boot/gameconfig.h"

namespace fg {
    inline const FgGameConfig & toFg(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const FgGameConfig & >( _GAME_CONFIG );
    }

    inline FgGameConfig & toFg(
        GameConfig & _gameConfig
    )
    {
        return reinterpret_cast< FgGameConfig & >( _gameConfig );
    }

    inline const FgGameConfig * toFg(
        const GameConfig *  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const FgGameConfig * >( _GAME_CONFIG );
    }

    inline FgGameConfig * toFg(
        GameConfig *    _gameConfig
    )
    {
        return reinterpret_cast< FgGameConfig * >( _gameConfig );
    }

    inline const GameConfig & toFgpp(
        const FgGameConfig &    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GameConfig & >( _GAME_CONFIG );
    }

    inline GameConfig & toFgpp(
        FgGameConfig &  _gameConfig
    )
    {
        return reinterpret_cast< GameConfig & >( _gameConfig );
    }

    inline const GameConfig * toFgpp(
        const FgGameConfig *    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GameConfig * >( _GAME_CONFIG );
    }

    inline GameConfig * toFgpp(
        FgGameConfig *  _gameConfig
    )
    {
        return reinterpret_cast< GameConfig * >( _gameConfig );
    }
}

#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline GameConfig * newGameConfig(
    )
    {
        return toFgpp( fgGameConfigNew() );
    }

    inline void free(
        GameConfig &    _gameConfig
    )
    {
        fgGameConfigFree(
            toFg( &_gameConfig )
        );
    }

    inline const Utf32 * getBinDir(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return toFgpp(
            fgGameConfigGetBinDir(
                toFg( &_GAME_CONFIG )
            )
        );
    }

    inline Bool setBinDir(
        GameConfig &    _gameConfig
        , const Utf32 & _BIN_DIR
    )
    {
        return fgGameConfigSetBinDir(
            toFg( &_gameConfig )
            , toFg( &_BIN_DIR )
        );
    }
}

#endif  // FG4CPP_BOOT_GAMECONFIG_H
