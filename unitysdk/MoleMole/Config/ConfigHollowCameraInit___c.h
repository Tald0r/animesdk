#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x139987F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13998830)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__INITCAMERAPIPELINE_B__3_0_OFFSET UNITYSDK_OFFSET(0x13998840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraInit___c_TypeDefinitionIndex = 40880;

	class ConfigHollowCameraInit___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigHollowCameraInit___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigHollowCameraInit___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowCameraInit___c_TypeDefinitionIndex)->GetStaticField(0x3A290);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowCameraInit___c_TypeDefinitionIndex)->GetStaticField(0x3A298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitCameraPipeline_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERAINIT___C__INITCAMERAPIPELINE_B__3_0_OFFSET))(this);
		}
	};
}
