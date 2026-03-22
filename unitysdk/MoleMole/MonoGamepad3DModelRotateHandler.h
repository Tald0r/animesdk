#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"

namespace MoleMole { class Mono3DModelRotateHandler; }

#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x8F92FA0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8F935B0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x8F92EE0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_AB021B10FFDC6C17_OFFSET UNITYSDK_OFFSET(0x8F93090)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8F93540)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F934D0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F93340)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x8F93380)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0x8F933E0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8F93440)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepad3DModelRotateHandler_TypeDefinitionIndex = 66378;

	class MonoGamepad3DModelRotateHandler : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::Mono3DModelRotateHandler* _3dModelRotateHandler; // 0xE8
		::MoleMole::InputLogicEventType _rotateEvent; // 0xF0
		::MoleMole::InputLogicEventType _resetEvent; // 0xF4
		::System::Single _speed; // 0xF8
		::System::Single _thresholdDelta; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_6_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_A3FAE12D7B6ACD62_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean Method_6_AB021B10FFDC6C17(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_AB021B10FFDC6C17_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_1290EA767C459179_OFFSET))(this);
		}
	};
}
