#pragma once

#define CQHTTP_ID "io.github.richardchien.coolqhttpapi"
#define CQHTTP_NAME "CoolQ HTTP API"

#define CQHTTP_BUILD_NUMBER 413

#define _CQHTTP_TO_STR(x) #x
#define CQHTTP_TO_STR(x) _CQHTTP_TO_STR(x)

#define _CQHTTP_ALPHA 1
#define _CQHTTP_BETA 2
#define _CQHTTP_STABLE 3

#define CQHTTP_VERSION_MAJOR 4
#define CQHTTP_VERSION_MINOR 2
#define CQHTTP_VERSION_PATCH 0
#define CQHTTP_VERSION_PRE _CQHTTP_STABLE
#define CQHTTP_VERSION_PRE_VER 0

#if CQHTTP_VERSION_PRE == _CQHTTP_ALPHA
#define CQHTTP_VERSION_PRE_S "alpha"
#elif CQHTTP_VERSION_PRE == _CQHTTP_BETA
#define CQHTTP_VERSION_PRE_S "beta"
#endif

#define CQHTTP_VERSION_BASE \
    CQHTTP_TO_STR(CQHTTP_VERSION_MAJOR) "." CQHTTP_TO_STR(CQHTTP_VERSION_MINOR) "." CQHTTP_TO_STR(CQHTTP_VERSION_PATCH)
#if CQHTTP_VERSION_PRE < _CQHTTP_STABLE
#define CQHTTP_VERSION CQHTTP_VERSION_BASE "-" CQHTTP_VERSION_PRE_S "." CQHTTP_TO_STR(CQHTTP_VERSION_PRE_VER)
#else
#define CQHTTP_VERSION CQHTTP_VERSION_BASE
#endif

#undef _CQHTTP_ALPHA
#undef _CQHTTP_BETA
#undef _CQHTTP_STABLE

#define CQHTTP_FULLNAME CQHTTP_NAME " v" CQHTTP_VERSION
#define CQHTTP_USER_AGENT "CQHttp/" CQHTTP_VERSION
