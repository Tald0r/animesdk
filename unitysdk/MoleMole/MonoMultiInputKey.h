#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0E4561226F6DD72.h"
#include "unitysdk/MoleMole/MultiInputKeyData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralCombineWidgetController; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOMULTIINPUTKEY_CLEARGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0xB84F550)
#define MOLEMOLE_MONOMULTIINPUTKEY_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0xB84F7E0)
#define MOLEMOLE_MONOMULTIINPUTKEY_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0xB84E6C0)
#define MOLEMOLE_MONOMULTIINPUTKEY_INITGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0xB84E6D0)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_7073B423B15F467A_OFFSET UNITYSDK_OFFSET(0xB84E740)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_846D4FAF704684AE_OFFSET UNITYSDK_OFFSET(0xB84FB40)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0xB84F070)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB84F780)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB84F710)
#define MOLEMOLE_MONOMULTIINPUTKEY_SETENABLE_OFFSET UNITYSDK_OFFSET(0xB84F000)
#define MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0xB84F9A0)
#define MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xB84F880)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMultiInputKey_TypeDefinitionIndex = 52196;

	class MonoMultiInputKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_C0E4561226F6DD72, ::System::String*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_C0E4561226F6DD72, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoMultiInputKey_TypeDefinitionIndex)->GetStaticField(0x45130);
		}
		::System::UInt32 _priorityLevel; // 0x18
		::UnityEngine::UI::Text* _bindedText; // 0x20
		::System::String* textKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::MultiInputKeyData>* MultiInputKeyList; // 0x30
		::UnityEngine::Transform* GeneralKeyRoot; // 0x38
		::UnityEngine::UI::Text* LabelText; // 0x40
		::System::Boolean Field_5_7; // 0x48
		::MoleMole::UIBaseController* Field_5_8; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralKeyPanelWidgetController*>* Field_5_9; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralCombineWidgetController*>* Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET))();
		}

		::System::UInt32 get_PriorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void InitGeneralKeyPanel(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_INITGENERALKEYPANEL_OFFSET))(this, a1);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void ClearGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_CLEARGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_DOCOPYRESET_OFFSET))(this);
		}

		::System::Boolean Method_5_846D4FAF704684AE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_846D4FAF704684AE_OFFSET))(this, a1);
		}

		::System::Void Method_5_91A773A85E497E9E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_91A773A85E497E9E_OFFSET))(this);
		}

		::System::Void Method_5_7073B423B15F467A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_7073B423B15F467A_OFFSET))(this);
		}
	};
}
