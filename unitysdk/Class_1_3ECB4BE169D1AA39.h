#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79526D80B8F6897C;
class Class_2_208CC9941471731A_215;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3ECB4BE169D1AA39__CTOR_OFFSET UNITYSDK_OFFSET(0x75A8260)

inline static constexpr unsigned int Class_1_3ECB4BE169D1AA39_TypeDefinitionIndex = 61421;

class Class_1_3ECB4BE169D1AA39 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_215*>* Field_1_3; // 0x10
	::Class_1_79526D80B8F6897C* Field_1_2; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ECB4BE169D1AA39__CTOR_OFFSET))(this);
	}
};
