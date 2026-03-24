#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC3D120)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEC3CEA0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_0F9C98D2F5805479_OFFSET UNITYSDK_OFFSET(0xEC3D3C0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xEC3D180)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xEC3CF20)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5E08F2F6642B0101_OFFSET UNITYSDK_OFFSET(0xEC3D310)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5EBDB8BDCDAABB87_OFFSET UNITYSDK_OFFSET(0xEC3D510)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_84DB1A1A4D6A2661_OFFSET UNITYSDK_OFFSET(0xEC3D6A0)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xEC3CD70)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C9158580CC3C5ACF_OFFSET UNITYSDK_OFFSET(0xEC3CC70)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0xEC3CC20)
#define MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xEC3D3B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonLevelData_TypeDefinitionIndex = 78412;

	class ConfigCommonLevelData : public ::System::Object
	{
	public:
		::System::String* Identifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigCommonLevelData* Method_1_C9158580CC3C5ACF()
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_C9158580CC3C5ACF_OFFSET))(this);
		}

		::System::Int32 Method_1_B525722F60E6B94F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_B525722F60E6B94F_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_5E08F2F6642B0101()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5E08F2F6642B0101_OFFSET))(this);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* Method_1_0F9C98D2F5805479(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_0F9C98D2F5805479_OFFSET))(a1, a2);
		}

		::System::Void Method_1_5EBDB8BDCDAABB87(::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Struct_2_A17F88B27FA91D04<::System::String*, ::System::String*>, ::MoleMole::Config::ConfigCommonLevelData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_5EBDB8BDCDAABB87_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigCommonLevelData* Method_1_84DB1A1A4D6A2661(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigCommonLevelData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONLEVELDATA_METHOD_1_84DB1A1A4D6A2661_OFFSET))(a1);
		}
	};
}
