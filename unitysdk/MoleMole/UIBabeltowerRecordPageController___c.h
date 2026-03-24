#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDB7780)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDDB77C0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_5_OFFSET UNITYSDK_OFFSET(0xDDB77D0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_6_OFFSET UNITYSDK_OFFSET(0xDDB78E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordPageController___c_TypeDefinitionIndex = 78425;

	class UIBabeltowerRecordPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBabeltowerRecordPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerRecordPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x371E0);
		}
		static ::System::Action** StaticGet___9__6_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x371E8);
		}
		static ::System::Action** StaticGet___9__6_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x371F0);
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
