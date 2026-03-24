#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54D6B0A8C18161F6.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;
class Class_2_208CC9941471731A_818;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A5FC45CC23522FB5_METHOD_1_2E7C0D86C81DC9BF_OFFSET UNITYSDK_OFFSET(0x654C1A0)
#define CLASS_1_A5FC45CC23522FB5_METHOD_1_9972509F8DA79F42_OFFSET UNITYSDK_OFFSET(0x654C040)
#define CLASS_1_A5FC45CC23522FB5_METHOD_1_D0B3EB3192C70900_OFFSET UNITYSDK_OFFSET(0x654BFB0)
#define CLASS_1_A5FC45CC23522FB5__CTOR_OFFSET UNITYSDK_OFFSET(0x654BF30)

inline static constexpr unsigned int Class_1_A5FC45CC23522FB5_TypeDefinitionIndex = 78400;

class Class_1_A5FC45CC23522FB5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2181504E881DDEE4*>* Field_1_2; // 0x10
	::Class_2_208CC9941471731A_818* Field_1_4; // 0x18
	::Enum_3_54D6B0A8C18161F6 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D0B3EB3192C70900()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_D0B3EB3192C70900_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_818* Method_1_9972509F8DA79F42()
	{
		return ((::Class_2_208CC9941471731A_818*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_9972509F8DA79F42_OFFSET))(this);
	}

	::System::Int32 Method_1_2E7C0D86C81DC9BF(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A5FC45CC23522FB5_METHOD_1_2E7C0D86C81DC9BF_OFFSET))(this, a1);
	}
};
