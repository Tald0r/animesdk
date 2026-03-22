#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_0517B48635C9D397;
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_1076A0CC93682409_OFFSET UNITYSDK_OFFSET(0x6C14CE0)
#define CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6C14B90)
#define CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C15030)
#define CLASS_3_F24B6B0DCFE2E3B7__CTOR_OFFSET UNITYSDK_OFFSET(0x6C14F40)

inline static constexpr unsigned int Class_3_F24B6B0DCFE2E3B7_TypeDefinitionIndex = 40767;

class Class_3_F24B6B0DCFE2E3B7 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::Class_1_0517B48635C9D397*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F24B6B0DCFE2E3B7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_1076A0CC93682409(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_1076A0CC93682409_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F24B6B0DCFE2E3B7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
