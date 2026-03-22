#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_32CD58E95ADFF8F5_52;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8D0B40)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D0B80)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET UNITYSDK_OFFSET(0xC8D0B90)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_1_OFFSET UNITYSDK_OFFSET(0xC8D0BA0)
#define MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKPAYBTN_B__20_1_OFFSET UNITYSDK_OFFSET(0xC8D0BB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex = 78400;

	class UIAbyssS2TurntablePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_32CD58E95ADFF8F5_52*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::Class_3_32CD58E95ADFF8F5_52*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x368E0);
		}
		static ::MoleMole::UIAbyssS2TurntablePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TurntablePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x368E8);
		}
		static ::System::Action** StaticGet___9__16_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x368F0);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TurntablePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x368F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickCloseBtn_b__16_0(::Class_3_32CD58E95ADFF8F5_52* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_52*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_0_OFFSET))(this, rsp);
		}

		::System::Void _OnClickCloseBtn_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKCLOSEBTN_B__16_1_OFFSET))(this);
		}

		::System::Void _OnClickPayBtn_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TURNTABLEPOPWINDOWCONTROLLER___C__ONCLICKPAYBTN_B__20_1_OFFSET))(this);
		}
	};
}
