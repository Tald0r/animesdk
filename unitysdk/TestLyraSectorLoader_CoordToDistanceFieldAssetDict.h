#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/UnityEngine/Rendering/SerializedDictionary_2.h"

namespace LyraSector { class LyraDistanceFieldAsset; }

#define TESTLYRASECTORLOADER_COORDTODISTANCEFIELDASSETDICT__CTOR_OFFSET UNITYSDK_OFFSET(0x187B8C60)

inline static constexpr unsigned int TestLyraSectorLoader_CoordToDistanceFieldAssetDict_TypeDefinitionIndex = 28100;

class TestLyraSectorLoader_CoordToDistanceFieldAssetDict : public ::UnityEngine::Rendering::SerializedDictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraDistanceFieldAsset*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_COORDTODISTANCEFIELDASSETDICT__CTOR_OFFSET))(this);
	}
};
