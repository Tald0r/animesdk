#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_7D378948BF91A800;
class Class_5_F638703ACD0FA08E;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_64D3DA1E1AE73A19___C_METHOD_1_DC5FF10B133FEB46_OFFSET UNITYSDK_OFFSET(0xD3DD1E0)
#define CLASS_3_64D3DA1E1AE73A19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3DD190)
#define CLASS_3_64D3DA1E1AE73A19___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DD1D0)

inline static constexpr unsigned int Class_3_64D3DA1E1AE73A19___c_TypeDefinitionIndex = 76582;

class Class_3_64D3DA1E1AE73A19___c : public ::System::Object
{
public:
	static ::Class_3_64D3DA1E1AE73A19___c** StaticGet___9()
	{
		return (::Class_3_64D3DA1E1AE73A19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_64D3DA1E1AE73A19___c_TypeDefinitionIndex)->GetStaticField(0x3CCC0);
	}
	static ::System::Action_2<::Class_5_F638703ACD0FA08E*, ::Class_4_7D378948BF91A800*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::Class_5_F638703ACD0FA08E*, ::Class_4_7D378948BF91A800*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_64D3DA1E1AE73A19___c_TypeDefinitionIndex)->GetStaticField(0x3CCC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_64D3DA1E1AE73A19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64D3DA1E1AE73A19___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC5FF10B133FEB46(::Class_5_F638703ACD0FA08E* a1, ::Class_4_7D378948BF91A800* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*, ::Class_4_7D378948BF91A800*))((::PBYTE)hIl2Cpp + CLASS_3_64D3DA1E1AE73A19___C_METHOD_1_DC5FF10B133FEB46_OFFSET))(this, a1, a2);
	}
};
