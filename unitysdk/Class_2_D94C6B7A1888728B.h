#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

class Class_0_16E4307DCC419505_178;
namespace System { class Object; }

#define CLASS_2_D94C6B7A1888728B_METHOD_2_FA290394C46B1A04_OFFSET UNITYSDK_OFFSET(0x7DFBB70)
#define CLASS_2_D94C6B7A1888728B__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFBC30)

inline static constexpr unsigned int Class_2_D94C6B7A1888728B_TypeDefinitionIndex = 50169;

class Class_2_D94C6B7A1888728B : public ::System::EventArgs
{
public:
	::System::Object* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D94C6B7A1888728B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_178* Method_2_FA290394C46B1A04()
	{
		return ((::Class_0_16E4307DCC419505_178*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D94C6B7A1888728B_METHOD_2_FA290394C46B1A04_OFFSET))(this);
	}
};
