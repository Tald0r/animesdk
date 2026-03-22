#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_4_932266083770655D;
class Class_4_C3281F1010689A02;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_BE848A35FC349094___C_METHOD_1_8855F74CDB687B04_OFFSET UNITYSDK_OFFSET(0x1AF2F1F0)
#define CLASS_3_BE848A35FC349094___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF2F1A0)
#define CLASS_3_BE848A35FC349094___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2F1E0)

inline static constexpr unsigned int Class_3_BE848A35FC349094___c_TypeDefinitionIndex = 80141;

class Class_3_BE848A35FC349094___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_932266083770655D*>>, ::System::Single>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_932266083770655D*>>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BE848A35FC349094___c_TypeDefinitionIndex)->GetStaticField(0x44F20);
	}
	static ::Class_3_BE848A35FC349094___c** StaticGet___9()
	{
		return (::Class_3_BE848A35FC349094___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_BE848A35FC349094___c_TypeDefinitionIndex)->GetStaticField(0x44F28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094___C__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_8855F74CDB687B04(::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_932266083770655D*>> a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::System::ValueTuple_2<::Class_4_C3281F1010689A02*, ::Class_4_932266083770655D*>>))((::PBYTE)hIl2Cpp + CLASS_3_BE848A35FC349094___C_METHOD_1_8855F74CDB687B04_OFFSET))(this, a1);
	}
};
