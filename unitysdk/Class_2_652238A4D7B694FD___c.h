#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_3_025FF4981524A424_103;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_652238A4D7B694FD___C_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0xCE5CDD0)
#define CLASS_2_652238A4D7B694FD___C_METHOD_1_BB46C9985B021C91_OFFSET UNITYSDK_OFFSET(0xCE5CD60)
#define CLASS_2_652238A4D7B694FD___C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0xCE5CD50)
#define CLASS_2_652238A4D7B694FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE5CD00)
#define CLASS_2_652238A4D7B694FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE5CD40)

inline static constexpr unsigned int Class_2_652238A4D7B694FD___c_TypeDefinitionIndex = 62532;

class Class_2_652238A4D7B694FD___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Int32>** StaticGet___9__4_1()
	{
		return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_652238A4D7B694FD___c_TypeDefinitionIndex)->GetStaticField(0x2EC90);
	}
	static ::System::Action_1<::Class_3_025FF4981524A424_103*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_025FF4981524A424_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_652238A4D7B694FD___c_TypeDefinitionIndex)->GetStaticField(0x2EC98);
	}
	static ::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_652238A4D7B694FD___c_TypeDefinitionIndex)->GetStaticField(0x2ECA0);
	}
	static ::Class_2_652238A4D7B694FD___c** StaticGet___9()
	{
		return (::Class_2_652238A4D7B694FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_652238A4D7B694FD___c_TypeDefinitionIndex)->GetStaticField(0x2ECA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_652238A4D7B694FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_652238A4D7B694FD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_652238A4D7B694FD___C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB46C9985B021C91(::Class_3_025FF4981524A424_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_103*))((::PBYTE)hIl2Cpp + CLASS_2_652238A4D7B694FD___C_METHOD_1_BB46C9985B021C91_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7A053DF81C1024(::Class_1_57F7F2BF8C55D6B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + CLASS_2_652238A4D7B694FD___C_METHOD_1_3E7A053DF81C1024_OFFSET))(this, a1);
	}
};
