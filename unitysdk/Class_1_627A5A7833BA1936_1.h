#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B8B34A7928C09909.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x96C2000)
#define CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x96C2010)
#define CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C1F40)
#define CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET UNITYSDK_OFFSET(0x96C1F30)

inline static constexpr unsigned int Class_1_627A5A7833BA1936_1_TypeDefinitionIndex = 52755;

class Class_1_627A5A7833BA1936_1 : public ::System::Object
{
public:
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_0()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x335C0);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_2()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x335C8);
	}
	static ::Class_1_627A5A7833BA1936_1** StaticGet_Field_1_1()
	{
		return (::Class_1_627A5A7833BA1936_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_627A5A7833BA1936_1_TypeDefinitionIndex)->GetStaticField(0x335D0);
	}
	::Enum_3_B8B34A7928C09909 Field_1_3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_B8B34A7928C09909 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B8B34A7928C09909))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_B8B34A7928C09909 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_B8B34A7928C09909(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627A5A7833BA1936_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}
};
