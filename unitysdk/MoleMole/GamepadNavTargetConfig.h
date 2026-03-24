#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET UNITYSDK_OFFSET(0x759C9C0)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x223870)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x32F3A0)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_5FFB353256AF4026_OFFSET UNITYSDK_OFFSET(0x32F480)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_636C126D43A6C8E2_OFFSET UNITYSDK_OFFSET(0x32F470)
#define MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET UNITYSDK_OFFSET(0x32F390)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadNavTargetConfig_TypeDefinitionIndex = 66518;

	struct alignas(8) GamepadNavTargetConfig
	{
		::MoleMole::MonoGamepadModule* targetModule; // 0x10
		::System::String* targetModuleName; // 0x18

		static ::MoleMole::GamepadNavTargetConfig get_NullTarget()
		{
			return ((::MoleMole::GamepadNavTargetConfig(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_NULLTARGET_OFFSET))();
		}

		::MoleMole::MonoGamepadModule* get_targetModuleWrapper()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_GET_TARGETMODULEWRAPPER_OFFSET))(this);
		}

		::System::Void set_targetModuleWrapper(::MoleMole::MonoGamepadModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_SET_TARGETMODULEWRAPPER_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_1808E1CF7A125519_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* Method_2_636C126D43A6C8E2(::MoleMole::UIBaseController* a1)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_636C126D43A6C8E2_OFFSET))(this, a1);
		}

		::System::Void Method_2_5FFB353256AF4026(::MoleMole::MonoGamepadModule* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADNAVTARGETCONFIG_METHOD_2_5FFB353256AF4026_OFFSET))(this, a1, a2);
		}
	};
}
