#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_107;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_DA02E6BABB5F027E___C_METHOD_1_003058BFEB1A8728_OFFSET UNITYSDK_OFFSET(0x15AB5990)
#define CLASS_3_DA02E6BABB5F027E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AB5940)
#define CLASS_3_DA02E6BABB5F027E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB5980)

inline static constexpr unsigned int Class_3_DA02E6BABB5F027E___c_TypeDefinitionIndex = 52522;

class Class_3_DA02E6BABB5F027E___c : public ::System::Object
{
public:
	static ::Class_3_DA02E6BABB5F027E___c** StaticGet___9()
	{
		return (::Class_3_DA02E6BABB5F027E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA02E6BABB5F027E___c_TypeDefinitionIndex)->GetStaticField(0x35100);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_107*>** StaticGet___9__456_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_107*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA02E6BABB5F027E___c_TypeDefinitionIndex)->GetStaticField(0x35108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_003058BFEB1A8728(::System::Boolean a1, ::Class_3_025FF4981524A424_107* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_107*))((::PBYTE)hIl2Cpp + CLASS_3_DA02E6BABB5F027E___C_METHOD_1_003058BFEB1A8728_OFFSET))(this, a1, a2);
	}
};
