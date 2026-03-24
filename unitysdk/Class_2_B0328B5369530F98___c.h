#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_B0328B5369530F98___C_METHOD_1_7D69FEFAAB5854EC_OFFSET UNITYSDK_OFFSET(0x8A24160)
#define CLASS_2_B0328B5369530F98___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A24110)
#define CLASS_2_B0328B5369530F98___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A24150)

inline static constexpr unsigned int Class_2_B0328B5369530F98___c_TypeDefinitionIndex = 72704;

class Class_2_B0328B5369530F98___c : public ::System::Object
{
public:
	static ::Class_2_B0328B5369530F98___c** StaticGet___9()
	{
		return (::Class_2_B0328B5369530F98___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x37FD0);
	}
	static ::System::Action_1<::Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B0328B5369530F98___c_TypeDefinitionIndex)->GetStaticField(0x37FD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D69FEFAAB5854EC(::Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FFA1DC45E82895CA_Struct_2_46A3F15720DA5D2E))((::PBYTE)hIl2Cpp + CLASS_2_B0328B5369530F98___C_METHOD_1_7D69FEFAAB5854EC_OFFSET))(this, a1);
	}
};
