#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_AEFE11C237891E0C__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA6B9460)
#define CLASS_2_AEFE11C237891E0C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B9400)

inline static constexpr unsigned int Class_2_AEFE11C237891E0C_TypeDefinitionIndex = 40382;

class Class_2_AEFE11C237891E0C : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEFE11C237891E0C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AEFE11C237891E0C__CTOR_1_OFFSET))(this, a1);
	}
};
