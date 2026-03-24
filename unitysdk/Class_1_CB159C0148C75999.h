#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF474E1214A8195A;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB159C0148C75999_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xB7EEC50)
#define CLASS_1_CB159C0148C75999_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xB7EEB20)
#define CLASS_1_CB159C0148C75999_METHOD_1_E935551D1104082E_OFFSET UNITYSDK_OFFSET(0xB7F01F0)
#define CLASS_1_CB159C0148C75999__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7EEA80)

inline static constexpr unsigned int Class_1_CB159C0148C75999_TypeDefinitionIndex = 42940;

class Class_1_CB159C0148C75999 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_CF474E1214A8195A*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_CF474E1214A8195A*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB159C0148C75999_TypeDefinitionIndex)->GetStaticField(0x47110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::Class_1_CF474E1214A8195A* Method_1_E935551D1104082E(::System::Int32 a1)
	{
		return ((::Class_1_CF474E1214A8195A*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB159C0148C75999_METHOD_1_E935551D1104082E_OFFSET))(a1);
	}
};
