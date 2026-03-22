#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_CC1EFFE4D9D8440D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9F0D2D0)
#define CLASS_4_CC1EFFE4D9D8440D_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9F0CEF0)
#define CLASS_4_CC1EFFE4D9D8440D_METHOD_4_A3BBE4D24F1C2B1F_OFFSET UNITYSDK_OFFSET(0x9F0D050)
#define CLASS_4_CC1EFFE4D9D8440D__CTOR_OFFSET UNITYSDK_OFFSET(0x9F0D1E0)

inline static constexpr unsigned int Class_4_CC1EFFE4D9D8440D_TypeDefinitionIndex = 74529;

class Class_4_CC1EFFE4D9D8440D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC1EFFE4D9D8440D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC1EFFE4D9D8440D_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_A3BBE4D24F1C2B1F(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_CC1EFFE4D9D8440D_METHOD_4_A3BBE4D24F1C2B1F_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CC1EFFE4D9D8440D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
