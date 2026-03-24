#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0314D6ED0A20A151__CCTOR_OFFSET UNITYSDK_OFFSET(0x839F770)

inline static constexpr unsigned int Class_1_0314D6ED0A20A151_TypeDefinitionIndex = 65599;

class Class_1_0314D6ED0A20A151 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0314D6ED0A20A151_TypeDefinitionIndex)->GetStaticField(0xE620);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0314D6ED0A20A151__CCTOR_OFFSET))();
	}
};
