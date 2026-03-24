#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x76E9F70)
#define CLASS_1_7807B2B04302CD7B_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x76E9FE0)
#define CLASS_1_7807B2B04302CD7B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x76EA070)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_1_TypeDefinitionIndex = 37597;

class Class_1_7807B2B04302CD7B_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
