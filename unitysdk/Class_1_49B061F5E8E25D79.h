#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_43108451FB8C5B3C.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_195;
namespace SimpleJSON { class JSONNode; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_49B061F5E8E25D79_METHOD_1_07A7546908B52626_OFFSET UNITYSDK_OFFSET(0x94B6F40)
#define CLASS_1_49B061F5E8E25D79_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x94B61F0)
#define CLASS_1_49B061F5E8E25D79_METHOD_1_8A21DC8FC2A15E32_OFFSET UNITYSDK_OFFSET(0x94B7820)
#define CLASS_1_49B061F5E8E25D79_METHOD_1_CB3F59AF494CC3E2_OFFSET UNITYSDK_OFFSET(0x94B7540)
#define CLASS_1_49B061F5E8E25D79__CCTOR_OFFSET UNITYSDK_OFFSET(0x94B6150)

inline static constexpr unsigned int Class_1_49B061F5E8E25D79_TypeDefinitionIndex = 56709;

class Class_1_49B061F5E8E25D79 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_43108451FB8C5B3C, ::System::Func_3<::Struct_2_E147DFD2A4EE8B0B, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_195*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_43108451FB8C5B3C, ::System::Func_3<::Struct_2_E147DFD2A4EE8B0B, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_195*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_49B061F5E8E25D79_TypeDefinitionIndex)->GetStaticField(0x458B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49B061F5E8E25D79__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_07A7546908B52626(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_195*& a3)
	{
		return ((::System::Void(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_195*&))((::PBYTE)hIl2Cpp + CLASS_1_49B061F5E8E25D79_METHOD_1_07A7546908B52626_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CB3F59AF494CC3E2(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::Class_0_16E4307DCC419505_195*& a3)
	{
		return ((::System::Void(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::Class_0_16E4307DCC419505_195*&))((::PBYTE)hIl2Cpp + CLASS_1_49B061F5E8E25D79_METHOD_1_CB3F59AF494CC3E2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49B061F5E8E25D79_METHOD_1_67D41ACFEF39E84E_OFFSET))();
	}

	static ::System::Void Method_1_8A21DC8FC2A15E32(::Struct_2_E147DFD2A4EE8B0B& a1, ::SimpleJSON::JSONNode* a2, ::Struct_2_A47ACAABA9AAFE92& a3)
	{
		return ((::System::Void(*)(::Struct_2_E147DFD2A4EE8B0B&, ::SimpleJSON::JSONNode*, ::Struct_2_A47ACAABA9AAFE92&))((::PBYTE)hIl2Cpp + CLASS_1_49B061F5E8E25D79_METHOD_1_8A21DC8FC2A15E32_OFFSET))(a1, a2, a3);
	}
};
