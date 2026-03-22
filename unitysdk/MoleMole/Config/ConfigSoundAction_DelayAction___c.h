#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A066E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A06720)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_0_OFFSET UNITYSDK_OFFSET(0x8A06730)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_1_OFFSET UNITYSDK_OFFSET(0x8A06760)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_2_OFFSET UNITYSDK_OFFSET(0x8A06790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction___c_TypeDefinitionIndex = 58219;

	class ConfigSoundAction_DelayAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_DelayAction___c_TypeDefinitionIndex)->GetStaticField(0x2F7E0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_DelayAction___c_TypeDefinitionIndex)->GetStaticField(0x2F7E8);
		}
		static ::MoleMole::Config::ConfigSoundAction_DelayAction___c** StaticGet___9()
		{
			return (::MoleMole::Config::ConfigSoundAction_DelayAction___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_DelayAction___c_TypeDefinitionIndex)->GetStaticField(0x2F7F0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_DelayAction___c_TypeDefinitionIndex)->GetStaticField(0x2F7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetFilteredTypeList_b__7_0(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_0_OFFSET))(this, x);
		}

		::System::Boolean _GetFilteredTypeList_b__7_1(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_1_OFFSET))(this, x);
		}

		::System::Boolean _GetFilteredTypeList_b__7_2(::System::Type* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__GETFILTEREDTYPELIST_B__7_2_OFFSET))(this, x);
		}
	};
}
