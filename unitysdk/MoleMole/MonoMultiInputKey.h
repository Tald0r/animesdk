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

#define MOLEMOLE_MONOMULTIINPUTKEY_CLEARGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0xC238CE0)
#define MOLEMOLE_MONOMULTIINPUTKEY_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0xC238F70)
#define MOLEMOLE_MONOMULTIINPUTKEY_INITGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0xC237E70)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0xC237EE0)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_846D4FAF704684AE_OFFSET UNITYSDK_OFFSET(0xC2392E0)
#define MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0xC238800)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC238F10)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC238EA0)
#define MOLEMOLE_MONOMULTIINPUTKEY_SETENABLE_OFFSET UNITYSDK_OFFSET(0xC238790)
#define MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0xC239130)
#define MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0xC239010)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMultiInputKey_TypeDefinitionIndex = 54876;

	class MonoMultiInputKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Enum_3_C0E4561226F6DD72, ::System::String*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::Enum_3_C0E4561226F6DD72, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoMultiInputKey_TypeDefinitionIndex)->GetStaticField(0x43FD0);
		}
		::UnityEngine::UI::Text* _bindedText; // 0x18
		::System::String* textKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::MultiInputKeyData>* MultiInputKeyList; // 0x28
		::UnityEngine::Transform* GeneralKeyRoot; // 0x30
		::UnityEngine::UI::Text* LabelText; // 0x38
		::System::Boolean Field_5_6; // 0x40
		::MoleMole::UIBaseController* Field_5_7; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralKeyPanelWidgetController*>* Field_5_8; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralCombineWidgetController*>* Field_5_9; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET))();
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

		::System::Void Method_5_91A773A85E497E9E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_91A773A85E497E9E_OFFSET))(this);
		}

		::System::Boolean Method_5_846D4FAF704684AE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_846D4FAF704684AE_OFFSET))(this, a1);
		}

		::System::Void Method_5_40E03D354D1ACC85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_METHOD_5_40E03D354D1ACC85_OFFSET))(this);
		}
	};
}
