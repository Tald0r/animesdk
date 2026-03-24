#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONOUILOOPEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACD1D0)

inline static constexpr unsigned int MonoUILoopEmpty_TypeDefinitionIndex = 72983;

class MonoUILoopEmpty : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUILOOPEMPTY__CTOR_OFFSET))(this);
	}
};
