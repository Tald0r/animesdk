#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_902546AD693159B7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_HighLightPrefabData.h"
#include "unitysdk/MoleMole/ConfigNewbie_TargetPath_ExtraType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0xCB0C380)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0xCB0C390)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB0C5F0)
#define MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0xCB0C600)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_HighLightDynamicData_TypeDefinitionIndex = 73601;

	class ConfigNewbie_HighLightDynamicData : public ::MoleMole::ConfigNewbie_HighLightPrefabData
	{
	public:
		::Enum_3_902546AD693159B7 Type; // 0x20
		::System::Int32 param; // 0x24
		::System::String* param1String; // 0x28
		::System::String* param2String; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigNewbie_TargetPath_ExtraType get_DataType()
		{
			return ((::MoleMole::ConfigNewbie_TargetPath_ExtraType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA_LOADFROMBYTES_OFFSET))(this, flexMap);
		}

		::System::Void __base_LoadFromBytes(::FlexBuffers::FlxMap P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_HIGHLIGHTDYNAMICDATA___BASE_LOADFROMBYTES_OFFSET))(this, P0);
		}
	};
}
