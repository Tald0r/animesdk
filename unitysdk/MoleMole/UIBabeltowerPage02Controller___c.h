#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5FFFF0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB600030)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_2_OFFSET UNITYSDK_OFFSET(0xB600040)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_4_OFFSET UNITYSDK_OFFSET(0xB600050)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_6_OFFSET UNITYSDK_OFFSET(0xB600060)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage02Controller___c_TypeDefinitionIndex = 76865;

	class UIBabeltowerPage02Controller___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBabeltowerPage02Controller___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerPage02Controller___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x34810);
		}
		static ::System::Action** StaticGet___9__6_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x34818);
		}
		static ::System::Action** StaticGet___9__6_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x34820);
		}
		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x34828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_2_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_4_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_6_OFFSET))(this);
		}
	};
}
