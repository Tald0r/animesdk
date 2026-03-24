#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7AC4A09F839C0D1;

#define CLASS_1_1AE362C01BFB83DC_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x8106BD0)
#define CLASS_1_1AE362C01BFB83DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8106C80)

inline static constexpr unsigned int Class_1_1AE362C01BFB83DC_1_TypeDefinitionIndex = 60567;

class Class_1_1AE362C01BFB83DC_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AE362C01BFB83DC_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_C7AC4A09F839C0D1* a1, ::Class_1_C7AC4A09F839C0D1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C7AC4A09F839C0D1*, ::Class_1_C7AC4A09F839C0D1*))((::PBYTE)hIl2Cpp + CLASS_1_1AE362C01BFB83DC_1_COMPARE_OFFSET))(this, a1, a2);
	}
};
