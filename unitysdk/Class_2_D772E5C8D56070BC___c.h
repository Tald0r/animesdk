#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_D772E5C8D56070BC___C_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x83B67B0)
#define CLASS_2_D772E5C8D56070BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x83B6760)
#define CLASS_2_D772E5C8D56070BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x83B67A0)

inline static constexpr unsigned int Class_2_D772E5C8D56070BC___c_TypeDefinitionIndex = 79979;

class Class_2_D772E5C8D56070BC___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__8_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D772E5C8D56070BC___c_TypeDefinitionIndex)->GetStaticField(0x3AA80);
	}
	static ::Class_2_D772E5C8D56070BC___c** StaticGet___9()
	{
		return (::Class_2_D772E5C8D56070BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D772E5C8D56070BC___c_TypeDefinitionIndex)->GetStaticField(0x3AA88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D772E5C8D56070BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D772E5C8D56070BC___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D772E5C8D56070BC___C_METHOD_1_F24A112B56A2E4B4_OFFSET))(this);
	}
};
