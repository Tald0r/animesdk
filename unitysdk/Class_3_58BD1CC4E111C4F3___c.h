#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F425AB6D88F8BEAF;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_58BD1CC4E111C4F3___C_METHOD_1_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0xAA56AE0)
#define CLASS_3_58BD1CC4E111C4F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA56A90)
#define CLASS_3_58BD1CC4E111C4F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA56AD0)

inline static constexpr unsigned int Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex = 75519;

class Class_3_58BD1CC4E111C4F3___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F425AB6D88F8BEAF*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_F425AB6D88F8BEAF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex)->GetStaticField(0x436D0);
	}
	static ::Class_3_58BD1CC4E111C4F3___c** StaticGet___9()
	{
		return (::Class_3_58BD1CC4E111C4F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_58BD1CC4E111C4F3___c_TypeDefinitionIndex)->GetStaticField(0x436D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8660C3A27B56FE60(::Class_3_F425AB6D88F8BEAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F425AB6D88F8BEAF*))((::PBYTE)hIl2Cpp + CLASS_3_58BD1CC4E111C4F3___C_METHOD_1_8660C3A27B56FE60_OFFSET))(this, a1);
	}
};
