#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7E582B0)
#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7E57EF0)
#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_8B1A8C9871F6A881_OFFSET UNITYSDK_OFFSET(0x7E58050)
#define CLASS_4_A490AD7F2C566B8B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7E581C0)

inline static constexpr unsigned int Class_4_A490AD7F2C566B8B_1_TypeDefinitionIndex = 74200;

class Class_4_A490AD7F2C566B8B_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_8B1A8C9871F6A881(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_8B1A8C9871F6A881_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
