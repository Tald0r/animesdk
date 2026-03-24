#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B34301746BFA36C2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_DA8BF519212BAE65_CLASS_1_AD601E606E2608AC_METHOD_1_DAA1FA3E96D085C2_OFFSET UNITYSDK_OFFSET(0x67ABCB0)
#define CLASS_2_DA8BF519212BAE65_CLASS_1_AD601E606E2608AC__CTOR_OFFSET UNITYSDK_OFFSET(0x67ABCA0)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_Class_1_AD601E606E2608AC_TypeDefinitionIndex = 63430;

class Class_2_DA8BF519212BAE65_Class_1_AD601E606E2608AC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B34301746BFA36C2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_AD601E606E2608AC__CTOR_OFFSET))(this);
	}

	::Class_3_B34301746BFA36C2* Method_1_DAA1FA3E96D085C2(::System::UInt32 a1)
	{
		return ((::Class_3_B34301746BFA36C2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_CLASS_1_AD601E606E2608AC_METHOD_1_DAA1FA3E96D085C2_OFFSET))(this, a1);
	}
};
