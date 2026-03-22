#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_872037CA3D9BDC34_1.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_425.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_6D99A03C58ED2B6E_5_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x169B9710)
#define CLASS_2_6D99A03C58ED2B6E_5_METHOD_2_6954C9CCE491070A_OFFSET UNITYSDK_OFFSET(0x169B9630)
#define CLASS_2_6D99A03C58ED2B6E_5__CTOR_OFFSET UNITYSDK_OFFSET(0x169B9620)

inline static constexpr unsigned int Class_2_6D99A03C58ED2B6E_5_TypeDefinitionIndex = 12281;

class Class_2_6D99A03C58ED2B6E_5 : public ::Class_1_872037CA3D9BDC34_1
{
public:
	::System::Int32 Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_425 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_425, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_5__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_6954C9CCE491070A(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_5_METHOD_2_6954C9CCE491070A_OFFSET))(a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D99A03C58ED2B6E_5_METHOD_2_289F28027FF47717_OFFSET))(this);
	}
};
