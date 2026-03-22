#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9A60053C76BB6B5C;
class Class_3_A72BA6D8C1BF0087_1;

#define CLASS_1_8D5FFC93C8348BAE___C_METHOD_1_661F62F6F53AD272_OFFSET UNITYSDK_OFFSET(0x9F1F340)
#define CLASS_1_8D5FFC93C8348BAE___C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x9F1F350)
#define CLASS_1_8D5FFC93C8348BAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F1F2F0)
#define CLASS_1_8D5FFC93C8348BAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F330)

inline static constexpr unsigned int Class_1_8D5FFC93C8348BAE___c_TypeDefinitionIndex = 59629;

class Class_1_8D5FFC93C8348BAE___c : public ::System::Object
{
public:
	static ::Class_3_A72BA6D8C1BF0087_1** StaticGet___9__88_2()
	{
		return (::Class_3_A72BA6D8C1BF0087_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D5FFC93C8348BAE___c_TypeDefinitionIndex)->GetStaticField(0x3E100);
	}
	static ::Class_3_9A60053C76BB6B5C** StaticGet___9__88_1()
	{
		return (::Class_3_9A60053C76BB6B5C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D5FFC93C8348BAE___c_TypeDefinitionIndex)->GetStaticField(0x3E108);
	}
	static ::Class_1_8D5FFC93C8348BAE___c** StaticGet___9()
	{
		return (::Class_1_8D5FFC93C8348BAE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D5FFC93C8348BAE___c_TypeDefinitionIndex)->GetStaticField(0x3E110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D5FFC93C8348BAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D5FFC93C8348BAE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_661F62F6F53AD272(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8D5FFC93C8348BAE___C_METHOD_1_661F62F6F53AD272_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8D5FFC93C8348BAE___C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}
};
