#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06946D1A8A6532A9;

#define CLASS_1_87748DF3032F67C8___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x18E2CF70)
#define CLASS_1_87748DF3032F67C8___C_METHOD_1_F87BCCC99DF9A3E7_OFFSET UNITYSDK_OFFSET(0x18E2CF90)
#define CLASS_1_87748DF3032F67C8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E2CF20)
#define CLASS_1_87748DF3032F67C8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2CF60)

inline static constexpr unsigned int Class_1_87748DF3032F67C8___c_TypeDefinitionIndex = 81566;

class Class_1_87748DF3032F67C8___c : public ::System::Object
{
public:
	static ::Class_1_87748DF3032F67C8___c** StaticGet___9()
	{
		return (::Class_1_87748DF3032F67C8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87748DF3032F67C8___c_TypeDefinitionIndex)->GetStaticField(0x46820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F87BCCC99DF9A3E7(::Class_1_06946D1A8A6532A9* a1, ::Class_1_06946D1A8A6532A9* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_06946D1A8A6532A9*, ::Class_1_06946D1A8A6532A9*))((::PBYTE)hIl2Cpp + CLASS_1_87748DF3032F67C8___C_METHOD_1_F87BCCC99DF9A3E7_OFFSET))(this, a1, a2);
	}
};
