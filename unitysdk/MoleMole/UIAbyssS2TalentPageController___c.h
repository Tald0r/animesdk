#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FC589D4BC0069EAD;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3AD650)
#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AD690)
#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__INITITEMS_B__17_0_OFFSET UNITYSDK_OFFSET(0xD3AD6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TalentPageController___c_TypeDefinitionIndex = 41899;

	class UIAbyssS2TalentPageController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_2_FC589D4BC0069EAD*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::Class_2_FC589D4BC0069EAD*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x32380);
		}
		static ::MoleMole::UIAbyssS2TalentPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2TalentPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2TalentPageController___c_TypeDefinitionIndex)->GetStaticField(0x32388);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitItems_b__17_0(::Class_2_FC589D4BC0069EAD* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_FC589D4BC0069EAD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__INITITEMS_B__17_0_OFFSET))(this, x);
		}
	};
}
