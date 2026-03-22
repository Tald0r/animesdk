#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_28A3A399628C6698;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_72B69AFB8518BAD2___C_METHOD_1_25F44760C5F7A595_OFFSET UNITYSDK_OFFSET(0xC567A90)
#define CLASS_2_72B69AFB8518BAD2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC567A40)
#define CLASS_2_72B69AFB8518BAD2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC567A80)

inline static constexpr unsigned int Class_2_72B69AFB8518BAD2___c_TypeDefinitionIndex = 39865;

class Class_2_72B69AFB8518BAD2___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_28A3A399628C6698*, ::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_3_28A3A399628C6698*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_72B69AFB8518BAD2___c_TypeDefinitionIndex)->GetStaticField(0x2BE50);
	}
	static ::Class_2_72B69AFB8518BAD2___c** StaticGet___9()
	{
		return (::Class_2_72B69AFB8518BAD2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_72B69AFB8518BAD2___c_TypeDefinitionIndex)->GetStaticField(0x2BE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_25F44760C5F7A595(::Class_3_28A3A399628C6698* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_28A3A399628C6698*))((::PBYTE)hIl2Cpp + CLASS_2_72B69AFB8518BAD2___C_METHOD_1_25F44760C5F7A595_OFFSET))(this, a1);
	}
};
