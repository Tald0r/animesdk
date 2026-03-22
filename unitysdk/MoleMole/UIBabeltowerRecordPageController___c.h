#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD024880)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD0248C0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_5_OFFSET UNITYSDK_OFFSET(0xD0248D0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_6_OFFSET UNITYSDK_OFFSET(0xD0249E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordPageController___c_TypeDefinitionIndex = 68737;

	class UIBabeltowerRecordPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x34880);
		}
		static ::MoleMole::UIBabeltowerRecordPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerRecordPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x34888);
		}
		static ::System::Action** StaticGet___9__6_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x34890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_5_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_6_OFFSET))(this);
		}
	};
}
