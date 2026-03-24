#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D8588B91FE1E2AC4;
class Class_2_214A08D8A91F32A6;
class Class_2_60DDD9C206686F44;
class Class_2_A8F5ABF31E066ED4;
class Class_2_E87F1D15F1D4AC72;
class Class_3_CFE95B82BD52EB3B;
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_669A1564D361F7D3_METHOD_2_00B7701C8EB3A17E_OFFSET UNITYSDK_OFFSET(0x7E360C0)
#define CLASS_2_669A1564D361F7D3_METHOD_2_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x7E36740)
#define CLASS_2_669A1564D361F7D3_METHOD_2_336E8BAE7CBFD2F6_OFFSET UNITYSDK_OFFSET(0x7E35FD0)
#define CLASS_2_669A1564D361F7D3_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x7E367A0)
#define CLASS_2_669A1564D361F7D3_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x7E35410)
#define CLASS_2_669A1564D361F7D3_ONCLICK_OFFSET UNITYSDK_OFFSET(0x7E35BE0)
#define CLASS_2_669A1564D361F7D3__CTOR_OFFSET UNITYSDK_OFFSET(0x7E35F80)

inline static constexpr unsigned int Class_2_669A1564D361F7D3_TypeDefinitionIndex = 77402;

class Class_2_669A1564D361F7D3 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::Class_1_D8588B91FE1E2AC4* Field_2_11; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x68
	::UnityEngine::RectTransform* Field_2_8; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x80
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x88
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x90
	::UnityEngine::RectTransform* Field_2_7; // 0x98
	::Class_2_214A08D8A91F32A6* Field_2_10; // 0xA0
	::UnityEngine::RectTransform* Field_2_3; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_336E8BAE7CBFD2F6(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_METHOD_2_336E8BAE7CBFD2F6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_METHOD_2_232E79648899E21B_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_00B7701C8EB3A17E(::Class_3_CFE95B82BD52EB3B* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_669A1564D361F7D3_METHOD_2_00B7701C8EB3A17E_OFFSET))(this, a1, a2);
	}
};
