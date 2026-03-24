#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_38.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_501.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3DE501BB9D446508_METHOD_2_4CEAEA2D01E525FA_OFFSET UNITYSDK_OFFSET(0x123DD2B0)
#define CLASS_2_3DE501BB9D446508_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x123DD220)
#define CLASS_2_3DE501BB9D446508__CTOR_OFFSET UNITYSDK_OFFSET(0x123DD1A0)

inline static constexpr unsigned int Class_2_3DE501BB9D446508_TypeDefinitionIndex = 11338;

class Class_2_3DE501BB9D446508 : public ::Class_1_D9FAA3DCCFE14DB8_38
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x48

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_501 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_501, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_3DE501BB9D446508__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_4CEAEA2D01E525FA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3DE501BB9D446508_METHOD_2_4CEAEA2D01E525FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DE501BB9D446508_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}
};
