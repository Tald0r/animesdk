#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_3_A011C6980794EAD6_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xD048D30)
#define CLASS_3_A011C6980794EAD6_METHOD_3_4BABC99A6C4E2CEC_OFFSET UNITYSDK_OFFSET(0xD048E80)
#define CLASS_3_A011C6980794EAD6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0491F0)
#define CLASS_3_A011C6980794EAD6__CTOR_OFFSET UNITYSDK_OFFSET(0xD049100)

inline static constexpr unsigned int Class_3_A011C6980794EAD6_TypeDefinitionIndex = 45164;

class Class_3_A011C6980794EAD6 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_4BABC99A6C4E2CEC(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_METHOD_3_4BABC99A6C4E2CEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
