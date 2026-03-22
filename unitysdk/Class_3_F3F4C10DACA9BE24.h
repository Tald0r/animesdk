#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4A2DEF5684904A7A.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define CLASS_3_F3F4C10DACA9BE24_METHOD_3_3CBFDE53A791C23C_OFFSET UNITYSDK_OFFSET(0x87E5B50)
#define CLASS_3_F3F4C10DACA9BE24_METHOD_3_7440BB3E63177A45_OFFSET UNITYSDK_OFFSET(0x87E6130)
#define CLASS_3_F3F4C10DACA9BE24_METHOD_3_98956A9CDC6EA398_OFFSET UNITYSDK_OFFSET(0x87E57A0)
#define CLASS_3_F3F4C10DACA9BE24_METHOD_3_EFB556EE14FE6EF0_OFFSET UNITYSDK_OFFSET(0x87E6080)
#define CLASS_3_F3F4C10DACA9BE24__CTOR_OFFSET UNITYSDK_OFFSET(0x87E6070)

inline static constexpr unsigned int Class_3_F3F4C10DACA9BE24_TypeDefinitionIndex = 65044;

class Class_3_F3F4C10DACA9BE24 : public ::Class_2_4A2DEF5684904A7A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F3F4C10DACA9BE24__CTOR_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_3_98956A9CDC6EA398(::MoleMole::UICameraAtom a1)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_3_F3F4C10DACA9BE24_METHOD_3_98956A9CDC6EA398_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3CBFDE53A791C23C(::System::Single a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_3_F3F4C10DACA9BE24_METHOD_3_3CBFDE53A791C23C_OFFSET))(this, a1, a2);
	}

	::MoleMole::UICameraAtom Method_3_EFB556EE14FE6EF0(::MoleMole::UICameraAtom a1)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_3_F3F4C10DACA9BE24_METHOD_3_EFB556EE14FE6EF0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7440BB3E63177A45(::System::Single a1, ::MoleMole::UICameraAtom a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_3_F3F4C10DACA9BE24_METHOD_3_7440BB3E63177A45_OFFSET))(this, a1, a2);
	}
};
