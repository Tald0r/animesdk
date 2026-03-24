#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

#define CLASS_3_690E5E782367CDF7_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x75154E0)
#define CLASS_3_690E5E782367CDF7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75155B0)
#define CLASS_3_690E5E782367CDF7__CTOR_OFFSET UNITYSDK_OFFSET(0x7515590)

inline static constexpr unsigned int Class_3_690E5E782367CDF7_TypeDefinitionIndex = 81153;

class Class_3_690E5E782367CDF7 : public ::Class_2_F33340E023067DAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_690E5E782367CDF7__CTOR_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_690E5E782367CDF7_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_690E5E782367CDF7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
