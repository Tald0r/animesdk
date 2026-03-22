#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x6DA8680)

inline static constexpr unsigned int Class_1_83665B095F1535B5_10_TypeDefinitionIndex = 64424;

class Class_1_83665B095F1535B5_10 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_10_TypeDefinitionIndex)->GetStaticField(0x10770);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_10__CCTOR_OFFSET))();
	}
};
