#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2BB5A4A452E9A1B4.h"
#include "unitysdk/Enum_3_4DE39DF26DB99449.h"

namespace MoleMole { class UIBabeltowerTrickLevelRowWidgetController; }
namespace System { class String; }

#define CLASS_3_97821A714F0ABA3B_METHOD_3_28F75830B3FDE67D_OFFSET UNITYSDK_OFFSET(0x7CEB190)
#define CLASS_3_97821A714F0ABA3B_METHOD_3_94868C5BC1CAACDD_OFFSET UNITYSDK_OFFSET(0x7CEB030)
#define CLASS_3_97821A714F0ABA3B_METHOD_3_AD1992D24FA0EE47_OFFSET UNITYSDK_OFFSET(0x7CEB0C0)
#define CLASS_3_97821A714F0ABA3B__CTOR_OFFSET UNITYSDK_OFFSET(0x7CEB000)

inline static constexpr unsigned int Class_3_97821A714F0ABA3B_TypeDefinitionIndex = 67430;

class Class_3_97821A714F0ABA3B : public ::Class_2_2BB5A4A452E9A1B4<::MoleMole::UIBabeltowerTrickLevelRowWidgetController*>
{
public:
	::System::Single Field_3_1; // 0x28
	::Enum_3_4DE39DF26DB99449 Field_3_0; // 0x2C

	::System::Void _ctor(::System::String* a1, ::Enum_3_4DE39DF26DB99449 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_4DE39DF26DB99449, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_97821A714F0ABA3B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_94868C5BC1CAACDD(::MoleMole::UIBabeltowerTrickLevelRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickLevelRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_97821A714F0ABA3B_METHOD_3_94868C5BC1CAACDD_OFFSET))(this, a1);
	}

	static ::Class_3_97821A714F0ABA3B* Method_3_AD1992D24FA0EE47(::Enum_3_4DE39DF26DB99449 a1, ::System::Single a2)
	{
		return ((::Class_3_97821A714F0ABA3B*(*)(::Enum_3_4DE39DF26DB99449, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_97821A714F0ABA3B_METHOD_3_AD1992D24FA0EE47_OFFSET))(a1, a2);
	}

	::System::Void Method_3_28F75830B3FDE67D(::MoleMole::UIBabeltowerTrickLevelRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickLevelRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_97821A714F0ABA3B_METHOD_3_28F75830B3FDE67D_OFFSET))(this, a1);
	}
};
