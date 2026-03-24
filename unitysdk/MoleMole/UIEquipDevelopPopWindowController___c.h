#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAD07340)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAD07380)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DOSETSTARUPCONSUME_B__49_0_OFFSET UNITYSDK_OFFSET(0xAD075C0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_0_OFFSET UNITYSDK_OFFSET(0xAD075A0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_1_OFFSET UNITYSDK_OFFSET(0xAD075B0)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0xAD07390)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_1_OFFSET UNITYSDK_OFFSET(0xAD07590)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__52_0_OFFSET UNITYSDK_OFFSET(0xAD075D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c_TypeDefinitionIndex = 71927;

	class UIEquipDevelopPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIEquipDevelopPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIEquipDevelopPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34490);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34498);
		}
		static ::System::Action** StaticGet___9__52_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344A0);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344A8);
		}
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344B0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__18_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344B8);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIEquipDevelopPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x344C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_0_OFFSET))(this);
		}

		::System::Void _InitView_b__18_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__INITVIEW_B__18_1_OFFSET))(this, success);
		}

		::System::Boolean _GetRealAddedValue_b__46_0(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_0_OFFSET))(this, c);
		}

		::System::Boolean _GetRealAddedValue_b__46_1(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__GETREALADDEDVALUE_B__46_1_OFFSET))(this, c);
		}

		::System::Int32 _DoSetStarUpConsume_b__49_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> itempairs)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DOSETSTARUPCONSUME_B__49_0_OFFSET))(this, itempairs);
		}

		::System::Void _ShowBackItemListDialog_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__SHOWBACKITEMLISTDIALOG_B__52_0_OFFSET))(this);
		}
	};
}
