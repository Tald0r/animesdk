#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_CB7500E004B743F2___C_METHOD_1_4EE1B02AD2C54F52_OFFSET UNITYSDK_OFFSET(0xEB7D440)
#define CLASS_2_CB7500E004B743F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEB7D3F0)
#define CLASS_2_CB7500E004B743F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEB7D430)

inline static constexpr unsigned int Class_2_CB7500E004B743F2___c_TypeDefinitionIndex = 64442;

class Class_2_CB7500E004B743F2___c : public ::System::Object
{
public:
	static ::Class_2_CB7500E004B743F2___c** StaticGet___9()
	{
		return (::Class_2_CB7500E004B743F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB7500E004B743F2___c_TypeDefinitionIndex)->GetStaticField(0x2AB30);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__3_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB7500E004B743F2___c_TypeDefinitionIndex)->GetStaticField(0x2AB38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4EE1B02AD2C54F52()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB7500E004B743F2___C_METHOD_1_4EE1B02AD2C54F52_OFFSET))(this);
	}
};
