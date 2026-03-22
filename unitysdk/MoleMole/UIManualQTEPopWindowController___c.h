#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFCE3E0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCE420)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET UNITYSDK_OFFSET(0xCFCE430)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController___c_TypeDefinitionIndex = 51503;

	class UIManualQTEPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x300C0);
		}
		static ::MoleMole::UIManualQTEPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIManualQTEPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x300C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClicked_b__8_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET))(this, vp);
		}
	};
}
