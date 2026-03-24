#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8658838487EB8905.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_198;
class Class_1_CC972ED73C1D3B07;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_6816070DF917014E_Class_1_534EF681CC2FBEAD;

#define CLASS_1_6816070DF917014E_METHOD_1_2AB3216FA3353E99_OFFSET UNITYSDK_OFFSET(0xABF01E0)
#define CLASS_1_6816070DF917014E_METHOD_1_D448DA1F5AC39607_OFFSET UNITYSDK_OFFSET(0xABEFEF0)
#define CLASS_1_6816070DF917014E__CCTOR_OFFSET UNITYSDK_OFFSET(0xABEFCF0)

inline static constexpr unsigned int Class_1_6816070DF917014E_TypeDefinitionIndex = 67921;

class Class_1_6816070DF917014E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_0_16E4307DCC419505_198*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_0_16E4307DCC419505_198*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6816070DF917014E_TypeDefinitionIndex)->GetStaticField(0x43850);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6816070DF917014E__CCTOR_OFFSET))();
	}

	static ::Struct_2_8658838487EB8905 Method_1_D448DA1F5AC39607(::Class_1_CC972ED73C1D3B07* a1, ::Class_1_CC972ED73C1D3B07* a2)
	{
		return ((::Struct_2_8658838487EB8905(*)(::Class_1_CC972ED73C1D3B07*, ::Class_1_CC972ED73C1D3B07*))((::PBYTE)hIl2Cpp + CLASS_1_6816070DF917014E_METHOD_1_D448DA1F5AC39607_OFFSET))(a1, a2);
	}

	static ::Struct_2_8658838487EB8905 Method_1_2AB3216FA3353E99(::Class_1_CC972ED73C1D3B07* a1)
	{
		return ((::Struct_2_8658838487EB8905(*)(::Class_1_CC972ED73C1D3B07*))((::PBYTE)hIl2Cpp + CLASS_1_6816070DF917014E_METHOD_1_2AB3216FA3353E99_OFFSET))(a1);
	}
};
