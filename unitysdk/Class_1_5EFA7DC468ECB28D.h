#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_5EFA7DC468ECB28D_METHOD_1_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x6751240)
#define CLASS_1_5EFA7DC468ECB28D_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x67511D0)
#define CLASS_1_5EFA7DC468ECB28D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6751170)
#define CLASS_1_5EFA7DC468ECB28D__CTOR_OFFSET UNITYSDK_OFFSET(0x6751160)

inline static constexpr unsigned int Class_1_5EFA7DC468ECB28D_TypeDefinitionIndex = 55058;

class Class_1_5EFA7DC468ECB28D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean Field_1_1; // 0x19
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFA7DC468ECB28D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFA7DC468ECB28D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFA7DC468ECB28D_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Boolean Method_1_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EFA7DC468ECB28D_METHOD_1_4E84FD21E7EECC5B_OFFSET))(this);
	}
};
