#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD_EQUALS_OFFSET UNITYSDK_OFFSET(0x884F830)
#define CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x884F8D0)
#define CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD__CTOR_OFFSET UNITYSDK_OFFSET(0x884F960)

inline static constexpr unsigned int Class_1_FD836485273AB7D1_Class_1_921AF3E7CA1425CD_TypeDefinitionIndex = 72105;

class Class_1_FD836485273AB7D1_Class_1_921AF3E7CA1425CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD836485273AB7D1_CLASS_1_921AF3E7CA1425CD_GETHASHCODE_OFFSET))(this, a1);
	}
};
