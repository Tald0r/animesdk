#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_786;

#define CLASS_1_E41D2909CC373885_METHOD_1_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0xC86F950)
#define CLASS_1_E41D2909CC373885_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xC86F850)
#define CLASS_1_E41D2909CC373885__CTOR_OFFSET UNITYSDK_OFFSET(0xC86F840)

inline static constexpr unsigned int Class_1_E41D2909CC373885_TypeDefinitionIndex = 42214;

class Class_1_E41D2909CC373885 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_786* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E41D2909CC373885__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E41D2909CC373885_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E41D2909CC373885_METHOD_1_6D0360BD23602584_OFFSET))(this, a1);
	}
};
