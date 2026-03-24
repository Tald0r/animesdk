#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_855BB6A8CC9E7974_2.h"

class Class_3_AE02BC8285203464_15;

#define CLASS_3_0C27D7CD7386C842_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x7E41040)
#define CLASS_3_0C27D7CD7386C842_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x7E41010)
#define CLASS_3_0C27D7CD7386C842__CTOR_OFFSET UNITYSDK_OFFSET(0x7E41020)

inline static constexpr unsigned int Class_3_0C27D7CD7386C842_TypeDefinitionIndex = 53268;

class Class_3_0C27D7CD7386C842 : public ::Class_2_855BB6A8CC9E7974_2
{
public:
	::Class_3_AE02BC8285203464_15* Field_3_0; // 0x30

	::System::Void _ctor(::Class_3_AE02BC8285203464_15* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_15*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C27D7CD7386C842_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
	}
};
