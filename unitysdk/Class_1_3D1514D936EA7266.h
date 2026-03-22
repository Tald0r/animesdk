#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_759B11C4DA11AF47.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3D1514D936EA7266__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6F2600)

inline static constexpr unsigned int Class_1_3D1514D936EA7266_TypeDefinitionIndex = 41940;

class Class_1_3D1514D936EA7266 : public ::System::Object
{
public:
	static ::Il2CppArray<::Struct_2_759B11C4DA11AF47>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Struct_2_759B11C4DA11AF47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D1514D936EA7266_TypeDefinitionIndex)->GetStaticField(0x40BD0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D1514D936EA7266_TypeDefinitionIndex)->GetStaticField(0x100A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D1514D936EA7266__CCTOR_OFFSET))();
	}
};
