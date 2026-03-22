#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88C5D803CB586F76.h"

namespace System { class String; }

#define CLASS_2_502910FAA764D1D2_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x7B796A0)
#define CLASS_2_502910FAA764D1D2_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x7B78E70)
#define CLASS_2_502910FAA764D1D2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B78FF0)
#define CLASS_2_502910FAA764D1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x7B79630)

inline static constexpr unsigned int Class_2_502910FAA764D1D2_TypeDefinitionIndex = 51584;

class Class_2_502910FAA764D1D2 : public ::Class_1_88C5D803CB586F76
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
