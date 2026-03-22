#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_Class_1_E5308BE9EEBA8B55; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_CE9004FE1A9D4E66_OFFSET UNITYSDK_OFFSET(0xD80D700)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET UNITYSDK_OFFSET(0x475F30)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET UNITYSDK_OFFSET(0x475FA0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_OFFSET UNITYSDK_OFFSET(0x475EC0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x475DB0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x475DC0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x475E50)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int BulletModule_TypeDefinitionIndex = 49754;

	struct alignas(8) BulletModule
	{
		::Class_1_CEF37255A3ECC3D2_Enum_3_3F870EDF52C71CD8 FollowMode; // 0x10
		::MoleMole::Config::ConfigMovement* OverrideConfigMovement; // 0x18
		::MoleMole::Config::ConfigRotation* OverrideConfigRoatation; // 0x20

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_1(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_1_OFFSET))(this, a1);
		}

		static ::System::Void Method_2_CE9004FE1A9D4E66(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_CE9004FE1A9D4E66_OFFSET))(a1);
		}

		::System::Void Method_2_EA15BE021E279EF5_2(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_Class_1_E5308BE9EEBA8B55*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_METHOD_2_EA15BE021E279EF5_2_OFFSET))(this, a1);
		}
	};
}
