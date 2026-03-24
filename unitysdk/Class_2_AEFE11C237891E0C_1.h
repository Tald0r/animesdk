#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_AEFE11C237891E0C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9498A40)
#define CLASS_2_AEFE11C237891E0C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x94989E0)

inline static constexpr unsigned int Class_2_AEFE11C237891E0C_1_TypeDefinitionIndex = 59769;

class Class_2_AEFE11C237891E0C_1 : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEFE11C237891E0C_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AEFE11C237891E0C_1__CTOR_1_OFFSET))(this, a1);
	}
};
