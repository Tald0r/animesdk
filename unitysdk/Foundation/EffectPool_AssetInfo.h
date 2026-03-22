#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_EFFECTPOOL_ASSETINFO_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1ABB54A0)
#define FOUNDATION_EFFECTPOOL_ASSETINFO_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1ABB5550)
#define FOUNDATION_EFFECTPOOL_ASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB5600)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool_AssetInfo_TypeDefinitionIndex = 8171;

	class EffectPool_AssetInfo : public ::System::Object
	{
	public:
		::Foundation::AssetRequestHandle handle; // 0x10
		::System::Int32 refCount; // 0x30
		::System::Single delayUnloadTime; // 0x34
		::System::Single lastUsedTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO__CTOR_OFFSET))(this);
		}

		static ::Foundation::EffectPool_AssetInfo* Allocate()
		{
			return ((::Foundation::EffectPool_AssetInfo*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO_ALLOCATE_OFFSET))();
		}

		static ::System::Void Deallocate(::Foundation::EffectPool_AssetInfo* assetInfo)
		{
			return ((::System::Void(*)(::Foundation::EffectPool_AssetInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ASSETINFO_DEALLOCATE_OFFSET))(assetInfo);
		}
	};
}
