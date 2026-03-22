#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraAssetData.h"

#define LYRASECTOR_LYRADISTANCEFIELDASSET_SETOFFSET_OFFSET UNITYSDK_OFFSET(0x19239FD0)
#define LYRASECTOR_LYRADISTANCEFIELDASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x19239FA0)

namespace LyraSector
{
	inline static constexpr unsigned int LyraDistanceFieldAsset_TypeDefinitionIndex = 28215;

	class LyraDistanceFieldAsset : public ::LyraSector::LyraAssetData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRADISTANCEFIELDASSET__CTOR_OFFSET))(this);
		}

		::System::Void SetOffset(::System::Int32 emissionNodeArrayOffset, ::System::Int32 emissionPlatteOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRADISTANCEFIELDASSET_SETOFFSET_OFFSET))(this, emissionNodeArrayOffset, emissionPlatteOffset);
		}
	};
}
