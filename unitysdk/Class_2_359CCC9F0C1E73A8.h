#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_359CCC9F0C1E73A8_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x9D2B820)
#define CLASS_2_359CCC9F0C1E73A8_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x9D2B670)
#define CLASS_2_359CCC9F0C1E73A8__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2B7E0)

inline static constexpr unsigned int Class_2_359CCC9F0C1E73A8_TypeDefinitionIndex = 51843;

class Class_2_359CCC9F0C1E73A8 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Int32>* Field_2_0; // 0x80
	::System::Int32 Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_359CCC9F0C1E73A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_359CCC9F0C1E73A8_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_359CCC9F0C1E73A8_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};
