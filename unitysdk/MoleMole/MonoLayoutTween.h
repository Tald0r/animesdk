#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_402DBB6FAC12574C;
namespace DG::Tweening { class Tweener; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class LayoutGroup; }

#define MOLEMOLE_MONOLAYOUTTWEEN_AWAKE_OFFSET UNITYSDK_OFFSET(0x9938D40)
#define MOLEMOLE_MONOLAYOUTTWEEN_CANCELTWEEN_OFFSET UNITYSDK_OFFSET(0x9939BC0)
#define MOLEMOLE_MONOLAYOUTTWEEN_INSERTCELL_OFFSET UNITYSDK_OFFSET(0x9938FB0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9939E50)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2C9E083DC9C549F9_OFFSET UNITYSDK_OFFSET(0x9939290)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9938E70)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_33DA6F0040BBF55E_OFFSET UNITYSDK_OFFSET(0x993A110)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x993AB80)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_3B0663FD9C55AEE7_OFFSET UNITYSDK_OFFSET(0x993A540)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x993A2D0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_73D53181899B6743_OFFSET UNITYSDK_OFFSET(0x99398C0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x993A6B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_81315664A1EE985E_OFFSET UNITYSDK_OFFSET(0x9939350)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_9C5A319E8B95E884_OFFSET UNITYSDK_OFFSET(0x9939EE0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A8F30D3692AA24D3_OFFSET UNITYSDK_OFFSET(0x993A2F0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x993A530)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x993A100)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C30425B4F86A9FA8_OFFSET UNITYSDK_OFFSET(0x993AE70)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x993A2B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x993A0F0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x993A2E0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x993A4C0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D8F3C6B2E2C5586E_OFFSET UNITYSDK_OFFSET(0x993A9B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x993A2C0)
#define MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x993A6A0)
#define MOLEMOLE_MONOLAYOUTTWEEN_NEEDINSERTTWEEN_OFFSET UNITYSDK_OFFSET(0x99391B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_NEEDREMOVETWEEN_OFFSET UNITYSDK_OFFSET(0x99397E0)
#define MOLEMOLE_MONOLAYOUTTWEEN_REMOVECELL_OFFSET UNITYSDK_OFFSET(0x99395B0)
#define MOLEMOLE_MONOLAYOUTTWEEN_SETDURATION_OFFSET UNITYSDK_OFFSET(0x9939B40)
#define MOLEMOLE_MONOLAYOUTTWEEN_SETSLOTHELPER_OFFSET UNITYSDK_OFFSET(0x9938F40)
#define MOLEMOLE_MONOLAYOUTTWEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x9939EC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_TypeDefinitionIndex = 66451;

	class MonoLayoutTween : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FadeTime; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::UI::LayoutElement* Field_5_2; // 0x20
		::UnityEngine::GameObject* Field_5_3; // 0x28
		::UnityEngine::UI::LayoutGroup* Field_5_4; // 0x30
		::UnityEngine::Transform* Field_5_5; // 0x38
		::Class_1_402DBB6FAC12574C* Field_5_6; // 0x40
		::DG::Tweening::Tweener* Field_5_7; // 0x48
		::System::Single Field_5_8; // 0x50
		::System::Int32 Field_5_9; // 0x54
		::System::Int32 Field_5_10; // 0x58
		::System::Boolean Field_5_11; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_AWAKE_OFFSET))(this);
		}

		::System::Void SetSlotHelper(::Class_1_402DBB6FAC12574C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_402DBB6FAC12574C*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_SETSLOTHELPER_OFFSET))(this, a1);
		}

		::System::Void InsertCell(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_INSERTCELL_OFFSET))(this, a1);
		}

		::System::Void RemoveCell(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_REMOVECELL_OFFSET))(this, a1);
		}

		::System::Void SetDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_SETDURATION_OFFSET))(this, a1);
		}

		::System::Void CancelTween()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CANCELTWEEN_OFFSET))(this);
		}

		::System::Boolean NeedInsertTween()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_NEEDINSERTTWEEN_OFFSET))(this);
		}

		::System::Boolean NeedRemoveTween()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_NEEDREMOVETWEEN_OFFSET))(this);
		}

		::UnityEngine::UI::LayoutGroup* Method_5_9C5A319E8B95E884(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::UI::LayoutGroup*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_9C5A319E8B95E884_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_2C9E083DC9C549F9()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_2C9E083DC9C549F9_OFFSET))(this);
		}

		::System::Int32 Method_5_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
		}

		::System::Void Method_5_C114A1F8E08B6F92(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_OFFSET))(this, a1);
		}

		::DG::Tweening::Tweener* Method_5_33DA6F0040BBF55E(::UnityEngine::UI::LayoutElement* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::DG::Tweening::Tweener*(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_33DA6F0040BBF55E_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_C74CF020AA42ED85_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74CF020AA42ED85_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Single Method_5_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_5323F2DF46A044DA_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Method_5_A8F30D3692AA24D3(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_A8F30D3692AA24D3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D78B51BFDA4B8B32_OFFSET))(this);
		}

		::System::Void Method_5_C114A1F8E08B6F92_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C114A1F8E08B6F92_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_81315664A1EE985E(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_81315664A1EE985E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_73D53181899B6743(::UnityEngine::GameObject* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_73D53181899B6743_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_3B0663FD9C55AEE7(::UnityEngine::GameObject* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_3B0663FD9C55AEE7_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_5_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_367B9590522079D1_OFFSET))(this);
		}

		::System::Void Method_5_C30425B4F86A9FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_C30425B4F86A9FA8_OFFSET))(this);
		}

		::System::Void Method_5_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Boolean Method_5_D8F3C6B2E2C5586E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_METHOD_5_D8F3C6B2E2C5586E_OFFSET))(this);
		}
	};
}
