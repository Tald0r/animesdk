#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFF32D0)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF3310)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__INITADDFRIENDBTN_B__29_1_OFFSET UNITYSDK_OFFSET(0xCFF3340)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__INITCHECKDETAILBTN_B__30_2_OFFSET UNITYSDK_OFFSET(0xCFF33B0)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__OPENCOLLECTIONCABINETPAGE_B__28_1_OFFSET UNITYSDK_OFFSET(0xCFF3330)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__OPENPHOTOWALLPAGE_B__26_1_OFFSET UNITYSDK_OFFSET(0xCFF3320)

namespace MoleMole
{
	inline static constexpr unsigned int UIMoreOptionPopWindowController___c_TypeDefinitionIndex = 75732;

	class UIMoreOptionPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__28_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMoreOptionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30100);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__26_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMoreOptionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30108);
		}
		static ::System::Action** StaticGet___9__29_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMoreOptionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30110);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__30_2()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIMoreOptionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30118);
		}
		static ::MoleMole::UIMoreOptionPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMoreOptionPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMoreOptionPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPhotowallPage_b__26_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__OPENPHOTOWALLPAGE_B__26_1_OFFSET))(this, _);
		}

		::System::Void _OpenCollectionCabinetPage_b__28_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__OPENCOLLECTIONCABINETPAGE_B__28_1_OFFSET))(this, _);
		}

		::System::Void _InitAddFriendBtn_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__INITADDFRIENDBTN_B__29_1_OFFSET))(this);
		}

		::System::Void _InitCheckDetailBtn_b__30_2(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__INITCHECKDETAILBTN_B__30_2_OFFSET))(this, _);
		}
	};
}
