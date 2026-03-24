#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EBubbleInsertType.h"
#include "unitysdk/System/Object.h"

class Class_3_4BECD5B2CFF332B1;
namespace MoleMole { class UIBubbleTips; }

#define CLASS_1_505B5FA4B3E563E4_METHOD_1_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x6ACD0B0)
#define CLASS_1_505B5FA4B3E563E4_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x6ACD240)
#define CLASS_1_505B5FA4B3E563E4_METHOD_1_AC0623DA6E1FFCB3_OFFSET UNITYSDK_OFFSET(0x6ACCCD0)
#define CLASS_1_505B5FA4B3E563E4__CTOR_OFFSET UNITYSDK_OFFSET(0x6ACCC50)

inline static constexpr unsigned int Class_1_505B5FA4B3E563E4_TypeDefinitionIndex = 79968;

class Class_1_505B5FA4B3E563E4 : public ::System::Object
{
public:
	::Class_3_4BECD5B2CFF332B1* Field_1_2; // 0x10
	::MoleMole::UIBubbleTips* Field_1_3; // 0x18
	::Share::EBubbleInsertType Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor(::Share::EBubbleInsertType a1, ::System::Int32 a2, ::Class_3_4BECD5B2CFF332B1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EBubbleInsertType, ::System::Int32, ::Class_3_4BECD5B2CFF332B1*))((::PBYTE)hIl2Cpp + CLASS_1_505B5FA4B3E563E4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIBubbleTips* Method_1_AC0623DA6E1FFCB3()
	{
		return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_505B5FA4B3E563E4_METHOD_1_AC0623DA6E1FFCB3_OFFSET))(this);
	}

	::System::Void Method_1_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_505B5FA4B3E563E4_METHOD_1_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_505B5FA4B3E563E4_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}
};
