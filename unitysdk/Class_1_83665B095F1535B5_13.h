#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_83665B095F1535B5_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AA2D90)
#define CLASS_1_83665B095F1535B5_13__CTOR_OFFSET UNITYSDK_OFFSET(0x6AA2D80)

inline static constexpr unsigned int Class_1_83665B095F1535B5_13_TypeDefinitionIndex = 72567;

class Class_1_83665B095F1535B5_13 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83665B095F1535B5_13_TypeDefinitionIndex)->GetStaticField(0x11F90);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_13__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83665B095F1535B5_13__CCTOR_OFFSET))();
	}
};
