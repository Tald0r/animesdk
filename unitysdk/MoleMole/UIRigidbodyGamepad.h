#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET UNITYSDK_OFFSET(0xAB8F870)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xAB90E70)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_348B4E17BD1317E0_OFFSET UNITYSDK_OFFSET(0xAB8FC70)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xAB8F9F0)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_A205E8B23947BF16_OFFSET UNITYSDK_OFFSET(0xAB90000)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xAB8FE20)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xAB91000)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAB91080)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEDESTROY_OFFSET UNITYSDK_OFFSET(0xAB91110)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xAB91170)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB91180)
#define MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xAB91200)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbodyGamepad_TypeDefinitionIndex = 45067;

	class UIRigidbodyGamepad : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::UIRigidbody* Field_6_0; // 0xE8
		::MoleMole::InputLogicEventType ClickEvent; // 0xF0
		::MoleMole::InputLogicEventType DragEvent; // 0xF4
		::System::Single DragSpeed; // 0xF8
		::System::Boolean ScreenAdpter; // 0xFC
		::System::Single DragMaxRadius; // 0x100
		::System::Boolean EnableGyroGravity; // 0x104
		::UnityEngine::Vector2 Field_6_7; // 0x108
		::UnityEngine::Vector2 Field_6_8; // 0x110
		::System::Nullable_1<::System::Int32> Field_6_9; // 0x118
		::System::Boolean Field_6_10; // 0x120
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_11; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRigidbody* get_UIRigidbody()
		{
			return ((::MoleMole::UIRigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_GET_UIRIGIDBODY_OFFSET))(this);
		}

		::System::Void Method_6_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_6_348B4E17BD1317E0(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_348B4E17BD1317E0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Boolean Method_6_A205E8B23947BF16(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_A205E8B23947BF16_OFFSET))(this, a1);
		}

		::System::Void Method_6_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD_METHOD_6_0868EF727040C390_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODYGAMEPAD___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}
	};
}
