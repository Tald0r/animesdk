#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGFEVERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x94FEF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFeverLevel_TypeDefinitionIndex = 55489;

	class ConfigFeverLevel : public ::System::Object
	{
	public:
		::System::String* FillBGTexture; // 0x10
		::System::String* EffPlayerProgress01Material; // 0x18
		::System::String* EffTextImgMaterial; // 0x20
		::System::String* EffPlayerProgress01Texture; // 0x28
		::System::String* EffBg1Material; // 0x30
		::System::String* EffBg2Material; // 0x38
		::System::String* EffTextImgTexture; // 0x40
		::System::String* FillBGEFTexture; // 0x48
		::System::String* TextImgTexture; // 0x50
		::System::Single DownLevelLockTime; // 0x58
		::System::Single MaxFeverCurLevel; // 0x5C
		::System::Single FeverRatioWhenReduce; // 0x60
		::System::Single FeverReduceNumPerSecond; // 0x64
		::System::Single FeverReduceCDTime; // 0x68
		::System::Single FeverRatioWhenAdd; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFEVERLEVEL__CTOR_OFFSET))(this);
		}
	};
}
