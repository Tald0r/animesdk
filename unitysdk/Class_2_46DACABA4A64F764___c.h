#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_46DACABA4A64F764___C_METHOD_1_080D5667375425D8_OFFSET UNITYSDK_OFFSET(0x8D6C860)
#define CLASS_2_46DACABA4A64F764___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D6C810)
#define CLASS_2_46DACABA4A64F764___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6C850)

inline static constexpr unsigned int Class_2_46DACABA4A64F764___c_TypeDefinitionIndex = 41168;

class Class_2_46DACABA4A64F764___c : public ::System::Object
{
public:
	static ::Class_2_46DACABA4A64F764___c** StaticGet___9()
	{
		return (::Class_2_46DACABA4A64F764___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_46DACABA4A64F764___c_TypeDefinitionIndex)->GetStaticField(0x43940);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_46DACABA4A64F764___c_TypeDefinitionIndex)->GetStaticField(0x43948);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_080D5667375425D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46DACABA4A64F764___C_METHOD_1_080D5667375425D8_OFFSET))(this);
	}
};
