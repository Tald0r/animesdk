#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D8588B91FE1E2AC4;
class Class_2_214A08D8A91F32A6;
class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_2_E87F1D15F1D4AC72;
class Class_3_FAC8D0FE935227B1_Class_4_9E12F0B601C72CD8_6;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_E2828CA0AAE5C975;

#define CLASS_2_361E46FE0AB3D6E7_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18DE4D50)
#define CLASS_2_361E46FE0AB3D6E7_METHOD_2_AE28EB12CB70B929_OFFSET UNITYSDK_OFFSET(0x18DE40E0)
#define CLASS_2_361E46FE0AB3D6E7_METHOD_2_FAD7ECE7C33F7F0F_OFFSET UNITYSDK_OFFSET(0x18DE5360)
#define CLASS_2_361E46FE0AB3D6E7_METHOD_2_FC1480F8EEC2C4B4_OFFSET UNITYSDK_OFFSET(0x18DE4DC0)
#define CLASS_2_361E46FE0AB3D6E7_ONCLICK_OFFSET UNITYSDK_OFFSET(0x18DE4B90)
#define CLASS_2_361E46FE0AB3D6E7__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE4D00)

inline static constexpr unsigned int Class_2_361E46FE0AB3D6E7_TypeDefinitionIndex = 76164;

class Class_2_361E46FE0AB3D6E7 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50
	::UnityEngine::RectTransform* Field_2_5; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_2_13; // 0x70
	::UnityEngine::RectTransform* Field_2_7; // 0x78
	::System::Collections::Generic::List_1<::Class_2_9E3E3CDA608A4F58*>* Field_2_4; // 0x80
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x90
	::Class_2_214A08D8A91F32A6* Field_2_15; // 0x98
	::Class_2_60DDD9C206686F44* Field_2_0; // 0xA0
	::UnityEngine::RectTransform* Field_2_12; // 0xA8
	::System::Collections::Generic::List_1<::Class_3_E2828CA0AAE5C975<::Class_3_FAC8D0FE935227B1_Class_4_9E12F0B601C72CD8_6*>*>* Field_2_11; // 0xB0
	::Class_1_D8588B91FE1E2AC4* Field_2_16; // 0xB8
	::UnityEngine::RectTransform* Field_2_3; // 0xC0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0xC8
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AE28EB12CB70B929(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7_METHOD_2_AE28EB12CB70B929_OFFSET))(this, a1, a2);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC1480F8EEC2C4B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7_METHOD_2_FC1480F8EEC2C4B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_FAD7ECE7C33F7F0F(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_361E46FE0AB3D6E7_METHOD_2_FAD7ECE7C33F7F0F_OFFSET))(this, a1, a2, a3);
	}
};
