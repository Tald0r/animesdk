#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define CLASS_2_26E14B4307E42EFA__CTOR_OFFSET UNITYSDK_OFFSET(0x70773F0)

inline static constexpr unsigned int Class_2_26E14B4307E42EFA_TypeDefinitionIndex = 40225;

class Class_2_26E14B4307E42EFA : public ::System::EventArgs
{
public:
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26E14B4307E42EFA__CTOR_OFFSET))(this);
	}
};
