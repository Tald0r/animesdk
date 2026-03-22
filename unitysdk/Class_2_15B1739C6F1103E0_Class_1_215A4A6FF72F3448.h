#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_15B1739C6F1103E0_CLASS_1_215A4A6FF72F3448_COMPARE_OFFSET UNITYSDK_OFFSET(0x13881DE0)
#define CLASS_2_15B1739C6F1103E0_CLASS_1_215A4A6FF72F3448__CTOR_OFFSET UNITYSDK_OFFSET(0x138829D0)

inline static constexpr unsigned int Class_2_15B1739C6F1103E0_Class_1_215A4A6FF72F3448_TypeDefinitionIndex = 78611;

class Class_2_15B1739C6F1103E0_Class_1_215A4A6FF72F3448 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15B1739C6F1103E0_CLASS_1_215A4A6FF72F3448__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_15B1739C6F1103E0_CLASS_1_215A4A6FF72F3448_COMPARE_OFFSET))(this, a1, a2);
	}
};
