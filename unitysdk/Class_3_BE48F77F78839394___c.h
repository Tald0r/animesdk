#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_11169EF287A415D4;
class Class_3_12F80F898C1E14E9;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_BE48F77F78839394___C_METHOD_1_962C4BC72078A0B4_OFFSET UNITYSDK_OFFSET(0x6257AF0)
#define CLASS_3_BE48F77F78839394___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6257AA0)
#define CLASS_3_BE48F77F78839394___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6257AE0)

inline static constexpr unsigned int Class_3_BE48F77F78839394___c_TypeDefinitionIndex = 70304;

class Class_3_BE48F77F78839394___c : public ::System::Object
{
public:
	static ::Class_3_BE48F77F78839394___c** StaticGet___9()
	{
		return (::Class_3_BE48F77F78839394___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BE48F77F78839394___c_TypeDefinitionIndex)->GetStaticField(0x41070);
	}
	static ::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_12F80F898C1E14E9*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_12F80F898C1E14E9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BE48F77F78839394___c_TypeDefinitionIndex)->GetStaticField(0x41078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BE48F77F78839394___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE48F77F78839394___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_962C4BC72078A0B4(::Class_3_11169EF287A415D4* a1, ::Class_3_12F80F898C1E14E9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_11169EF287A415D4*, ::Class_3_12F80F898C1E14E9*))((::PBYTE)hIl2Cpp + CLASS_3_BE48F77F78839394___C_METHOD_1_962C4BC72078A0B4_OFFSET))(this, a1, a2);
	}
};
