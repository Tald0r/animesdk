#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadRegion_ManagedModuleConfig.h"

#define MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET UNITYSDK_OFFSET(0xD431770)
#define MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET UNITYSDK_OFFSET(0xD431B20)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0xD431100)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0943098B945A3BE1_OFFSET UNITYSDK_OFFSET(0xD4312A0)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_C67806DBD248DCEE_OFFSET UNITYSDK_OFFSET(0xD4313C0)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F14FB22E0F1F2B78_OFFSET UNITYSDK_OFFSET(0xD431350)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F2E858E6C27708F8_OFFSET UNITYSDK_OFFSET(0xD4316E0)
#define MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xD431C80)
#define MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET UNITYSDK_OFFSET(0xD4319A0)
#define MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET UNITYSDK_OFFSET(0xD431D50)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_LOGICEVENTTONAVDIR_OFFSET UNITYSDK_OFFSET(0xD431D80)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEAWAKE_OFFSET UNITYSDK_OFFSET(0xD431DF0)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xD431E50)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xD431E60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadRegion_TypeDefinitionIndex = 42564;

	class MonoGamepadRegion : public ::MoleMole::MonoGamepadModule
	{
	public:
		::Il2CppArray<::MoleMole::MonoGamepadRegion_ManagedModuleConfig>* _managedModules; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_0094A08E076C3CCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0094A08E076C3CCD_OFFSET))(this);
		}

		::Enum_3_9F36F0CF0780ECE5 Method_6_0943098B945A3BE1(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0943098B945A3BE1_OFFSET))(this, a1);
		}

		::System::Void Method_6_F14FB22E0F1F2B78()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F14FB22E0F1F2B78_OFFSET))(this);
		}

		::System::Void Method_6_F2E858E6C27708F8(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F2E858E6C27708F8_OFFSET))(this, a1, a2);
		}

		::System::Void AddModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET))(this, a1);
		}

		::System::Void RemoveModule(::MoleMole::MonoGamepadRegion_ManagedModuleConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadRegion_ManagedModuleConfig))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET))(this, a1);
		}

		::System::Void ClearModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET))(this);
		}

		::System::Void RefreshModuleFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET))(this, a1);
		}

		::Enum_3_9F36F0CF0780ECE5 __base_LogicEventToNavDir(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_LOGICEVENTTONAVDIR_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C67806DBD248DCEE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADREGION_METHOD_6_C67806DBD248DCEE_OFFSET))(this, a1, a2);
		}
	};
}
