#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_50FD097DCD1BD3F7.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_09D2C9745012B1BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x681B3F0)
#define CLASS_1_09D2C9745012B1BD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x681B2F0)
#define CLASS_1_09D2C9745012B1BD_EQUALS_OFFSET UNITYSDK_OFFSET(0x681B0F0)
#define CLASS_1_09D2C9745012B1BD_METHOD_1_C7CB20458BED928D_OFFSET UNITYSDK_OFFSET(0x681B470)
#define CLASS_1_09D2C9745012B1BD_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x681B460)
#define CLASS_1_09D2C9745012B1BD__CTOR_OFFSET UNITYSDK_OFFSET(0x681B450)

inline static constexpr unsigned int Class_1_09D2C9745012B1BD_TypeDefinitionIndex = 63063;

class Class_1_09D2C9745012B1BD : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_2; // 0x20
	::Struct_2_76CCAEE20B3AE57C Field_1_0; // 0x30
	::Struct_2_76CCAEE20B3AE57C Field_1_6; // 0x48
	::UnityEngine::Color Field_1_3; // 0x60
	::Enum_3_50FD097DCD1BD3F7 Field_1_7; // 0x70
	::UnityEngine::Vector3 Field_1_4; // 0x74
	::Struct_2_B679E4D914A10080 Field_1_5; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_09D2C9745012B1BD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_09D2C9745012B1BD*))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::Struct_2_032E3093F309FC91 Method_1_C7CB20458BED928D()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09D2C9745012B1BD_METHOD_1_C7CB20458BED928D_OFFSET))(this);
	}
};
