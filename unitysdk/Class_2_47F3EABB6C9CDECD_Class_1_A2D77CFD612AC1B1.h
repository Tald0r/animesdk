#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_91;
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_47F3EABB6C9CDECD_CLASS_1_A2D77CFD612AC1B1_METHOD_1_80E68FDBB229647C_OFFSET UNITYSDK_OFFSET(0xA46E630)
#define CLASS_2_47F3EABB6C9CDECD_CLASS_1_A2D77CFD612AC1B1__CTOR_OFFSET UNITYSDK_OFFSET(0xA46E620)

inline static constexpr unsigned int Class_2_47F3EABB6C9CDECD_Class_1_A2D77CFD612AC1B1_TypeDefinitionIndex = 65394;

class Class_2_47F3EABB6C9CDECD_Class_1_A2D77CFD612AC1B1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Predicate_1<::Class_2_208CC9941471731A_91*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD_CLASS_1_A2D77CFD612AC1B1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_80E68FDBB229647C(::Class_2_208CC9941471731A_91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_91*))((::PBYTE)hIl2Cpp + CLASS_2_47F3EABB6C9CDECD_CLASS_1_A2D77CFD612AC1B1_METHOD_1_80E68FDBB229647C_OFFSET))(this, a1);
	}
};
