#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F053D39E8E0E58E;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3B685F4F49C931DE___C_METHOD_1_68A74C51F6C0F76D_OFFSET UNITYSDK_OFFSET(0x6AD63E0)
#define CLASS_3_3B685F4F49C931DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6AD6390)
#define CLASS_3_3B685F4F49C931DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6AD63D0)

inline static constexpr unsigned int Class_3_3B685F4F49C931DE___c_TypeDefinitionIndex = 42865;

class Class_3_3B685F4F49C931DE___c : public ::System::Object
{
public:
	static ::Class_3_3B685F4F49C931DE___c** StaticGet___9()
	{
		return (::Class_3_3B685F4F49C931DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B685F4F49C931DE___c_TypeDefinitionIndex)->GetStaticField(0x36460);
	}
	static ::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B685F4F49C931DE___c_TypeDefinitionIndex)->GetStaticField(0x36468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B685F4F49C931DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B685F4F49C931DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_68A74C51F6C0F76D(::Class_3_3F053D39E8E0E58E* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3F053D39E8E0E58E*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_3B685F4F49C931DE___C_METHOD_1_68A74C51F6C0F76D_OFFSET))(this, a1, a2);
	}
};
