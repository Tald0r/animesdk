#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_101_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x91DDCE0)
#define CLASS_1_43BD383C98B4C0C5_101_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x91DDD40)
#define CLASS_1_43BD383C98B4C0C5_101__CTOR_OFFSET UNITYSDK_OFFSET(0x91DDDD0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_101_TypeDefinitionIndex = 59925;

class Class_1_43BD383C98B4C0C5_101 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_101__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_101_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_101_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
