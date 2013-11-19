#ifndef GF4CPP_BOOT_GAMECONFIG_H
#define GF4CPP_BOOT_GAMECONFIG_H

#include "gfpp/boot/gameconfig.h"
#include "gf/boot/gameconfig.h"

namespace gf {
    inline const GfGameConfig & toGf(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GfGameConfig & >( _GAME_CONFIG );
    }

    inline GfGameConfig & toGf(
        GameConfig & _gameConfig
    )
    {
        return reinterpret_cast< GfGameConfig & >( _gameConfig );
    }

    inline const GfGameConfig * toGf(
        const GameConfig *  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GfGameConfig * >( _GAME_CONFIG );
    }

    inline GfGameConfig * toGf(
        GameConfig *    _gameConfig
    )
    {
        return reinterpret_cast< GfGameConfig * >( _gameConfig );
    }

    inline const GameConfig & toGfpp(
        const GfGameConfig &    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GameConfig & >( _GAME_CONFIG );
    }

    inline GameConfig & toGfpp(
        GfGameConfig &  _gameConfig
    )
    {
        return reinterpret_cast< GameConfig & >( _gameConfig );
    }

    inline const GameConfig * toGfpp(
        const GfGameConfig *    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const GameConfig * >( _GAME_CONFIG );
    }

    inline GameConfig * toGfpp(
        GfGameConfig *  _gameConfig
    )
    {
        return reinterpret_cast< GameConfig * >( _gameConfig );
    }
}

#include "gf4cpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline GameConfig * newGameConfig(
    )
    {
        return toGfpp( gfGameConfigNew() );
    }

    inline void free(
        GameConfig &    _gameConfig
    )
    {
        gfGameConfigFree(
            toGf( &_gameConfig )
        );
    }

    inline const Utf32 * getBinDir(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return toGfpp(
            gfGameConfigGetBinDir(
                toGf( &_GAME_CONFIG )
            )
        );
    }

    inline Bool setBinDir(
        GameConfig &    _gameConfig
        , const Utf32 & _BIN_DIR
    )
    {
        return gfGameConfigSetBinDir(
            toGf( &_gameConfig )
            , toGf( &_BIN_DIR )
        );
    }

    inline const Utf32 * getMainFile(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return toGfpp(
            gfGameConfigGetMainFile(
                toGf( &_GAME_CONFIG )
            )
        );
    }

    inline Bool setMainFile(
        GameConfig &    _gameConfig
        , const Utf32 & _MAIN_FILE
    )
    {
        return gfGameConfigSetMainFile(
            toGf( &_gameConfig )
            , toGf( &_MAIN_FILE )
        );
    }

    inline const Utf32 * getMain(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return toGfpp(
            gfGameConfigGetMain(
                toGf( &_GAME_CONFIG )
            )
        );
    }

    inline Bool setMain(
        GameConfig &    _gameConfig
        , const Utf32 & _MAIN
    )
    {
        return gfGameConfigSetMain(
            toGf( &_gameConfig )
            , toGf( &_MAIN )
        );
    }
}

#endif  // GF4CPP_BOOT_GAMECONFIG_H
