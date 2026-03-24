#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_40D129A35D13DE9D__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB0AFF0)

inline static constexpr unsigned int Class_1_40D129A35D13DE9D_TypeDefinitionIndex = 38759;

class Class_1_40D129A35D13DE9D : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_40D129A35D13DE9D_TypeDefinitionIndex)->GetStaticField(0xF810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40D129A35D13DE9D__CCTOR_OFFSET))();
	}
};
