#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadRegion_ManagedModuleConfig.h"

#define MOLEMOLE_MONOGAMEPADREGION_ADDMODULE_OFFSET UNITYSDK_OFFSET(0x6B080E0)
#define MOLEMOLE_MONOGAMEPADREGION_CLEARMODULES_OFFSET UNITYSDK_OFFSET(0x6B08490)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0094A08E076C3CCD_OFFSET UNITYSDK_OFFSET(0x6B07A70)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_0943098B945A3BE1_OFFSET UNITYSDK_OFFSET(0x6B07C10)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_C67806DBD248DCEE_OFFSET UNITYSDK_OFFSET(0x6B07D30)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F14FB22E0F1F2B78_OFFSET UNITYSDK_OFFSET(0x6B07CC0)
#define MOLEMOLE_MONOGAMEPADREGION_METHOD_6_F2E858E6C27708F8_OFFSET UNITYSDK_OFFSET(0x6B08050)
#define MOLEMOLE_MONOGAMEPADREGION_REFRESHMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x6B085F0)
#define MOLEMOLE_MONOGAMEPADREGION_REMOVEMODULE_OFFSET UNITYSDK_OFFSET(0x6B08310)
#define MOLEMOLE_MONOGAMEPADREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x6B086C0)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_LOGICEVENTTONAVDIR_OFFSET UNITYSDK_OFFSET(0x6B086F0)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEAWAKE_OFFSET UNITYSDK_OFFSET(0x6B08760)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x6B087C0)
#define MOLEMOLE_MONOGAMEPADREGION___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x6B087D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadRegion_TypeDefinitionIndex = 44159;

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
