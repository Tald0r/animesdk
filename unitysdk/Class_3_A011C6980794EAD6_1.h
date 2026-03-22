#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_A011C6980794EAD6_1_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x66FCFF0)
#define CLASS_3_A011C6980794EAD6_1_METHOD_3_4BABC99A6C4E2CEC_OFFSET UNITYSDK_OFFSET(0x66FD140)
#define CLASS_3_A011C6980794EAD6_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66FD4C0)
#define CLASS_3_A011C6980794EAD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x66FD3D0)

inline static constexpr unsigned int Class_3_A011C6980794EAD6_1_TypeDefinitionIndex = 58955;

class Class_3_A011C6980794EAD6_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_1_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_4BABC99A6C4E2CEC(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_1_METHOD_3_4BABC99A6C4E2CEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A011C6980794EAD6_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
