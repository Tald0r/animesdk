#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_D92C6A0B7586F904___C_METHOD_1_F053CE6F2B2744ED_OFFSET UNITYSDK_OFFSET(0x9E276B0)
#define CLASS_2_D92C6A0B7586F904___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E27660)
#define CLASS_2_D92C6A0B7586F904___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E276A0)

inline static constexpr unsigned int Class_2_D92C6A0B7586F904___c_TypeDefinitionIndex = 71081;

class Class_2_D92C6A0B7586F904___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Char>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D92C6A0B7586F904___c_TypeDefinitionIndex)->GetStaticField(0x31A90);
	}
	static ::Class_2_D92C6A0B7586F904___c** StaticGet___9()
	{
		return (::Class_2_D92C6A0B7586F904___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D92C6A0B7586F904___c_TypeDefinitionIndex)->GetStaticField(0x31A98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D92C6A0B7586F904___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D92C6A0B7586F904___C__CTOR_OFFSET))(this);
	}

	::System::Char Method_1_F053CE6F2B2744ED(::System::String* a1)
	{
		return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D92C6A0B7586F904___C_METHOD_1_F053CE6F2B2744ED_OFFSET))(this, a1);
	}
};
