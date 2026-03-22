#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_8.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x934DE90)
#define CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x934DE80)
#define CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x934DDC0)
#define CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET UNITYSDK_OFFSET(0x934DDB0)

inline static constexpr unsigned int Class_1_627A5A7833BA1936_1_TypeDefinitionIndex = 64844;

class Class_1_627A5A7833BA1936_1 : public ::System::Object
{
public:
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_0()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x2EDA0);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_2()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x2EDA8);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_1()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x2EDB0);
	}
	::Enum_3_121CF606CB7E9CD1_8 Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET))();
	}

	::Enum_3_121CF606CB7E9CD1_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_121CF606CB7E9CD1_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_121CF606CB7E9CD1_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_121CF606CB7E9CD1_8))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}
};
