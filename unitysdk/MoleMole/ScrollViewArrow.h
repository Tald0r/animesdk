#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_SCROLLVIEWARROW_AWAKE_OFFSET UNITYSDK_OFFSET(0x8C927F0)
#define MOLEMOLE_SCROLLVIEWARROW_HIDEARROW_OFFSET UNITYSDK_OFFSET(0x8C92BD0)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x8C93340)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8C932A0)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x8C92C40)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_6C28F1129EF1A082_OFFSET UNITYSDK_OFFSET(0x8C93030)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_C8110F9A5AB27813_OFFSET UNITYSDK_OFFSET(0x8C929B0)
#define MOLEMOLE_SCROLLVIEWARROW_METHOD_5_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x8C92930)
#define MOLEMOLE_SCROLLVIEWARROW_SETARROWSTATE_OFFSET UNITYSDK_OFFSET(0x8C92860)
#define MOLEMOLE_SCROLLVIEWARROW_SETENDHINT_OFFSET UNITYSDK_OFFSET(0x8C92E80)
#define MOLEMOLE_SCROLLVIEWARROW_SETSTARTHINT_OFFSET UNITYSDK_OFFSET(0x8C92CF0)
#define MOLEMOLE_SCROLLVIEWARROW_SHOWARROW_OFFSET UNITYSDK_OFFSET(0x8C92B60)
#define MOLEMOLE_SCROLLVIEWARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x8C93010)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewArrow_TypeDefinitionIndex = 65400;

	class ScrollViewArrow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* StartNormal; // 0x18
		::UnityEngine::GameObject* StartHighLight; // 0x20
		::UnityEngine::UI::Extension::UIButtonEx* StartBtn; // 0x28
		::UnityEngine::GameObject* StartHint; // 0x30
		::UnityEngine::GameObject* EndNormal; // 0x38
		::UnityEngine::GameObject* EndHighLight; // 0x40
		::UnityEngine::UI::Extension::UIButtonEx* EndBtn; // 0x48
		::UnityEngine::GameObject* EndHint; // 0x50
		::UnityEngine::CanvasGroup* Field_5_8; // 0x58
		::UnityEngine::CanvasGroup* Field_5_9; // 0x60
		::UnityEngine::CanvasGroup* Field_5_10; // 0x68
		::UnityEngine::CanvasGroup* Field_5_11; // 0x70
		::System::Boolean Field_5_12; // 0x78
		::System::Boolean Field_5_13; // 0x79
		::System::Boolean Field_5_14; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_AWAKE_OFFSET))(this);
		}

		::System::Void SetArrowState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETARROWSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SHOWARROW_OFFSET))(this);
		}

		::System::Void HideArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_HIDEARROW_OFFSET))(this);
		}

		::System::Void SetStartHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETSTARTHINT_OFFSET))(this, a1);
		}

		::System::Void SetEndHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETENDHINT_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C28F1129EF1A082(::UnityEngine::GameObject* a1, ::UnityEngine::CanvasGroup*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_6C28F1129EF1A082_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_4D9E1AC61B60D577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_4D9E1AC61B60D577_OFFSET))(this);
		}

		::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_C8110F9A5AB27813()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_C8110F9A5AB27813_OFFSET))(this);
		}

		::System::Void Method_5_19CCC07C980409E4_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_METHOD_5_19CCC07C980409E4_1_OFFSET))(this, a1);
		}
	};
}
